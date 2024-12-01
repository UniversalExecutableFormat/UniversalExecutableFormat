# -------------------------------------------------------------------- #
#                         Builder for Project UEF                      #
# -------------------------------------------------------------------- #
import subprocess as sp
import platform

os = platform.system()

if os == "Linux" or os == "Darwin":
    sp.run([
        "gcc", "-c", "compiler/main.cpp", "-Icompiler/include", "-o", "compiler/main.bin"
    ])
if os == "Windows":
    sp.run([
        "gcc", "-c", "compiler/main.cpp", "-Icompiler\\include", "-o", "compiler/main.exe"
    ])
pass
