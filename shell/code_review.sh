#!/bin/sh -x

CODE_REVIEW=/home/chenbin/review/
CODE_OLD_BASE=/home/chenbin/review/old
CODE_NEW_BASE=/home/chenbin/review/new

SVN_PATH=/home/chenbin/svnb/fc7k2_b4024/


cd $SVN_PATH

rm -r $CODE_OLD_BASE/*
rm -r $CODE_NEW_BASE/*


svn st -q | awk -F '[ ;]+' '{if($1 ~ /^[M]+$/) print $2;print $2  > "svnlog"}'
cd $CODE_OLD


while read line
do
	CODE_NEW="$CODE_NEW_BASE/`dirname $line`" #取出改动的文件所在的目录
	CODE_OLD="$CODE_OLD_BASE/`dirname $line`" #用于对比的改动之前的目录
	mkdir -p $CODE_NEW # 在新文件夹中创建改动的文件所在目录
	mkdir -p $CODE_OLD # 在旧文件夹中创建改动的文件所在目录
    
    cp $SVN_PATH$line $CODE_NEW
    mv $SVN_PATH$line $SVN_PATH$line-bak
    
    svn up  $SVN_PATH$line
    cp $SVN_PATH$line $CODE_OLD
    
    rm $SVN_PATH$line
    mv $SVN_PATH$line-bak $SVN_PATH$line
done < $SVN_PATH"svnlog"


svn st -q | awk -F '[ ;]+' '{if($1 ~ /^[A]+$/) print $2;print $2  > "svnlog"}'
while read line
do
	CODE_NEW="$CODE_NEW_BASE/`dirname $line`" #取出改动的文件所在的目录
	CODE_OLD="$CODE_OLD_BASE/`dirname $line`" #用于对比的改动之前的目录
	mkdir -p $CODE_NEW # 在新文件夹中创建改动的文件所在目录
	mkdir -p $CODE_OLD # 在旧文件夹中创建改动的文件所在目录
    cp $SVN_PATH$line $CODE_NEW
done < $SVN_PATH"svnlog"