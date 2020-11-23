CXX = c++

CXXFLAGS = -std=c++14 -Wall -Weffc++ -g

FILENAME = roulette

OBJECTS = \
	main.o \
	game.o

HEADERS = \
	game.h 


all:    		$(FILENAME)

$(FILENAME):	$(OBJECTS)
		$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

%.o:			%.cc $(HEADERS)
		$(CXX) $(CXXFLAGS) -c $<

clean:
		rm -f $(FILENAME)
		rm -f $(OBJECTS)