#2017A7PS0060U
#!/bin/bash

echo "Shell Script for Regex Expression"
echo " "

echo "Enter minimum characters"
read minchar
echo "Enter maximum character"
read maxchar
echo "Enter File Name"
read filename
echo " "

echo "Using GREP"
echo " "
grep -E "^.{${minchar},${maxchar}}$" ${filename}
echo " "

echo "Using SED"
echo " "
sed -nr "/^.{${minchar},${maxchar}}$/p" ${filename}
echo " "

echo "Using AWK"
echo " "
awk -v minchar=${minchar} -v maxchar=${maxchar} 'length($0)>minchar && length($0)<maxchar' ${filename}


