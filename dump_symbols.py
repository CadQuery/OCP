import lief
import sys
from path import Path

from logzero import logger

prefix = sys.argv[-1]

prefix_mac = (Path(prefix) / 'lib_mac').expand()
libs_mac = prefix_mac.glob('**/libTK*.*.*.dylib')

prefix_linux = (Path(prefix) / 'lib_linux').expand()
libs_linux = prefix_linux.glob('**/libTK*.so.*.*.*')

prefix_win = (Path(prefix) / 'lib_win').expand()
libs_win = prefix_win.glob('**/**/TK*.dll')


for name,libs in {'linux' : libs_linux,'mac' : libs_mac, 'win' : libs_win}.items():

    logger.info(libs)

    exported_symbols = []
    
    for lib in libs:

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
