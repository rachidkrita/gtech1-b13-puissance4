CC=gcc
CFLAGS=-Wall -Wextra -std=c99
EXEC=main
SRC=src/
SRC_FILES= $(wildcard $(SRC)*.c)
OBJ_DIR=obj/
OBJ_FILES= $(patsubst $(SRC)%.c,$(OBJ_DIR)%.o,$(SRC_FILES))
BIN=bin/
INC=-I headers/
all: $(EXEC)

$(EXEC): $(OBJ_FILES)
	$(CC) $(INC) -o $(BIN)$@ main.c $^ $(CFLAGS)

$(OBJ_DIR)%.o: $(SRC)%.c 
	$(CC) $(INC) -o $@ -c $< $(CFLAGS)
	
test: $(OBJ_FILES)
	$(CC) $(INC) -o $(BIN)$@ test.c $^ $(CFLAGS)

$(OBJ_DIR)%.o: $(SRC)%.c 
	$(CC) $(INC) -o $@ -c $< $(CFLAGS)

clean:
	rm $(OBJ_DIR)*.o

clean_all:
	rm $(OBJ_DIR)*.o
	rm bin/*




