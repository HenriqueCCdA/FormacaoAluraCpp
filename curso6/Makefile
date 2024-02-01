PROJECT_NAME=leilao.out

SRC=$(wildcard ./src/*.cpp)
OBJ=$(patsubst %.cpp, %.o, $(SRC))


build: $(OBJ)
	$(CXX) $^ -o $(PROJECT_NAME)

%.o : %.cpp
	$(CXX) -g -O0 -c $< -o $@

tests: $(OBJ) tests/teste-avaliador.cpp
	$(CXX) -I"src/" $^ -o catch.out

.PONNY: tests
run_tests: tests
	./catch.out


.PONNY: clean
clean:
	rm -rvf src/*.o
