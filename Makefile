
########################
### HUNTER MAKEFILE  ###
########################

########################
### OPTIONS          ###
########################

TARGET_NAME	=	my_hunter
SOURCE_DIR	=	sources
OBJECT_DIR	=	objects
LIBRARY_DIR	=	lib
HEADER_DIR	=	include

vpath %.c $(SOURCE_DIR)

########################
### COMPILER OPTIONS ###
########################

CC	=	gcc
CFLAGS	=	-W -Wall -Wextra -Werror \
		-I$(HEADER_DIR) \
		-Wno-unused-variable \
		-Wno-unused-parameter \
		-Wno-unused-but-set-variable \
		-Wno-unused-but-set-parameter \
		-g3 \
		$(C_FLAGS_INPUT)
LFLAGS	=	-L$(LIBRARY_DIR) -lhsy \
		-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm \
		$(L_FLAGS_INPUT)

########################
### SOURCES FILES    ###
########################

SOURCES_FILES	=	main.c \
					background_draw.c \
					destroy_assets.c \
					destroy_background.c \
					destroy_ducks.c \
					destroy_window.c \
					duck_draw.c \
					duck_update.c \
					end_game.c \
					fps.c \
					game_draw.c \
					game_event.c \
					game_loop.c \
					game_update.c \
					init_assets.c \
					init_ducks.c \
					init_game.c \
					init_window.c \
					start_game.c \
					view_event.c \
					letterbox_view.c \
					score_draw.c \
					init_background.c \
					init_front.c \
					front_draw.c \
					duck_reset.c \
					duck_anim.c \
					shoot_event.c \
					duck_kill.c \
					init_score.c \
					update_score.c \
					init_sounds.c \
					destroy_sounds.c \
					cursor_update.c \
					cursor_draw.c \
					init_music.c \


LIBRARY		=	libhsy.a

########################
### OBJECT FILES     ###
########################

OBJECTS	=	$(patsubst %.c, $(OBJECT_DIR)/%.o, $(SOURCES_FILES))

########################
### RECIPES          ###
########################

.PHONY: all directories re clean fclean

all: directories $(LIBRARY) $(TARGET_NAME)

directories: | $(SOURCE_DIR) $(OBJECT_DIR)

re:	clean all

clean:
	@make --no-print-directory -C $(LIBRARY_DIR) clean
	@rm -rf ./$(OBJECT_DIR)/*.o

fclean: clean
	@make --no-print-directory -C $(LIBRARY_DIR) fclean
	@rm -rf ./$(OBJECT_DIR)
	@rm -f ./$(TARGET_NAME)

library: $(LIBRARY)

########################
### FILE GENERATORS  ###
########################

$(TARGET_NAME): $(OBJECTS)
	@$(CC) -o $(TARGET_NAME) $^ $(LFLAGS)
	@echo -e "😺\e[35m -- BUILD SUCCESSFUL --\e[0m"

$(LIBRARY):
	@make -C $(LIBRARY_DIR) --no-print-directory

$(OBJECT_DIR):
	@mkdir -p $@

$(SOURCE_DIR):
	@echo "🙀\e[31m -- Error: source folder not found !\e[0m"

########################
### IMPLICITS REDEFS ###
########################

$(OBJECT_DIR)/%.o : %.c
	@$(CC) -c -o $@ $< $(CFLAGS)
	@echo -e "😺\e[35m -- $@ successfully compiled --\e[0m"
