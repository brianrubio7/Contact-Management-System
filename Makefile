CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/main.c 
OBJ = $(SRC:.c=.o)
TARGET = contact_manager

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)


run:
	./contact_manager