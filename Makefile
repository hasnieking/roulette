CXX = c++

CXXFLAGS = -std=c++14 -Wall -g

FILENAME = roulette

OBJECTS = \
	main.o \
	game.o \
	playgame.o

HEADERS = \
	game.h \
	playgame.h


all:    		$(FILENAME)

$(FILENAME):	$(OBJECTS)
		$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

%.o:			%.cc $(HEADERS)
		$(CXX) $(CXXFLAGS) -c $<

clean:
		rm -f $(FILENAME)
		rm -f $(OBJECTS)