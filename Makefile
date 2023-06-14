# Define flags
CC=gcc
CFLAGS=-Wall -Werror -Wextra -Wpedantic -O3
MAKEFILE=Makefile

# Define files
SRC = cvector.c main.c
OBJ = $(SRC:.c=.o)		# Replace .c ext with .o for corresponding object files

# Main target
all: main

.PHONY: clean all

main: $(OBJ)
	$(CC) -o $@ $^

# Build all object files from source files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf *.c *.c~ *.h~ main
