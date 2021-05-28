import os
from fnmatch import fnmatch
import shutil

root = '.\\'
pattern = "*.cpp"
out = "out\\"
os.mkdir(out)
for path, subdirs, files in os.walk(root):
    for name in files:
        if fnmatch(name, pattern):
            fil = os.path.join(path, name)
            opth = path[2:]
            newfil = out +'_'.join(os.path.split(opth))+"_Program"+name
            shutil.copy2(fil, newfil)
