PROJECT_NAME=leilao.out

SRC=$(wildcard ./src/*.cpp)
OBJ=$(patsubst %.cpp, %.o, $(SRC))


build: $(OBJ)
	$(CXX) $^ -o $(PROJECT_NAME)

%.o : %.cpp
	$(CXX) -g -O0 -c $< -o $@

test1: $(OBJ) tests/teste-avaliador.cpp
	$(CXX) -I"src/" $^ -o tests/$@

.PONNY: tests
tests: test1
	./tests/test1


.PONNY: clean
clean:
	rm -rvf src/*.o
