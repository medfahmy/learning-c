main :
	gcc src/main.c -O -Wall -W -pedantic -ansi -std=c99 -o bin/main

format :
	gcc src/format.c -o bin/format -O -Wall -W -pedantic -ansi -std=c99 && ./bin/format

expr :
	gcc src/expr.c -o bin/expr -lm -O -Wall -W -pedantic -ansi -std=c99 && ./bin/expr

ptr :
	gcc src/ptr.c -o bin/ptr -O -Wall -W -pedantic -ansi -std=c99 && ./bin/ptr

chap4 :
	gcc src/exs/chap4.c -o bin/chap4 -O -Wall -W -pedantic -ansi -std=c99 && ./bin/chap4

str :
	gcc src/strcat.c -o bin/strcat -O -Wall -W -pedantic -ansi -std=c99 && ./bin/strcat

logic :
	gcc src/logic.c -o bin/logic -O -Wall -W -pedantic -ansi -std=c99 && ./bin/logic

getch :
	gcc src/getch.c -o bin/getch -O -Wall -W -pedantic -ansi -std=c99 && ./bin/getch
