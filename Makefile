CC = cc

CFLAGS = -Wall -Wextra -Werror

BUILD_DIR = build/

OBJ= $(subst $(SRC_DIR),$(BUILD_DIR),$(SRCS:.c=.o))

SRC_DIR = srcs/

SRCS = \
	$(SRC_DIR)ft_putchar_va.c \
	$(SRC_DIR)ft_putstr_va.c \
	$(SRC_DIR)ft_putnbr_va.c \
	$(SRC_DIR)ft_putchar.c \
	$(SRC_DIR)ft_printf.c \
	$(SRC_DIR)ft_putnbr_base.c \
	$(SRC_DIR)ft_putaddr_va.c \
	$(SRC_DIR)ft_puthex_va.c \
	$(SRC_DIR)ft_putunbr_base.c \
	$(SRC_DIR)ft_putaddr_va.c \
	$(SRC_DIR)ft_strlen.c \
	$(SRC_DIR)ft_putunbr_va.c \
	$(SRC_DIR)ft_putunbr_long_base.c \
	$(SRC_DIR)ft_putchar_base.c

INCLUDE = -Iincludes

NAME = libftprintf.a

all: $(NAME)

$(BUILD_DIR):
	@mkdir -p $@

$(NAME): $(BUILD_DIR) $(OBJ)
	ar rcs $(NAME) $(OBJ)
$(BUILD_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDE) $^ -o $@ -c

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(BUILD_DIR)

re: fclean $(NAME)
.PHONY: all clean fclean re