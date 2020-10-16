import os
import sys

if sys.argv[1:]:
    for argv in sys.argv[1:]:
        if argv.endswith(".c"):
            os.system(f"gcc -Wall -o {argv.removesuffix('.c')} {argv}")