#include <stdio.h>
#include "./lib/c_gnuplot.h"

#define SIZE 20

int main(){
    int val[SIZE];

    //init the array
    for(int i=0; i<SIZE; i++){
        val[i] = i*i;
    }

    if(ploti(val, SIZE) == 1){
        printf("\terror occurd in ploti\n");
        return(1);
    }

    return 0;
}
