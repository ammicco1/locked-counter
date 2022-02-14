FLAGS = -Wall -ansi -pedantic
OBJS = __count_t.o __count_main.o
EXEC = __count_main

$(EXEC): $(OBJS)
	gcc $(FLAGS) -o $(EXEC) $(OBJS)

$(EXEC).o: $(EXEC).c
	gcc $(FLAGS) -c $(EXEC).c

__count_t.o: __count_t.c
	gcc $(FLAGS) -c __count_t.c

clean: 
	rm -f *.o $(EXEC) $(OBJS)
