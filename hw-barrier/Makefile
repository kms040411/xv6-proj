CC = gcc
CFLAGS = -g -O2 -pthread

OBJ = barrier.o
TARGET = barrier

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)