#!/bin/bash
tmpfile=".cleanall.tmp"

find */*/Makefile | sed 's/Makefile//g' > $tmpfile

while IFS= read -r line
do
	echo Cleaning directory: $line
	make fclean -s -C $line
done < $tmpfile

rm $tmpfile