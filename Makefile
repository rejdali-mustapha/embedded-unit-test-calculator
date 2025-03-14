CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = src/main.c src/calculator.c
TARGET = calculator

all: build test

build:
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

test: build
	python3 -m unittest tests/test_calculator.py

clean:
	rm -f $(TARGET)

