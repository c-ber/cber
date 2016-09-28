#!/bin/sh

SVN_EVENT=""
SVN_USER="陈彬"
SVN_DATE=`date`

if [ ! -z "$1" ] 
then
	SVN_EVENT=$1
else
	echo "Without log?!"
	exit
fi

if [ ! -z "$2" ] 
then
	SVN_REVIEWER=$2
else
    echo "Please input reviewer!"
	exit
fi


svn ci -m "【修改原因】$SVN_EVENT
【修改作者】$SVN_USER
【修改时间】$SVN_DATE
【reviewer】$SVN_REVIEWER
"
