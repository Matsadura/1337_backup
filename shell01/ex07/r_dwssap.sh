#!/bin/sh
cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | rev | awk -F ':' '{print $7}' | sort -r | awk "NR>=${FT_LINE1} && NR<=${FT_LINE2}" | xargs | sed 's/ /, /g' | sed 's/$/\./' | tr -d '\n'
