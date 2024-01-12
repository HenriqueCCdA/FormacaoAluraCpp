PROJECT_NAME=banco.out

SRC=$(wildcard ./*.cpp)
OBJ=$(patsubst %.cpp, %.o, $(SRC))


build: $(OBJ)
	$(CXX) -g -O0 $^ -o $(PROJECT_NAME)

%.o : %.cpp
	$(CXX) -g -O0 -c $< -o $@

clean:
	rm -rvf *.o
