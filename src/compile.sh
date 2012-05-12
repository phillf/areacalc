#!/bin/bash
clear
echo "Compiling main.cpp"
g++ *.cpp -c
echo " "
echo "Linking Libraries"
g++ *.o -ldl -lpthread -o a2manager
echo " "
echo "Cleaning Up"
rm usefulFuncs.o vhostMgmt.o specialDeployments.o main.o startStop.o
echo " "
echo "DONE"
echo " "
sleep 3
clear
