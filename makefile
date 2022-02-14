FLAGS = -Wall -ansi -pedantic
OBJ = __count_t.o
EXEC = __count_main

$(EXEC): $(OBJ)
	gcc $(FLAGS) -o $(EXEC) $(OBJ)

$(EXEC).o: $(EXEC).c
	gcc $(FLAGS) -c $(EXEC).c

$(OBJ): __count_t.c
	gcc $(FLAGS) -c __count_t.c

clean: 
	rm -f *.o $(EXEC) $(OBJ)
