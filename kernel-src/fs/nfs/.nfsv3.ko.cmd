savedcmd_nfsv3.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T /home/g/linux/scripts/module.lds -o nfsv3.ko nfsv3.o nfsv3.mod.o .module-common.o
