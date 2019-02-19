#include <stdio.h>

#include "./lib/c_gnuplot.h"

#define SIZE 100

int main(char argc, char *argv[]){
    int val[SIZE];

    //init the array
    for(int i=0; i<SIZE; i++){
        if(i < 30){
            val[i] = -i*i;
        } else if(i < 60){
            val[i] =  100 - i;
        } else if(i < 80){
            val[i] = 0;
        } else if(i < 100){
            val[i] = i*i % SIZE - 100;
        } else {
            val[i] = 100;
        }
    }

    if(ploti(argv[0], val, SIZE) == 1){
        printf("\terror occurd in ploti\n");
        return(1);
    }

    return 0;
}
