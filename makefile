CC = aarch64-linux-gnu-gcc
CFLAGS = -Wall -Wextra

DEBUG_FLAGS = -g
RELEASE_FLAGS = -O2

DEBUG_TARGET = bin/j721e_CPTS_debug
RELEASE_TARGET = bin/j721e_CPTS_release

SRC_FILES = j721e_CPTS_main.c j721e_CPTS_functions.c  j721e_CPTS_registers.c

.PHONY: all debug release clean check

all: debug release check

debug: $(DEBUG_TARGET)

release: $(RELEASE_TARGET)

$(DEBUG_TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) $^ -o $@

$(RELEASE_TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) $(RELEASE_FLAGS) $^ -o $@

check:
	$(CC) $(CFLAGS) -fsyntax-only $(SRC_FILES)

clean:
	rm -f $(DEBUG_TARGET) $(RELEASE_TARGET)