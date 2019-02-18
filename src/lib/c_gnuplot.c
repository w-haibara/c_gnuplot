#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 20

int8_t ploti(int *val, int size){
    FILE *graph_data;
    graph_data = fopen("graph_data", "w");
    
   if (graph_data == NULL) {
        printf("\terror: cannot open file\n");
        return 1;
    } 

    //ファイルへ配列の値を出力  
    for(int i=0; i<size; i++){
        fprintf(graph_data, "%d: %d\n", i, val[i]);
    }

    fclose(graph_data);

    char plot_data[50];
    memset(plot_data, '\0', strlen(plot_data));
    strcpy(plot_data, "gnuplot plot_data");
    printf("system: %s\n", plot_data);
    system(plot_data);

    return 0;
}
