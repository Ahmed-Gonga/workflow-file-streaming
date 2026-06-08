savedcmd_nfsv2.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T /home/g/linux/scripts/module.lds -o nfsv2.ko nfsv2.o nfsv2.mod.o .module-common.o
