CC = g++
TARGET = tetris
SOURCES = TetrisC.cpp \
	Pane.cpp \
	Boardpane.cpp \
	Infopane.cpp \
	Helppane.cpp \
	Statpane.cpp \
	NextPane.cpp \
	Boardnext.cpp \
	Block.cpp \
	main.cpp
LDFLAGS = -lncursesw

all:
	g++ -std=c++11 -o tetris main.cpp TetrisC.cpp Pane.cpp Boardpane.cpp \
	Infopane.cpp Helppane.cpp Statpane.cpp Nextpane.cpp Boardnext.cpp Block.cpp -lncursesw
clean:
	rm -rf *.o tetris
