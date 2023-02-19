#!/bin/bash

# $1 file_name wich should be copy
# $2 copied file_name

function copy1 (){
    if [[ -f $1 ]]
    then
	cat $1 > $2
    else
    	echo "File not found."
    fi
}

copy1 $1 $2


