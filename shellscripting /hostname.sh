#!/bin/sh 


cd /etc

ls -l | grep hosts | cat hosts | head -2 | awk '{print $2, $1;}'

exit 0
