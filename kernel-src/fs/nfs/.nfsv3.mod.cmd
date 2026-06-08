savedcmd_nfsv3.mod := printf '%s\n'   nfs3super.o nfs3client.o nfs3proc.o nfs3xdr.o nfs3acl.o | awk '!x[$$0]++ { print("./"$$0) }' > nfsv3.mod
