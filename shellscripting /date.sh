#! /bin/sh 
#date 


ls -l >  date.txt 

for file in  date.txt 

do 

awk  '{ print $7 }' date.txt | sort -n | head -5

done 
exit 0

