SOURCES=main.cpp scenario.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=termfection
CC=g++
CFLAGS=-std=c++11 -c -Wall
LDFLAGS=

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *o $(EXECUTABLE)