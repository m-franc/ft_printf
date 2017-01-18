main1=ft_main_printf.c
main2=main_printf.c
exe1=ft_printf
exe2=printf
output1=output/FT_PRINTF.out
output2=output/PRINT.out
path_lib=../libft

cp $main1 $main2
sed -i -- "s/ft_putstr/printf/g" $main2

make -C $path_lib
clang -o $exe1 $main1 $path_lib/libftprintf.a -I $path_lib/includes
clang -o $exe2 $main2 $path_lib/libftprintf.a -I $path_lib/includes

rm output/*
mkdir output 2>/dev/null 
./$exe1 >> $output1
./$exe2 >> $output2

diff $output1 $output2
rm -f $exe1 $exe2

