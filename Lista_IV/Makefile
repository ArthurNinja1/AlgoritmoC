SHELL := /bin/bash

CC = gcc
CFLAGS = -Wall -Wextra -O2 -Wno-unused-parameter
LDLIBS = -lm

TARGETS = $(shell echo Exerc_{1..8})

all: $(TARGETS)

Exerc_%: Exerc_%.c
	@echo "Compilando $*..."
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

run_%: Exerc_%
	@echo "Executando $*:"
	@./Exerc_$*

clean:
	@echo "Limpando executáveis..."
	rm -f $(TARGETS)

.PHONY: all clean
