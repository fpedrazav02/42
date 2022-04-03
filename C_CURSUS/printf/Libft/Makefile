# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 10:02:45 by fpedraza          #+#    #+#              #
#    Updated: 2022/04/04 00:11:09 by fpedraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


####################################### STANDAR VAR + LOCATIONS ################################################################

NAME		=	libft.a
INCLUDES	=	../include
SRCS_DIR 	=	src/
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -rf
AR			=	ar rcs


# # # variables, que son STANDAR, además de dir para meter los .o y los .c --> los headers van en el STANDAR INCLUDES.

####################################### CREATE PATHS  + VARS WITH FILES ############################################

FTIS_DIR	=	ft_is/
FTIS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTMEM_DIR	=	ft_mem/
FTMEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

FTTO_DIR	=	ft_to/
FTTO		=	ft_atoi ft_itoa ft_tolower ft_toupper

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_split ft_strchr ft_strdup ft_striteri ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr

FTLST_DIR	=	ft_lst/
FTLST		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC_FILES+=$(addprefix $(FTIS_DIR),$(FTIS))
SRC_FILES+=$(addprefix $(FTMEM_DIR),$(FTMEM))
SRC_FILES+=$(addprefix $(FTPUT_DIR),$(FTPUT))
SRC_FILES+=$(addprefix $(FTTO_DIR),$(FTTO))
SRC_FILES+=$(addprefix $(FTSTR_DIR),$(FTSTR))
SRC_FILES+=$(addprefix $(FTLST_DIR),$(FTLST))

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))


####Como los archivos están separados en DIR distintos, creamos una var a modo de PATH, lo usamos como comando a nivel 
#### de sistemas y mediante addprefix y addsuffix podemos ir sumándo todos los PATHS de las distintas carpetas en 
#### SRC_FILES, que luego aplicamos de igual modo con .c o .o, metiendo todo o en SRCS o en OBJS
#########################################################################################################################

OBJSF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@ranlib $(NAME)
			@echo "compilation of libft has been completed"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
			@echo "Compiling: $<"
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
			@mkdir -p $(OBJS_DIR)
			@mkdir -p $(OBJS_DIR)$(FTIS_DIR)
			@mkdir -p $(OBJS_DIR)$(FTMEM_DIR)
			@mkdir -p $(OBJS_DIR)$(FTPUT_DIR)
			@mkdir -p $(OBJS_DIR)$(FTTO_DIR)
			@mkdir -p $(OBJS_DIR)$(FTSTR_DIR)
			@mkdir -p $(OBJS_DIR)$(FTLST_DIR)

clean:
			@$(RM) -rfv $(OBJS_DIR)
			@$(RM) -rfv $(OBJSF)
			@echo "all *.o files have been cleared"

fclean:		clean
			@$(RM) -fv $(NAME)
			@echo "fclean executed correctly!"

re:			fclean all
			@echo "DONE RE:!"

.PHONY:		all clean fclean re 


###### Funciones STANDAR, || @command no es necesario si solo aplicas comandos a nivel de sistemas || -p flag para crear
##### p o –parents: crea un directorio de forma recursiva (cuando no hay un directorio encima del directorio creado)
#### como le damos el prefijo del directorio padre, nos usa $(OBJS_DIR) como dir padre y vamos metiendo el resto de 
### los directorios, de ahí el -I, si le damos uno que no existe lo crea, si lo hay los mete ahí
## 
#  	$< --> The file name of the target of the rule --< evaluates to all first prerequisite
#	$@ --> The name of the first prerequisite --< evaluates to all
#
# @ranlib -->  ranlib generates an index to the contents of an archive and stores it in the archive
#An archive with such an index speeds up linking to the library and allows 
#routines in the library to call each other without regard to their placement in the archive.
#	.cache exists --> check de si existe en el cache...
#
#	-c -->  Compile or assemble the source files, but do not link.
#	-o --> If -o is not specified, the default is to put an executable file in a.out
#	
#	# Define a pattern rule that compiles every .c file into a .o file
#			%.o : %.c
#			$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@
##
###
####	
#####
######
###################################################################################################################