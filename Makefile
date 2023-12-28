MACHINE := $(shell uname -m)
NAME = libft-$(MACHINE).a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -MMD
RM		= rm -rf
SRCS 	= $(wildcard *.c)
OBJS 	= $(SRCS:.c=.o)
DEPS	= $(SRCS:.c=.d)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $^

all: $(NAME)

-include $(DEPS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_B)
	$(RM) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all