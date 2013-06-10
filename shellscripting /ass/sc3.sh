#! /usr/bin
echo "Enter the number of files and folders"
read count
for i in { 1..$count }
do
	echo "Input 1 for File and 2 for Directory"
	read type
	echo "Enter the name"
	read source
	if [ $type -eq 1 ]
	then
		touch $source
	fi
	if [ $type -eq 2 ]
	then
		mkdir $source
	fi
done
