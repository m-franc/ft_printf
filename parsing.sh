make -C ../../Projets/libft
gcc -g -o parsing main_parsing.c -I ../../Projets/libft/includes -L ../../Projets/libft -lftprintf
./parsing
