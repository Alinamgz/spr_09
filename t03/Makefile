# -------- variables --------
# dependence for all:
MINILIBMX = minilibmx.a

# directories
INC_DIR = inc
SRC_DIR = src
OBJ_DIR = obj

#  BEFORE: atoi  AFTER obj/mx_atoi.o
INC_FILES = $(wildcard $(SRC_DIR)/*.h)
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:%.c=%.o)))

# commands
CC = clang
CFLAGS = -std=c11 -Wall -Werror -Wextra -Wpedantic
RM = rm -rf

# ----------- body ----------
all: $(MINILIBMX)

$(MINILIBMX): $(OBJ_FILES)
	ar rcs $@ $^
	ranlib $(MINILIBMX)

$(OBJ_FILES): | $(OBJ_DIR)

$(OBJ_FILES): $(SRC_FILES) $(INC_FILES)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(OBJ_DIR):
	mkdir -p $@

clean:
	$(RM) $(OBJ_DIR)

uninstall:
	$(RM) $(OBJ_DIR)
	$(RM) $(MINILIBMX)

reinstall: uninstall all

.PHONY: all uninstall clean reinstall
