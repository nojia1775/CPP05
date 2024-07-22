CC = cc
CFLAGS = -Wall -Wextra -Werror -g
OBJS_DIR = obj
SRCS = src/main.c
OBJS = $(patsubst src/%.c, $(OBJS_DIR)/%.o, $(SRCS))
NAME = pipex

$(NAME): $(OBJS)
	@make -C LIBFT/
	@make -C FT_PRINTF/
	$(CC) $(CFLAGS) $^ -o $@ LIBFT/libft.a FT_PRINTF/libftprintf.a

$(OBJS_DIR)/%.o: src/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

all: $(NAME)

clean:
	@make clean -C FT_PRINTF/
	@make clean -C LIBFT/
	rm -f $(OBJS)

fclean: clean
	@make fclean -C FT_PRINTF/
	@make fclean -C LIBFT/
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re