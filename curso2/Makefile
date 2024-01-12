PROJECT_NAME=forca.out

SRC=$(wildcard ./src/*.cpp)
OBJ=$(patsubst %.cpp, %.o, $(SRC))


build: $(OBJ)
	$(CXX) -g -O0 $^ -o $(PROJECT_NAME)

src/%.o : src/%.cpp
	$(CXX) -g -O0 -c $< -o $@

clean:
	rm -rvf src/*.o
