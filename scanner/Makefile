TARGET_LIBRARY = libscanner.so
LIBDIR = $(PREFIX)/usr/lib
REQUIREMENTS = base.o identifier.o keyword.o number.o operator.o token.o white.o
INSTALL = install
UNINSTALL = rm

all:		$(TARGET_LIBRARY)

clean:
	rm -rf *.o *.so

install:
	$(INSTALL) $(TARGET_LIBRARY) $(DESTDIR)$(LIBDIR)/$(TARGET_LIBRARY)

uninstall:
	$(UNINSTALL) $(DESTDIR)$(LIBDIR)/$(TARGET_LIBRARY)

$(TARGET_LIBRARY):	$(REQUIREMENTS)
	$(CXX) -shared $(REQUIREMENTS) -o $(TARGET_LIBRARY)

base.o:		base.cxx
	$(CXX) -c base.cxx -o base.o

identifier.o:	identifier.cxx
	$(CXX) -c identifier.cxx -o identifier.o

keyword.o:	keyword.cxx
	$(CXX) -c keyword.cxx -o keyword.o

number.o:	number.cxx
	$(CXX) -c number.cxx -o number.o

operator.o:	operator.cxx
	$(CXX) -c operator.cxx -o operator.o

token.o:	token.cxx
	$(CXX) -c token.cxx -o token.o

white.o:
	$(CXX) -c white.cxx -o white.o
