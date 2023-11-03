import lief
import sys

from logzero import logger

libs = sys.argv[-1].split(';')
name = {'win32' : 'win', 'darwin' : 'mac', 'linux' : 'linux'}[sys.platform]


exported_symbols = []

for lib in libs:

    logger.info(f'Analyzing {lib}')

    p = lief.parse(lib)

    if p is None:
        continue

    if name=='linux':
        for s in p.exported_symbols:
            exported_symbols.append(f'{s.name}\n')
    elif name=='mac':
        for s in p.symbols:
            if s.type>1:
                exported_symbols.append(f'{s.name}\n')
    else:
        for s in p.exported_functions:
            exported_symbols.append(f'{s.name}\n')

with open(f'symbols_mangled_{name}.dat','w') as f:
    f.writelines(exported_symbols)
