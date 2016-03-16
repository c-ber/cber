#!/bin/sh -x

CODE_REVIEW=/disk2/home/chenbin/review/
CODE_OLD=/disk2/home/chenbin/review/old
CODE_NEW=/disk2/home/chenbin/review/new

SVN_PATH=/disk2/home/chenbin/fz/fc7k2_b4178/

cd $SVN_PATH

rm $CODE_OLD/*
rm $CODE_NEW/*


svn st -q | awk -F '[ ;]+' '{if($1 ~ /^[M]+$/) print $2;print $2  > "svnlog"}'
cd $CODE_OLD


while read line
do
    cp $SVN_PATH$line $CODE_NEW
    mv $SVN_PATH$line $SVN_PATH$line-bak
    
    svn up $SVN_PATH$line
    cp $SVN_PATH$line $CODE_OLD
    
    rm $SVN_PATH$line
    mv $SVN_PATH$line-bak $SVN_PATH$line
done < $SVN_PATH"svnlog"


svn st -q | awk -F '[ ;]+' '{if($1 ~ /^[A]+$/) print $2;print $2  > "svnlog"}'
while read line
do
    cp $SVN_PATH$line $CODE_NEW
done < $SVN_PATH"svnlog"