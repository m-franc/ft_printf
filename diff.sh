main1=main_parsing.c
main2=cp_main_parsing.c
exe1=ft_printf
exe2=printf
output1=output/FT_PRINTF.out
output2=output/PRINT.out
path_lib=../../Projets/libft

cp $main1 $main2
sed -i -- "s/ft_printf/printf/g" $main2

make -C $path_lib
clang -fsanitize=address -o $exe1 $main1 $path_lib/libftprintf.a -I $path_lib/includes
clang -fsanitize=address -o $exe2 $main2 $path_lib/libftprintf.a -I $path_lib/includes

mkdir output 2>/dev/null 
./$exe1 >> $output1
./$exe2 >> $output2
cat output/*
diff $output1 $output2
rm -f $output1 $output2 $exe1 $exe2
