CXX := clang++-5.0
CXXFLAGS := -Wall -Wextra -pedantic -std=c++17 -stdlib=libc++

main: main.o
	$(CXX) $(CXXFLAGS) $< -o $@ 

