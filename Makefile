CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = app
SRC = test.c utils.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
	./$(TARGET)
fall:
	$(CC) $(CFLAGS) -fsanitize=address $(SRC) -o $(TARGET)
	./$(TARGET)
clean:
	rm -f $(TARGET)
