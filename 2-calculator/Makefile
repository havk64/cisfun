CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic
SRC := $(shell find . -name '*.c')
OBJECTS := $(SRC:.c=.o)

all: 2-calculator

2-calculator: $(OBJECTS)
	$(CC) $(OBJECTS) -o 2-calculator

$(OBJECTS): $(SRC)
