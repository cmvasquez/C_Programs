#include <stdio.h>

char array[1024];

void main() {
    int k;
    char *p; // pointer

    p = array;  // assigned to address that array lives at  
    
    printf("array lives at %p\n", array);

    for(k = 0; k<1024; k++){
        *p = 5;
        p++;
    }
    for(k = 0; k < 16; k++) {
        printf("%d   %x \n", array[k],array[k]);
    }
    return;
}
