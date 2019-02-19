# c_gnuplot
The code that create graph via gnuplot written in C

## getting started
$ cd ./src/lib  
$ gcc -c ./c_gnuplot.c  
$ ar crv libc_gnuplot c_gnuplot.o  
$ cd ../  
$ gcc sample.c -L./lib/ -lc_gnuplot  
$ ./a.out  
