#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

HEADERS=PhoneticFinder.hpp
OBJECTS=PhoneticFinder.o

run: demo
	./$^

demo: Demo.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o demo

test: TestCounter.o Test.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

Test.o: Test.cpp
	$(CXX) $(CXXFLAGS) --compile $< -o $@

PhoneticFinder.o: PhoneticFinder.cpp PhoneticFinder.hpp
	$(CXX) $(CXXFLAGS) --compile $< -o $@

clean:
	rm -f *.o demo test
