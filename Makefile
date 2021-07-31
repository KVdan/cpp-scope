# Makefile 

# **********************************************
# Variables to control Makefile operaiton

CXX = g++
CXXFLAGS = -Wall -g

# **********************************************
main: main.o 
	$(CXX) $(CXXFLAGS) -o main main.o 

main.o: main.cpp hello.h 
	$(CXX) $(CXXFLAGS) -c main.cpp

