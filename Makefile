CC=gcc
CFLAGS=-Iinclude

# Detectar el sistema operativo y ajustar LDFLAGS en consecuencia
ifeq ($(OS),Windows_NT)
	LDFLAGS=-Llib -lpdcurses
else
	LDFLAGS=-lncurses
endif

all: roguelike

roguelike: $(wildcard src/*.c)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	rm -f roguelike