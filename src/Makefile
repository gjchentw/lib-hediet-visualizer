src := $(wildcard *.c)
dir := $(notdir $(src))
obj := $(patsubst %.c,%.o,$(dir))

src:
	$(CC) -ljson-c -g -fPIC -o ../$(BUILD_DIR)/$(obj) -c $(src)

build:
	$(CC) -shared ../$(BUILD_DIR)/*.o -o ../$(BIN_DIR)/libhedite-visualizer.so	

test:

all: src build

