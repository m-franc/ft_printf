make -C ../../Projets/libft
gcc -o parsing -g -fsanitize=address main_parsing.c -I ../../Projets/libft/includes -L ../../Projets/libft -lftprintf
./parsing
