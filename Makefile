all:
	g++ -I include -L lib -o main src/main.cpp src/chip8.cpp -lmingw32 -lSDL2main -lSDL2