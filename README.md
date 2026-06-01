# sNFS: File Streaming for Black-Box Tasks

This repository contains the project artifacts for the sNFS lab project.

## Current Implementation

The current implementation modifies the Linux NFS client and includes:

- Kernel-level NFS read/write tracing
- Available data offset tracking
- Reader blocking prototype
- Wake-up synchronization
- Runtime validation using kernel logs

## Important Files

- `kernel-src/fs/nfs/read.c`: modified NFS read path
- `kernel-src/fs/nfs/write.c`: modified NFS write path
- `snfs-final-stable.patch`: final kernel patch
- `demo/`: producer/consumer demo scripts
- `snfs-*-proof.txt`: validation logs and kernel tracing evidence

## Note

The full Linux kernel build directory is not included because it is too large for GitLab upload. The modified source files and patches are included to reproduce the implementation.
