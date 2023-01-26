cat /etc/passwd | grep -v '^#' | awk 'NR % 2 ==0' | awk -F ":" '{print $1}' | rev | sort -r | awk 'NR=='$FT_LINE1', NR=='$FT_LINE2'' | awk -v d=", " '{s=(NR==1?s:s d) $0} END {print s}' | tr "\n" "."
