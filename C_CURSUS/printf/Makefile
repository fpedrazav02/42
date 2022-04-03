#################  VARIABLES ##############################################
SRC_DIR			= 	src/
OBJ_DIR			= 	obj/
CC 				=	gcc
CC_FLAGS 		= 	-Wall -Werror -Wextra -I
RM_RF 			= 	rm -rfv
LIBFT			=	Libft
NAME			= 	libftprintf.a
AR				=	ar crs
#################  SRCS      ##############################################
SRC_FILES		=	ft_printf ft_printf_utils ft_print_ptr ft_print_unsigned ft_print_hex

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))		
#################  TARGETS   ##############################################
OBJF		=	.cache_exists

all:			$(NAME)

$(OBJ_DIR)%.o: 	$(SRC_DIR)%.c | $(OBJF)
				@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME):		$(OBJS)
				@make -C $(LIBFT)
				@cp Libft/libft.a .
				@mv libft.a $(NAME)
				@$(AR) $(NAME) $(OBJS)

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean:
				@$(RM_RF) $(OBJ_DIR)
				@make clean -C $(LIBFT)

fclean:			clean
				@$(RM_RF) $(NAME)
				@$(RM_RF) $(LIBFT)/libft.a
			
re:				fclean all

.PHONY:			all clean fclean re