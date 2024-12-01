import subprocess as sp
sp.run([
    "gcc", "-c", "compiler/main.cpp", "-o", "compiler/main.exe"
])