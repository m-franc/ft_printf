make -C ../libft
gcc -o parsing -fsanitize=address main_parsing.c -L ../libft -lftprintf -I ../libft/includes
./parsing
rm parsing
