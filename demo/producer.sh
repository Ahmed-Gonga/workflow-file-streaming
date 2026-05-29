#!/bin/bash
FILE=/mnt/snfs/stream-demo.txt
rm -f "$FILE"

echo "chunk-1" >> "$FILE"
sleep 2
echo "chunk-2" >> "$FILE"
sleep 2
echo "chunk-3" >> "$FILE"
