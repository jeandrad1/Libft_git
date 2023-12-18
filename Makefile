NAME = libft.a
#Compilador y flags

CC = gcc
CFLAGS = -Wall -Wextra -Werror
#Archivos

SRC =	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_memset.c ft_bzero.c  ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strjoin.c \
		ft_split.c ft_strtrim.c ft_strdup.c ft_substr.c ft_itoa.c ft_strmapi.c ft_striteri.c

BONUS =

OBJ = $(SRC:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

# Reglas
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) rcs $@ $^

#Salida .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Limpia libreria y .o
clean:
	rm -f $(OBJ) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) 

#Reconstruye
re: fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
