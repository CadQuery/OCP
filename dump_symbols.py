import lief
import sys

from logzero import logger

libs = sys.argv[-1].split(';')

exported_symbols = []

for lib in libs:

    logger.info(f'Analyzing {lib}')

    p = lief.parse(lib)
    format = p.format

    if p is None:
        continue

    if format==p.FORMATS.ELF:
        name = "linux"
        for s in p.exported_symbols:
            exported_symbols.append(f'{s.name}\n')
    elif format==p.FORMATS.MACHO:
        name = "mac"
        for s in p.symbols:
            if s.raw_type>1:
                exported_symbols.append(f'{s.name}\n')
    else:
        name = "win"
        for s in p.exported_functions:
            exported_symbols.append(f'{s.name}\n')

with open(f'symbols_mangled_{name}.dat','w') as f:
    f.writelines(exported_symbols)
