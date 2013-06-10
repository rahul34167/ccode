echo Reading /etc/motd using cat
cat /etc/hosts | while read line
do
echo "$line"
done
