TARGET = interpreter
PREFIX = /usr/local/bin


.PHONY:		all clean install uninstall

$(TARGET):	main.o input.o errors.o
	$(CXX) input.o main.o errors.o -o $(TARGET)

all:	$(TARGET)

clean:
	rm -rf *.o

install:	$(TARGET)
	install $(TARGET) $(PREFIX)

uninstall:
	rm -rf $(PREFIX)/$(TARGET)

input.o:
	$(CXX) -c input.cxx -o input.o

main.o:
	$(CXX) -c main.cxx -o main.o

errors.o:
	$(CXX) -c errors.cxx -o errors.o
