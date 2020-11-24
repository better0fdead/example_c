CC := gcc

CFLAGS := -std=c99 -Wall -Werror -pedantic -c

H := ./headers/

S := ./src/

O := ./obj/

T := ./tests


unit_tests.exe: $(T)/src/unit_tests.c  $(S)mysort.c $(H)mysort.h $(T)/src/test_mysort.c $(S)nums.c $(H)nums.h $(T)/src/test_nums.c  $(S)array.c $(H)array.h $(T)/src/test_array.c
	$(CC) -o unit_tests.exe $(T)/src/unit_tests.c  $(S)mysort.c $(H)mysort.h $(T)/src/test_mysort.c $(S)nums.c $(H)nums.h $(T)/src/test_nums.c  $(S)array.c $(H)array.h $(T)/src/test_array.c

app.exe: $(O)main.o $(O)nums.o $(O)array.o $(O)mysort.o
	$(CC) -o app.exe $(O)main.o $(O)nums.o $(O)array.o $(O)mysort.o


$(O)main.o: $(S)main.c $(H)array.h $(H)nums.h $(H)mysort.h
	$(CC) $(CFLAGS) $(S)main.c -o $(O)main.o

$(O)array.o: $(S)array.c $(H)array.h
	$(CC) $(CFLAGS) $(S)array.c -o $(O)array.o

$(O)mysort.o: $(S)mysort.c $(H)mysort.h
	$(CC) $(CFLAGS) $(S)mysort.c -o $(O)mysort.o

$(O)nums.o: $(S)nums.c $(H)nums.h
	$(CC) $(CFLAGS) $(S)nums.c -o $(O)nums.o

clean:
	rm -f $(O)*.o *.exe