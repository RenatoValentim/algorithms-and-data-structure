.PHONY: all compile run clean

SRC_FILES := $(shell find ./external/ ./src/ ./tests -type f -name '*.c')

all: compile run clean

compile:
	@gcc $(SRC_FILES) -o test_suite

run:
	@./test_suite

clean:
	@rm -f test_suite
