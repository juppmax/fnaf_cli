

# Default target to compile the program
all: 
	mkdir -p objects
	g++ -c data/game/functions.cpp -o objects/functions.o
	g++ -c data/game/doors.cpp -o objects/doors.o
	g++ -c data/game/cam.cpp -o objects/cam.o
	g++ -o fnaf_cli.exe main.cpp -Wall -Os -s -lwinmm -static objects/functions.o objects/doors.o objects/cam.o
	#./fnaf_cli.exe


# Clean target to remove compiled files
clean:
	rm bin/*exe
	rm objects/*o

# Phony targets to prevent conflicts with files named 'clean' or 'all'
.PHONY: all clean
