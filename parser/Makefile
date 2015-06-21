TARGET_LIBRARY = libparser.so
LIBDIR = $(PREFIX)/usr/lib
INSTALL = install
UNINSTALL = rm
REQUIREMENTS = assignment.o base.o block.o dowhilestatement.o elsestatement.o expression.o factor.o ifstatement.o inputstatement.o nonterminal.o printstatement.o program.o relation.o term.o whilestatement.o

all:	$(TARGET_LIBRARY)

clean:
	rm -rf *.o *.so

install:
	$(INSTALL) $(TARGET_LIBRARY) $(DESTDIR)$(LIBDIR)/$(TARGET_LIBRARY)

uninstall:
	$(UNINSTALL) $(DESTDIR)$(LIBDIR)/$(TARGET_LIBRARY)

$(TARGET_LIBRARY):	$(REQUIREMENTS)	
	$(CXX) -shared $(REQUIREMENTS) -o $(TARGET_LIBRARY)

assignment.o:	assignment.cxx
	$(CXX) -c assignment.cxx -o assignment.o

base.o:		base.cxx
	$(CXX) -c base.cxx -o base.o

block.o:	block.cxx
	$(CXX) -c block.cxx -o block.o

dowhilestatement.o:	dowhilestatement.cxx
	$(CXX) -c dowhilestatement.cxx -o dowhilestatement.o

elsestatement.o:	elsestatement.cxx
	$(CXX) -c elsestatement.cxx -o elsestatement.o

expression.o:		expression.cxx
	$(CXX) -c expression.cxx -o expression.o

factor.o:		factor.cxx
	$(CXX) -c factor.cxx -o factor.o

ifstatement.o:		ifstatement.cxx
	$(CXX) -c ifstatement.cxx -o ifstatement.o

inputstatement.o:	inputstatement.cxx
	$(CXX) -c inputstatement.cxx -o inputstatement.o

nonterminal.o:		nonterminal.cxx
	$(CXX) -c nonterminal.cxx -o nonterminal.o

printstatement.o:	printstatement.cxx
	$(CXX) -c printstatement.cxx -o printstatement.o

program.o:		program.cxx
	$(CXX) -c program.cxx -o program.o

relation.o:		relation.cxx
	$(CXX) -c relation.cxx -o relation.o

term.o:			term.cxx
	$(CXX) -c term.cxx -o term.o

whilestatement.o:	whilestatement.cxx
	$(CXX) -c whilestatement.cxx -o whilestatement.o
