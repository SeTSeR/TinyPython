TARGET = interpreter
PREFIX = /usr/local/bin


.PHONY:		all clean install uninstall

$(TARGET):	main.o input.o
	g++ input.o main.o -o $(TARGET)

all:	$(TARGET)

clean:
	rm -rf *.o

install:	$(TARGET)
	install $(TARGET) $(PREFIX)

uninstall:
	rm -rf $(PREFIX)/$(TARGET)

input.o:
	g++ -c input.cxx -o input.o

main.o:
	g++ -c main.cxx -o main.o
