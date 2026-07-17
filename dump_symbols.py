import lief
import platform
import sys

from logzero import logger

libs = sys.argv[-1].split(';')

exported_symbols = []

# lief <0.14 uses lief.EXE_FORMATS; 0.14+ uses lief.Binary.FORMATS
FORMATS = getattr(lief, 'EXE_FORMATS', None) or lief.Binary.FORMATS

for lib in libs:

    lib = lib.strip()
    if not lib:
        raise RuntimeError(f'{lib!r} was an empty string')

    logger.info(f'Analyzing {lib}')

    p = lief.parse(lib)
    if p is None:
        raise RuntimeError(f'lief.parse failed for {lib!r}')

    format = p.format

    if format == FORMATS.ELF:
        name = "freebsd" if platform.system() == "FreeBSD" else "linux"
        for s in p.exported_symbols:
            exported_symbols.append(f'{s.name}\n')
    elif format == FORMATS.MACHO:
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
