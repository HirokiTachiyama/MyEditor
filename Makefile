# Makefile
# My Editor
#
# Copyrights (c) Hiroki Tachiyama
# Create 2017/7/21 22:55
#

CXX = g++
OPTIONS = -I $(INC_DIR)
OBJ_DIR = obj
SRC_DIR = src
INC_DIR = include
VPATH = $(OBJ_DIR) $(SRC_DIR) $(INC_DIR)

PROGNAME: me
#	@ cd ;
#	@ echo $(CURDIR) $(VPATH);
#	@ $(shell mv ./*.o $(OBJ_DIR))

me: my_editor.o buffer.o main_loop.o
	$(CXX) -o me my_editor.o buffer.o main_loop.o

# $< で依存ファイルの1つ目を示す
my_editor.o: my_editor.cpp my_editor.h
	$(CXX) -c $(OPTIONS) $<

main_loop.o: main_loop.cpp
	$(CXX) -c $(OPTIONS) $<

buffer.o: buffer.cpp buffer.h
	$(CXX) -c $(OPTIONS) $<

clean:
	rm -f ./me.exe
	rm -f ./*.o
