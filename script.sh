#! /bin/bash

for i in `ls -1 grafos/`
do
echo "Grafo $i" >> $1   
./main < grafos/$i >> $1 
echo " " >> $1
done

 
