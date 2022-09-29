CC=gcc
CFLAGS=-Wall -lm
OUTPUT=prime_test
REMOVE_COMMAND=rm
all: prime_test
prime_test: primality.c
  $(CC) $(CFLAGS) -o $(OUTPUT)  
clean:
  $(REMOVE_COMMAND) $(OUTPUT)  
