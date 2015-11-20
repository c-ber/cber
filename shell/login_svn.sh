#!/usr/bin/expect
set ip 192.168.1.30
set password cb123456
set timeout 10
spawn ssh chenbin@$ip

expect {
"*yes/no" {send "yes\r"; exp_continue}
"*password*" { send "$password\r"}
}


expect "*@semp:~$"
send "cd svnb/\r"

expect "*/svnb$"
send "rm -rf *\r"

set timeout 200
send "svn co http://192.168.1.6/svn/fc7000/branches/fc7k2_b2442;\r"

set timeout 10
expect "*Checked out revision*"
send "cd fc7k2_b2442/\r"

expect "*fc7k2_b2442$"
send "make p=fc7002 passthrough=orig\r"

interact  #stay ssh

#send  "exit\r"    #exit ssh  
#expect eof

