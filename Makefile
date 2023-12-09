<<<<<<< HEAD
NAME = libft.a
#Compilador y flags

CC = gcc
CFLAGS = -Wall -Wextra -Werror
#Archivos

SRC =	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_memset.c ft_bzero.c  ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_atoi.c ft_strnstr.c

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
=======
NAME = libft.a
#Compilador y flags

CC = gcc
CFLAGS = -Wall -Wextra -Werror
#Archivos

SRC =	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_memset.c ft_bzero.c  ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_atoi.c ft_strnstr.c

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
>>>>>>> 5f895a932239130d538251fd5c3f3f839078c67c
