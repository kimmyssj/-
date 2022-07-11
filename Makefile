CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

SRCS		= hello.c hi.c

OBJS        = $(SRCS:.c=.o)

TARGET		= libcalculate.a

all : $(TARGET)

$(TARGET):	$(OBJS)
		$(CC) -o $(TARGET) $^

clean:
		rm -rf $(OBJS)

fclean:		clean
		rm -rf $(TARGET)

re:			fclean $(TARGET)

.PHONY : all clean fclean re
