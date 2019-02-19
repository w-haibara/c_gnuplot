#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 20
#define PATHNAME_SIZE 512

int8_t ploti(char *path, int *val, int size){   
    char pathname[PATHNAME_SIZE];
    memset(pathname, '\0', PATHNAME_SIZE); 

    for(int i=strlen(path); i>=0; i--){
        if(path[i] == '/'){
            break;
        } else {
            path[i] = '\0';
        }
    }

    chdir(path);
    getcwd(pathname, PATHNAME_SIZE);

    FILE *graph_data;
    graph_data = fopen("graph_data", "w");

    if (graph_data == NULL) {
        printf("\terror: cannot open file\n");
        return 1;
    } 

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
