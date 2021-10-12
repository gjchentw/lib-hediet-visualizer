CC = /usr/bin/gcc
BIN_DIR = bin
BUILD_DIR = build

lib:
	mkdir -p ./$(BIN_DIR) ./$(BUILD_DIR)
	CC=$(CC) BIN_DIR=$(BIN_DIR) BUILD_DIR=$(BUILD_DIR) make -C src all

test:
	CC=$(CC) make -C tests

all: lib test

clean:
	rm -rf ./$(BIN_DIR) ./$(BUILD_DIR)