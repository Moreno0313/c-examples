#comments
CC = gcc
CFLAG = -Wall -g -std=c99

LIB_PATH = ./include
SRC_PATH = ./src
BUILD_PATH = ./build
OBJ_PATH = ./objects

EXENAME = Ejemplo9_0_0.bin
OBJECTS = $(addprefix $(OBJ_PATH)/, principal.o operaciones.o)


all: $(BUILD_PATH)/$(EXENAME)


$(BUILD_PATH)/$(EXENAME): $(OBJECTS)
	$(CC) $^ -o $@

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	mkdir -p $(dir $@)
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ_PATH)
	rm -f $(BUILD_PATH)/*.bin
