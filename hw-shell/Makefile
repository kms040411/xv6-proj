CC = gcc
TARGET = sh
OBJ = sh.o
RM = rm -f

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

sh.o : sh.c
	$(CC) -c sh.c

test : $(TARGET)
	./$(TARGET) < t.sh > output.txt
	sh < t.sh > answer.txt
	diff -q answer.txt output.txt
	rm -f *.txt

clean :
	$(RM) *.o
	$(RM) $(OBJ)