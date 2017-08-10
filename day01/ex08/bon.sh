ldapsearch -QLLL cn=*bon* cn | grep  BON | wc -l | sed s/" "//g
