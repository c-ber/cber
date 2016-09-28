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
	CODE_NEW="$CODE_NEW_BASE/`dirname $line`" #ȡ���Ķ����ļ����ڵ�Ŀ¼
	CODE_OLD="$CODE_OLD_BASE/`dirname $line`" #���ڶԱȵĸĶ�֮ǰ��Ŀ¼
	mkdir -p $CODE_NEW # �����ļ����д����Ķ����ļ�����Ŀ¼
	mkdir -p $CODE_OLD # �ھ��ļ����д����Ķ����ļ�����Ŀ¼
    
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
	CODE_NEW="$CODE_NEW_BASE/`dirname $line`" #ȡ���Ķ����ļ����ڵ�Ŀ¼
	CODE_OLD="$CODE_OLD_BASE/`dirname $line`" #���ڶԱȵĸĶ�֮ǰ��Ŀ¼
	mkdir -p $CODE_NEW # �����ļ����д����Ķ����ļ�����Ŀ¼
	mkdir -p $CODE_OLD # �ھ��ļ����д����Ķ����ļ�����Ŀ¼
    cp $SVN_PATH$line $CODE_NEW
done < $SVN_PATH"svnlog"