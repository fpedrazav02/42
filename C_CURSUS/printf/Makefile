####################################### STANDAR VAR + LOCATIONS ###################################################################################

NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -rf
AR			= ar rcs


##### variables, que son STANDAR, además de dir para meter los .o y los .c --> los headers van en el STANDAR INCLUDES.

############# GET AND USE ECHO WITH COLORS##########################################################################################################
NO_COLOR = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
#####################################################################################################################################################
####   COLOR CODES FOR ECHO:
###     Black        0;30     Dark Gray     1;30
#		Red          0;31     Light Red     1;31
#		Green        0;32     Light Green   1;32
#		Brown/Orange 0;33     Yellow        1;33
#		Blue         0;34     Light Blue    1;34
#		Purple       0;35     Light Purple  1;35
#		Cyan         0;36     Light Cyan    1;36
#		Light Gray   0;37     White         1;37 
#		    
#		    Cómo usarlos:
#			RED='\033[0;31m'
#			NC='\033[0m'    -->  # No Color
##			printf "I ${RED}love${NC} you\n"
###
####
#####################################################################################################################################################

####################################### CREATE PATHS  + VARS WITH FILES  "SRCS"#####################################################################

SRC_FILES	=	ft_printf ft_hex ft_printchar ft_printnbr ft_printp ft_printpercent ft_printstr ft_printunbr


SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

################################################################################# TARGETS ##########################################################

OBJF		=	.relink

all:		$(NAME)

$(NAME):	$(OBJ)
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJ)
			@echo "$(RED)libftprintf.a compiled!$(NO_COLOR)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)Compiling: $< $(NO_COLOR)"
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean:
			@$(RM) -rf $(OBJ_DIR)
			@make clean -C $(LIBFT)
			@echo "$(BLUE)ft_printf *.o files cleaned!$(NO_COLOR)"

fclean:		clean
			@$(RM) -f $(NAME)
			@$(RM) -f $(LIBFT)/libft.a
			@echo "$(RED)ft_printf executable files cleaned!$(NO_COLOR)"
			@echo "$(RED)libft executable files cleaned!$(NO_COLOR)"

re:			fclean all
			@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(NO_COLOR)"

.PHONY:		all clean fclean re

######################################FINAL NOTES########################################################################
####
###
##	Evitar relink --> dentro de tu OBJ_DIR crear un .file como dir padre usas
#					  el DIR de los OBJ. MAKE hace realink si han cmbiado tus dependencias
#					#prerequisite y dependencias
#
##
###			c --> compile .o
####		C --> do make recursively + target folder.
#####
#########################################################################################################################