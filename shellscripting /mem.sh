#! /bin/sh

cd /proc

var=ls -l | grep cpuinfo meminfo 

newvar=$var | head -1 cpuinfo
new1var=$var | head -2 meminfo
echo $newvar
echo $new1var

exit 0

