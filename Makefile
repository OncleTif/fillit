SRC_PATH = sources 

SRC_NAME = fillit.c ft_error.c ft_gridcpy.c ft_griddel.c ft_gridfill.c ft_gridsize.c\
	   ft_input_reader.c ft_insert.c ft_nbrpiece.c ft_newgrid.c ft_piece_creator.c\
	   ft_piece_positioner.c ft_piecevalid.c ft_printgrid.c ft_valid.c

OBJ_PATH = objs

LIB_NAME = ft_atoi.c ft_bzero.c ft_intsize.c ft_intsize_base.c ft_isalnum.c ft_isalpha.c \
	   ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_itoa_base.c ft_lstadd.c \
	   ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c \
	   ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
	   ft_memset.c ft_pow.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
	   ft_putnbr.c ft_putnbr_fd.c ft_putnbrendl.c ft_putnbrendl_fd.c ft_putstr.c \
	   ft_putstr_fd.c ft_putstr_lst.c ft_range.c ft_range_base.c ft_strcat.c \
	   ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c \
	   ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
	   ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
	   ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strsplit_lst.c \
	   ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c

LIB_PATH = lib

LIB = libft.a

CPPFLAGS = -Iinclude

LDFLAGS = -Llibft
LDLIBS = -lft

NAME = fillit

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

LIB_OBJ_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
LIB_SRC = $(addprefix $(LIB_PATH)/,$(LIB_NAME))
LIB_OBJ = $(addprefix $(LIB_PATH)/,$(LIB_OBJ_NAME))


all: $(LIB) $(NAME)

$(LIB): $(LIB_OBJ)
	ar rc $(LIB) $(LIB_OBJ)	

$(LIB_OBJ_PATH)%.o: $(LIB_SRC_PATH)%.c
	@mkdir $(LIB_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ) $(LIB_OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME) $(LIB)

re: fclean all

.PHONY: all, clean, fclean, re

norme:
	norminette $(SRC)
