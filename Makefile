NAME := libftprintf.a
SRCS := itoas.c parse.c print.c ft_printf.c parser.c utils_printf.c
LIBFT_OBJS := $(addprefix libft/, ft_atoi.o ft_nbrsize.o ft_putchar.o ft_putstr.o ft_strany.o ft_strchr.o ft_strequ.o ft_strlen.o ft_strsub.o ft_isdigit.o ft_issep.o ft_strdup.o)
OBJS := $(SRCS:.c=.o)
INC := $(addprefix -I, libft includes)

all: $(NAME)

$(NAME): $(OBJS)
	@ar cr $(NAME) $(OBJS) $(LIBFT_OBJS)
	@ranlib $(NAME)

%.o : %.c
	@gcc -c -g $(INC) $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

