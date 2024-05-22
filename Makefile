# Libft, a C library made from scratch!

# Tools
NAME = libft.a
LIBNAME = ft
TNAME = test
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INC_PATH) $(DBGFLAGS)
COBJFLAGS = $(CFLAGS) -c
DBGFLAGS =
ARFLAGS = -crs
RMFLAGS = -rf

# Paths
TGT_PATH = target
BIN_PATH = $(TGT_PATH)/bin
OBJ_PATH = $(TGT_PATH)/obj
DBG_PATH = debug
SRC_PATH = src
INC_PATH = $(SRC_PATH)/include
MSRC_PATH = $(SRC_PATH)/main
TSRC_PATH = $(SRC_PATH)/test
LI_INC_PATH = ~/include
LI_LIB_PATH = ~/lib

# Source and object files
HDRS = libft.h ft_printf.h get_next_line.h
SRC = stdlibft/ft_toupper.c \
	  stdlibft/ft_tolower.c \
	  stdlibft/ft_isalpha.c \
	  stdlibft/ft_isupper.c \
	  stdlibft/ft_islower.c \
	  stdlibft/ft_isdigit.c \
	  stdlibft/ft_isalnum.c \
	  stdlibft/ft_isascii.c \
	  stdlibft/ft_isprint.c \
	  stdlibft/ft_isspace.c \
	  stdlibft/ft_strchr.c \
	  stdlibft/ft_strrchr.c \
	  stdlibft/ft_strlen.c \
	  stdlibft/ft_strncmp.c \
	  stdlibft/ft_memset.c \
	  stdlibft/ft_memchr.c \
	  stdlibft/ft_bzero.c \
	  stdlibft/ft_memcpy.c \
	  stdlibft/ft_memcmp.c \
	  stdlibft/ft_memmove.c \
	  stdlibft/ft_strlcpy.c \
	  stdlibft/ft_strlcat.c \
	  stdlibft/ft_append.c \
	  stdlibft/ft_preppend.c \
	  stdlibft/ft_strinsert.c \
	  stdlibft/ft_strnstr.c \
	  stdlibft/ft_atoi.c \
	  stdlibft/ft_calloc.c \
	  stdlibft/ft_free.c \
	  stdlibft/ft_strdup.c \
	  stdlibft/ft_substr.c \
	  stdlibft/ft_strjoin.c \
	  stdlibft/ft_strtrim.c \
	  stdlibft/ft_split.c \
	  stdlibft/ft_itoa.c \
	  stdlibft/ft_ltoa.c \
	  stdlibft/ft_strmapi.c \
	  stdlibft/ft_striteri.c \
	  stdlibft/ft_putchar_fd.c \
	  stdlibft/ft_putstr_fd.c \
	  stdlibft/ft_putsubstr_fd.c \
	  stdlibft/ft_putendl_fd.c \
	  stdlibft/ft_putnbr_fd.c \
	  stdlibft/ft_lstnew.c \
	  stdlibft/ft_lstadd_front.c \
	  stdlibft/ft_lstsize.c \
	  stdlibft/ft_lstlast.c \
	  stdlibft/ft_lstadd_back.c \
	  stdlibft/ft_lstdelone.c \
	  stdlibft/ft_lstclear.c \
	  stdlibft/ft_lstiter.c \
	  stdlibft/ft_lstmap.c \
	  stdlibft/ft_hmap_mod.c \
	  stdlibft/ft_hmap_data_transfer.c \
	  stdlibft/ft_trgb.c \
	  ft_printf/ft_printf.c \
	  ft_printf/printchsdixXup.c \
	  ft_printf/base_format.c \
	  get_next_line/get_next_line.c \
	  get_next_line/get_next_line_utils.c
OBJ = $(SRC:%.c=$(OBJ_PATH)/%.o)
TSRC =
TMAIN = $(TSRC_PATH)/main.c
TOBJ = $(TSRC:%.c=$(OBJ_PATH)/%.o)

# Config
# Unwanted files to be deleted
UNW = .DS_Store ./*/.DS_Store
# No. of seconds the screen output will be visible for
SECONDS_VISIBLE = 4

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all: $(NAME)

$(NAME): mkdir $(OBJ)
	@echo "\n$(GREEN)$(NAME) objects compiled successfully.$(DEF_COLOR)\n"
	@echo "$(YELLOW)Creating archive file.$(DEF_COLOR)\n"
	@$(AR) $(ARFLAGS) $(BIN_PATH)/$(NAME) $(OBJ)
	@echo "$(GREEN)$(NAME) compiled successfully.$(DEF_COLOR)\n"

debug: DBGFLAGS := -g
debug: $(NAME)

test: $(NAME) $(TOBJ) $(TMAIN)
	@echo "\n$(GREEN)$(TNAME) objects compiled successfully.$(DEF_COLOR)\n"
	@echo "$(YELLOW)Linking objects.$(DEF_COLOR)\n"
	@$(CC) $(CFLAGS) $(TOBJ) $(TMAIN:%.c=$(OBJ_PATH)/%.o) -L$(BIN_PATH) -l$(LIBNAME) -o $(TNAME)
	@echo "$(GREEN)$(TNAME) compiled successfully.$(DEF_COLOR)\n"
	@echo "$(MAGENTA)Running tests.$(DEF_COLOR)\n"
	@./$(BIN_PATH)/$(TNAME)
	@make fclean

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(@D)
	@$(CC) $(COBJFLAGS) $^ -o $@

linstall: $(NAME)
	@echo "$(YELLOW)Installing header and library to user's  local include directory.$(DEF_COLOR)\n"
	@mkdir -p $(LI_INC_PATH)
	@cp $(HDRS:%.h=$(INC_PATH)/%.h) $(LI_INC_PATH)
	@mkdir -p $(LI_LIB_PATH)
	@cp $(BIN_PATH)/$(NAME) $(LI_LIB_PATH)
	@echo "$(GREEN)Library installed successfully.$(DEF_COLOR)\n"

mkdir:
	@mkdir -p $(BIN_PATH)
	@mkdir -p $(OBJ_PATH)
#	@mkdir -p $(OBJ_PATH)/other/path

preclean:
	@echo "\n$(YELLOW)Cleaning project up...$(DEF_COLOR)"

postclean:
	@echo "\n$(GREEN)Done!$(DEF_COLOR)\n"

clean: preclean clean-body postclean

clean-body:
	@$(RM) $(RMFLAGS) $(OBJ_PATH) $(BIN_PATH) $(TGT_PATH)

fclean: preclean fclean-body postclean

fclean-body: clean-body
	@$(RM) $(RMFLAGS) $(NAME)

xclean: preclean xclean-body postclean

xclean-body: fclean-body
	@$(RM) $(RMFLAGS) $(UNW)
re: fclean all

bre: fclean bonus

try: re xclean
	norminette

btry: bre xclean
	norminette

ctry: try
	sleep $(SECONDS_VISIBLE); clear

cbtry: btry
	sleep $(SECONDS_VISIBLE); clear

.PHONY: all clean fclean xclean re bonus bre
