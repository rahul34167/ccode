#! /bin/sh 




var=ls -l | grep hello.c | sed 's/studio/stdio/' hello.c 

$var > hello.c

cat hello.c

exit 0


