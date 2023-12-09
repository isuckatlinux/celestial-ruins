CC=gcc
CFLAGS=-Iinclude

# Aquí asumimos que estás en Linux; ajusta según sea necesario
LDFLAGS=-lncurses

all: roguelike

roguelike: $(wildcard src/*.c)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	rm -f roguelike
