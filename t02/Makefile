# -------- variables --------
# dependence for all:
MINILIBMX = minilibmx.a

# directories
INC_DIR = inc
SRC_DIR = src
OBJ_DIR = obj

# common part in file names WITHOUT prefixes
FILE_NAMES = atoi isdigit isspace printchar printint printstr strcmp strcpy  strlen
HEADER_NAMES = header

# first step (addsuffix): BEFORE: atoi AFRTER: atoi.o; 
# second step (addprefix): BEFORE atoi.o AFTER obj/mx_atoi.o
INC_FILES = $(addprefix $(INC_DIR)/, $(addsuffix .h, $(HEADER_NAMES)))
SRC_FILES = $(addprefix $(SRC_DIR)/mx_, $(addsuffix .c,  $(FILE_NAMES)))
OBJ_FILES = $(addprefix $(OBJ_DIR)/mx_, $(addsuffix .o,  $(FILE_NAMES)))

# commands
CC = clang
CFLAGS = -std=c11 -Wall -Werror -Wextra -Wpedantic
RM = rm -rf

# ----------- body ----------
all: MINILIBMX

MINILIBMX: $(OBJ_FILES)
	ar rcs $(MINILIBMX) $(OBJ_FILES)
	ranlib $(MINILIBMX)

$(OBJ_FILES): $(SRC_FILES) $(INC_FILES)
	mkdir $(OBJ_DIR)
	cd $(OBJ_DIR) && $(CC) $(CFLAGS) -c $(addprefix ../,$(SRC_FILES)) -I $(addprefix ../,$(INC_DIR))

clean:
	$(RM) $(OBJ_DIR)

uninstall:
	$(RM) $(OBJ_DIR)
	$(RM) $(MINILIBMX)

reinstall: uninstall all

.PHONY: all uninstall clean reinstall
