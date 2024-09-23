#!/bin/sh
cat /etc/passwd | cut -d ':' -f1 | tail -n +11 | awk '!(NR%2)' | rev | sort -r | awk -v l1="$FT_LINE1" -v l2="$FT_LINE2" '(NR >= l1 && NR <= l2)' | xargs | sed 's/ /, /g' | tr '\n' '.'
