TARGET = interpreter
BINDIR=$(PREFIX)/usr/bin
INSTALL = install
UNINSTALL = rm
REQUIREMENTS = errors.o input.o main.o
LIBRARIES = libparser.so libscanner.so libsemantic.so
WORKDIR = .
CXXFLAGS = -Lparser -lparser -Lscanner -lscanner -Lsemantic -lsemantic

all:		$(TARGET)

clean:
	rm $(TARGET) *.o && $(MAKE) -C parser clean && $(MAKE) -C scanner clean && $(MAKE) -C semantic clean

install:
	$(INSTALL) $(TARGET) $(DESTDIR)$(BINDIR)/$(TARGET) && $(MAKE) -C parser PREFIX=../$(PREFIX) install && $(MAKE) -C scanner PREFIX=../$(PREFIX) install && $(MAKE) -C semantic PREFIX=../$(PREFIX) install

uninstall:
	$(UNINSTALL) $(DESTDIR)$(BINDIR)/$(TARGET) && $(MAKE) -C parser PREFIX=../$(PREFIX) uninstall && $(MAKE) -C scanner PREFIX=../$(PREFIX) uninstall && $(MAKE) -C semantic PREFIX=../$(PREFIX) uninstall

$(TARGET):	$(REQUIREMENTS) $(LIBRARIES)
	$(CXX) $(CXXFLAGS) $(REQUIREMENTS) -o interpreter

errors.o:	errors.cxx
	$(CXX) $(CXXFLAGS)-c errors.cxx -o errors.o

input.o:	input.cxx
	$(CXX) $(CXXFLAGS) -c input.cxx -o input.o

main.o:		main.cxx
	$(CXX) $(CXXFLAGS) -c main.cxx -o main.o

libparser.so:
	$(MAKE) -C parser libparser.so

libscanner.so:
	$(MAKE) -C scanner libscanner.so

libsemantic.so:
	$(MAKE) -C semantic libsemantic.so

.PHONY: all clean install uninstall
