#!/bin/bash
dt=$(date|awk '{print $2" "$3}')
echo $dt
ls -lR / 2>/dev/null |egrep "$dt"

