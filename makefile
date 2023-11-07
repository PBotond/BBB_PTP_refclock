
CC = aarch64-linux-gnu-gcc
CFLAGS = -Wall -Wextra

DEBUG_FLAGS = -g
RELEASE_FLAGS = -O2

DEBUG_TARGET = j721e_CPTS_main_debug
RELEASE_TARGET = j721e_CPTS_main_release

SRC_FILES = j721e_CPTS_main.c j721e_CPTS_functions.c 

.PHONY: all debug release clean

all: debug release

debug: $(DEBUG_TARGET)

release: $(RELEASE_TARGET)

$(DEBUG_TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) $^ -o $@

$(RELEASE_TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) $(RELEASE_FLAGS) $^ -o $@

clean:
	rm -f $(DEBUG_TARGET) $(RELEASE_TARGET)
