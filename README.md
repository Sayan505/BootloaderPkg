## Build Steps
* Clone EDK2: `git clone --depth=1 https://github.com/tianocore/edk2 edk2 --progress`
* Clone EDK2 submodules: `git -C edk2 submodule update --init --recursive --progress`
* Clone this repo (Pkg) inside EDK2's directory: `git clone ...`

* use Bash: `bash`
* `cd edk2`
* build edk2:
    * `export WORKSPACE=$PWD; export EDK_TOOLS_PATH=$PWD/BaseTools; export PATH=$EDK_TOOLS_PATH/Bin/Linux-x86_64:$PATH`
    * `make -C BaseTools`
    * `. edksetup.sh`
* build this Pkg:
    * `build -p BootloaderPkg/Application/BootloaderPkg.dsc -b DEBUG -a X64 -t GCC5`
