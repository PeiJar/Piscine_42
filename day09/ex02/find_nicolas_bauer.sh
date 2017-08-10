cat $1 | grep -i  "nicolas[[:space:]]Bauer" | rev | cut -f 2 | rev  | grep '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}'
