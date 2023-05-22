CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -crs
O = obj/
SRC = ft_toupper.c \
	  ft_tolower.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isspace.c \
	  ft_isprint.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_memset.c \
	  ft_memchr.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memcmp.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  $(BSRC)

BSRC = ft_lstnew.c \
	   ft_lstadd_front.c \
	   ft_lstsize.c \
	   ft_lstlast.c \
	   ft_lstadd_back.c \
	   ft_lstdelone.c \
	   ft_lstclear.c \
	   ft_lstiter.c \
	   ft_lstmap.c

OBJ = $(SRC:%=$O%.o)
BOBJ = $(BSRC:%=$O%.o)
NAME = libft.a
SWP = .*.swp
DS = .DS_Store ./*/.DS_Store

all: mkdir $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

bonus: mkdir $(BOBJ)
	$(AR) $(ARFLAGS) $(NAME) $(BOBJ)

$(NAME): re

$O%.o: %
	$(CC) $(CFLAGS) -c $^ -o $@

mkdir:
	mkdir $O

clean:
	rm -rf $O

fclean: clean
	rm -f $(NAME)

xclean: fclean
	rm -f $(SWP) $(DS)

re: fclean all

bre: fclean bonus

debug: re xclean
	rm -rf $O; rm -f $(NAME); norminette

bdebug: bre xclean
	rm -rf $O; rm -f $(NAME); norminette

cdebug: debug
	sleep 4; clear

cbdebug: bdebug
	sleep 4; clear

.PHONY: all clean fclean xclean re
