CC = gcc
TARGET = sh
OBJ = sh.o
RM = rm -f

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

sh.o : sh.c
	$(CC) -c sh.c

test : $(TARGET)
	@touch output.txt answer.txt
	@./$(TARGET) < t.sh >> output.txt
	@sh < t.sh >> answer.txt
	@diff answer.txt output.txt
	@echo "[SUCCESS] test1"
	@rm -f answer.txt output.txt

clean :
	$(RM) *.o
	$(RM) $(OBJ)
	$(RM) *.txt
	$(RM) sh