make -C ../../Projets/libft
gcc -o parsing -Wall -Wextra -Werror -fsanitize=address main_parsing.c -I ../../Projets/libft/includes -L ../../Projets/libft -lftprintf
./parsing
rm parsing
