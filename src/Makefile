src := $(wildcard *.c)
dir := $(notdir $(src))
obj := $(patsubst %.c,%.o,$(dir))

src:
	$(CC) -Wall -Werror -ljson-c -g -fpic -o ../$(BUILD_DIR)/$(obj) -c $(src)

build:
	$(CC) -shared ../$(BUILD_DIR)/*.o -o ../$(BIN_DIR)/libhediet-visualizer.so	

test:

all: src build

