# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/25 18:12:17 by naplouvi     #+#   ##    ##    #+#        #
#    Updated: 2018/07/25 18:59:43 by naplouvi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #


NAME = bsq

FLAGS = -Wall -Wextra -Werror

FILES = srcs/fcts.c srcs/main.c srcs/map_check.c srcs/map_create.c \
		srcs/map_display.c srcs/map_resolver.c

HEADER = includes/header.h

OBJ = objs/fcts.o objs/main.o objs/map_check.o objs/map_create.o \
		objs/map_display.o objs/map_resolver.o

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

objs/fcts.o: srcs/fcts.c
	gcc $(FLAGS) -o objs/fcts.o -c srcs/fcts.c -I $(HEADER)

objs/map_display.o: srcs/map_display.c
	gcc $(FLAGS) -o objs/map_display.o -c srcs/map_display.c -I $(HEADER)

objs/main.o : srcs/main.c
	gcc $(FLAGS) -o objs/main.o -c srcs/main.c -I $(HEADER)

objs/map_check.o : srcs/map_check.c
	gcc $(FLAGS) -o objs/map_check.o -c srcs/map_check.c -I $(HEADER)

objs/map_create.o : srcs/map_create.c
	gcc $(FLAGS) -o objs/map_create.o -c srcs/map_create.c -I $(HEADER)

objs/map_resolver.o : srcs/map_resolver.c
	gcc $(FLAGS) -o objs/map_resolver.o -c srcs/map_resolver.c -I $(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
