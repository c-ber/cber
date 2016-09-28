#!/bin/bash

# find usb used by somebody
usbs=`fuser /dev/ttyUSB*  |& cut -d/ -f3 | cut -d: -f1 | sed  's/tty//g'`
pids=`fuser /dev/ttyUSB*  |& cut -d/ -f3 | awk '{print $2}'`

for ((i=0; i < ${#usbs[*]}; ++i));do
who=`ps e | grep ${pids[$i]} | awk '{print $10}' | sed '1q' | cut -d'=' -f2`
echo $who is using ${usbs[$i]}
done
