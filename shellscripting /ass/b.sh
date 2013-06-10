#!/bin/bash
ps -A|grep 'tty'>>/dev/null
if [ $? -eq 0 ]
then
	for i in {1..10}
	do
		top -b -n 1|grep 'R'|awk 'BEGIN{SUM=0}{SUM+=$6}END{print SUM}'
		sleep 1
	done
fi
