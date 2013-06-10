#! /bin/bash
ls $1 >>\dev\null
if [ $? -eq 0 ]
then
	echo "File Exists."
	if [ -f $1 ]
	then
		echo "Plain File"
	fi
	if [ -r $1 ]
	then
		echo "Readable"
	fi
	if [ -w $1 ]
	then
		echo "Writable"
	fi
	if [ -d $1 ]
	then
		echo "Directory"
	fi
fi
