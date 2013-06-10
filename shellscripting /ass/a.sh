#!/bin/bash -x
read source
obj=`echo $source | awk -F. '{print $1}'`
gcc $source -o $obj
if [ $? -eq 0 ]
then
	if [ -x $obj ]
	then
		./$obj
	else
		chmod +x $obj
		./$obj
	fi
fi
