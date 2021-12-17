main :
	gcc src/main.c -O -Wall -W -pedantic -ansi -std=c99 -o bin/main

format :
	gcc src/format.c -o bin/format -O -Wall -W -pedantic -ansi -std=c99 && ./bin/format
