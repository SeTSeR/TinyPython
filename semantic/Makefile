TARGET_LIBRARY = libsemantic.so
REQUIREMENTS = vartab.o
LIBDIR = $(PREFIX)/usr/lib
INSTALL = install
UNINSTALL = rm

all:	$(TARGET_LIBRARY)

clean:
	rm -rf *.o *.so

install:
	$(INSTALL) $(TARGET_LIBRARY) $(DESTDIR)$(LIBDIR)/$(TARGET_LIBRARY)

uninstall:
	$(UNINSTALL) $(DESTDIR)$(LIBDIR)/$(TARGET_LIBRARY)

$(TARGET_LIBRARY):		$(REQUIREMENTS)
	$(CXX) -shared $(REQUIREMENTS) -o $(TARGET_LIBRARY)

vartab.o:	vartab.cxx
	$(CXX) -c vartab.cxx -o vartab.o
