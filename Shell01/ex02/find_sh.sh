find . -name "*.sh" | awk 'BEGIN {FS="/"} {print $NF}' | awk 'BEGIN {FS="."} {print $(NF-1)}'
