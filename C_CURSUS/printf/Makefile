#################  VARIABLES ##############################################

CC 				=	gcc
CC_FLAGS 		= 	-Wall -Werror -Wextra -I
RM_RF 			= 	rm -rfv
NAME 			= 	ft_printf.a	
#################  SRCS      ##############################################
SRCS			=
OBJS			=	$(SRCS:.c=.o)		
#################  TARGETS   ##############################################
all:			$(NAME)

$(NAME):		$(OBJS)
				ar crs $(NAME) $(OBJS)

clean:
				$(RM_RF) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM_RF) $(NAME)
			
re:				fclean all

.PHONY:			all clean fclean re