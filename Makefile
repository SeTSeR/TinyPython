TARGET = interpreter
PREFIX = /usr/local/bin
MAKE = make
OBJECTS = scanner/base.o scanner/number.o scanner/identifier.o scanner/token.o scanner/operator.o


.PHONY:		all clean install uninstall rebuild make-scanner

$(TARGET):	main.o input.o errors.o make-scanner
	$(CXX) input.o main.o errors.o $(OBJECTS) -o $(TARGET)

all:	$(TARGET)

rebuild:	clean all

clean:
	rm -rf *.o $(TARGET) && $(MAKE) -C scanner clean

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

make-scanner:
	$(MAKE) -C scanner base.o number.o identifier.o token.o operator.o
