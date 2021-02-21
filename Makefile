cc = gcc-8 -x c -std=gnu90 -Wpedantic

var_init: var_init.c
	$(cc) -o var_init var_init.c

storage: storage.c
	$(cc) -o storage storage.c

file: file.c
	$(cc) -o file file.c

mem: mem.c
	$(cc) -o mem mem.c

clean:
	rm -f file mem storage test var_init 
