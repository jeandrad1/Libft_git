NAME = libft.a
#Compilador y flags

CC = gcc
CFLAGS = -Wall -Wextra -Werror
#Archivos

SRC =	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcat.c ft_strlcpy.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_memset.c ft_bzero.c  ft_strrchr.c ft_strncmp.c

OBJ = $(SRC:.c=.o)

# Reglas
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rcs $@ $^

#Salida .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Limpia libreria y .o
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

#Reconstruye
re: fclean all

.PHONY: all clean fclean re
