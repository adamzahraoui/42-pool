#!/bin/sh
NB1=$(echo $FT_NBR1 | tr \'\\\\\"\?\! "01234")
NB2=$(echo $FT_NBR2 | tr "mrdoc" "01234")
B1B10=$(echo "ibase=5; $NB1" | bc)
B2B10=$(echo "ibase=5; $NB2" | bc)
SUM=$B1B10+$B2B10
echo "obase=13; ibase=10; $SUM" | bc | tr "0123456789ABC" "gtaio luSnemf"
