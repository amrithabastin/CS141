#!/bin/bash
echo "Hello there"
echo "What's your name?"
read INPUT
echo "Oh!cool.So you are $INPUT"
echo "Here goes your very own files and folder"
mkdir $INPUT
cd $INPUT
for x in 1 2 3 4 5

do 
   touch $INPUT$x.cpp
done


