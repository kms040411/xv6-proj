CC = gcc
CFLAGS = -g -O2 -pthread

OBJ = barrier.o
TARGET = barrier

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

all: $(TARGET)

test: $(TARGET)
	@echo "[test case 1] nthread = 2"
	@./$(TARGET) 2
	@echo "[test case 2] nthread = 3"
	@./$(TARGET) 3
	@echo "[test case 3] nthread = 5"
	@./$(TARGET) 5
	@echo "[test case 4] nthread = 10"
	@./$(TARGET) 10

clean:
	rm -f *.o
	rm -f $(TARGET)