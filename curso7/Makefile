PROJECT_NAME=leilao.out

SRC=$(wildcard ./src/*.cpp)
SRC_TEST=$(wildcard ./tests/*.cpp)
OBJ=$(patsubst %.cpp, %.o, $(SRC))
OBJ_TEST=$(patsubst %.cpp, %.o, $(SRC_TEST))


build: $(OBJ) main.o
	$(CXX) $^ -o $(PROJECT_NAME)

%.o : %.cpp
	$(CXX) -I"src/" -g -c $< -o $@

.PONNY: clean
run: build
	./$(PROJECT_NAME)

tests: $(OBJ) $(OBJ_TEST)
	$(CXX) $^ -o catch.out

.PONNY: tests
run_tests: tests
	./catch.out

.PONNY: clean
clean:
	rm -rvf src/*.o
	rm -rvf tests/*.o
