CC = gcc
CFLAGS = -Wall -g
TARGET = vector_app
OBJS = main.o vector.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c vector.h
	$(CC) $(CFLAGS) -c main.c

vector.o: vector.c vector.h
	$(CC) $(CFLAGS) -c vector.c

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean