CC			= cc
CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_strmapi.c ft_striteri.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strnstr.c ft_isascii.c ft_memset.c ft_strdup.c ft_strrchr.c ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c ft_atoi.c ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c ft_bzero.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c ft_isalnum.c ft_memcmp.c ft_split.c ft_strncmp.c ft_memmove.c

OBJS        = $(SRCS:.c=.o)

TARGET		= libft.a

INCUDE = ft.h

all : $(TARGET)

$(TARGET):	$(OBJS)
		ar rcs $(TARGET) $(OBJS)

clean:
		rm -rf $(OBJS)

fclean:		clean
		rm -rf $(TARGET)

re:
		make fclean
		make all

.PHONY : all clean fclean re
