CC = gcc
LDFLAGS=`pkg-config --cflags --libs gtk+-2.0`
CFLAGS = -c -Wall -Wall -c -std=c99 `pkg-config --cflags --libs gtk+-2.0`
SOURCES = main.c gui.c menu.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=Restaurante

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *.o
