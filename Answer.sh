#!/bin/bash


echo "Currently logged users?";  whoami
echo "----------------------------------------------------------------------"
echo "Your shell directory?  $SHELL"
echo "----------------------------------------------------------------------"
echo "Home directory?  $HOME"
echo "----------------------------------------------------------------------"
echo "OS name & version?";  cat /etc/os-release
echo "Current working directory?    $PWD" 
echo "----------------------------------------------------------------------"
echo "Number of users logged in? ";   who -q
echo "----------------------------------------------------------------------"
echo "Show all available shells in your sistem";   cat /etc/shells
echo "----------------------------------------------------------------------"
echo "Hard disk information ?  ";  lsblk
echo "----------------------------------------------------------------------"
echo "CPU information?  ";   lscpu
echo "----------------------------------------------------------------------"
echo "Memory information?  ";  free
echo "----------------------------------------------------------------------"
echo "File system information?  ";   df -Th
echo "----------------------------------------------------------------------"
echo "Currently running process?  ";  ps -aux
echo "----------------------------------------------------------------------"


