#include <stdio.h>

#define rows 5

void main() {
    for (int x = 0; x <= rows; x++){
        printf("\n");
        for (int z = 0; z <= rows-x; z++){
            printf(" ");
        }
        for(int y = 1; y <= (x*2)+1; y++){
            printf("*");
        }
    }
}