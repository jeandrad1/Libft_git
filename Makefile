NAME = libft.a
#Compilador y flags

CC = gcc
CFLAGS = -Wall -Wextra -Werror
#Archivos

SRC = ft_isanum.c ft_isalpha.c ft_isdigit.c ft_isascii.c
OBJ = $(SRC:.c=.o)

# Reglas
all: $(TARGET)

$(TARGET): $(OBJ)
	$(AR) rcs $@ $^

#Salida .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Limpia libreria y .o
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

#Reconstruye
re: fclean all

.PHONY: all clean fclean re
