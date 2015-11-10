#!/bin/bash
#
# by Fabian Bieker <fabian.bieker@web.de>
#

. scripts/misc/base.sh

SRCIP=$1
SRCPORT=$2
DSTIP=$3
DSTPORT=$4

SERVICE="telnet"
HOST="bps-pc10"

state="login"
count=1

my_start

login_failed() {
	sleep 3
	echo "Login incorrect"
	if [ $count -eq 4 ]; then
		my_stop
	fi
	count=$[$count+1]
	state="login"

	echo ""
	echo -n "$HOST Login: "

}

echo "Welcome to SuSE Linux 8.0 (i386) - Kernel 2.4.18-64GB-SMP (8)."
echo -n "$HOST Login: "


while read name; do

	# remove control-characters
	name=`echo $name | sed s/[[:cntrl:]]//g`

	echo "$name" >> $LOG


	case $state in
	login)
		if [ -z $name ]; then
			login_failed
		else
			state="pass"
			echo -n "Password: "
		fi
	;;
	pass)
		login_failed
	;;
	esac
	
done
my_stop
