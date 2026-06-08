CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -O0
SRC = ft_print_combn.c
OBJ = $(SRC:.c=.o)
TARGET = ft_print_combn

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
