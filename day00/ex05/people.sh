ldapsearch -LLL "uid=z*" cn | grep cn | sort -rf | sed s/"cn: "//g

