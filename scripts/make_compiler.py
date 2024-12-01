# ---------------------------------------------------------------------------------------- #
#                              Builder for Compiler - Project UEF                          #
# ---------------------------------------------------------------------------------------- #
import subprocess as sp
import platform
import time
import sys as os

sys = platform.system()
print("Welcome to UEF make")

def loading(proc):
    d = ""
    while proc.poll() is None:
        print(f"\rBuilding compiler{d}", end="", flush=True)
        d += "."
        if len(d) > 3:
            d = ""
        time.sleep(0.4)
    print(f"\rBuilding compiler... Done!")
    pass

if sys == "Linux" or sys == "Darwin":
    try:
        cmd = sp.Popen([
            "gcc", "-c", "../compiler/main.cpp", "-Icompiler/include", "-o", "compiler/main.bin"
        ])
    except Exception as err:
        print(f"\033[1;31mError!\033[0;91m Compilation not successful! make sure you have installed all dependencies\033[3m - ErrorCode: {err}\033[0;0m")
        os.exit(249)
        pass
    loading(cmd)
    pass
    
if sys == "Windows":
    try:
        cmd = sp.Popen([
            "gcc", "-c", "../compiler/main.cpp", "-Icompiler/include", "-o", "compiler/main.exe"
        ])
    except Exception as err:
        print(f"Compilation not successful! make sure you have installed all dependencies - ErrorCode: {err}")
        sys.exit(305)
        pass
    loading(cmd)
    pass
pass
