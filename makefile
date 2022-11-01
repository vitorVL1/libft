SRCS =	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
		ft_memcpy.c   ft_strchr.c  ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c\
		ft_isascii.c  ft_memmove.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c ft_substr.c\
		ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c ft_strjoin.c\

OBJS = $(SRCS:.c=.o)

BONUS = 
BONUS_OBJS = $(BONUS:.c=.o)

cc = gcc
RM = rm -f
CFLAGS	= -Wall -Wextra -Werror

NAME = libft.a

all : $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)
			@$(RM) -r $(DIR_OBJS)

re:			fclean all

.PHONY:		all clean fclean re