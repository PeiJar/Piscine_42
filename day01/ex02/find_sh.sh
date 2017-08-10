find . -type f -name "*.sh" | sed "s/\.sh//" | sed "s/\.\///" | rev | cut -d "/" -f1 | rev
