PROJECT_NAME=leilao.out

SRC=$(wildcard ./src/*.cpp)
OBJ=$(patsubst %.cpp, %.o, $(SRC))

build: $(OBJ) main.o
	$(CXX) $^ -o $(PROJECT_NAME)

%.o : %.cpp
	$(CXX) -I"src/" -O2 -c $< -o $@

.PONNY: clean
run: build
	./$(PROJECT_NAME)

.PONNY: clean
clean:
	rm -rvf src/*.o
