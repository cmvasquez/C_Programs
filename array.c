#include <stdio.h>

char array[1024] = "attack";

void main() {
    int k;
    char *p; // pointer

    p = array;  // assigned to address that array lives at  
    
    printf("array lives at %p\n", array);

    while(*p != '\0') {
        if(*p >= 'a' && *p <= 'z'){
            *p -= 32; //ADD.B #2,(a0)
        }
        p++; // ADDA.L #1,A0
    }
    printf("%s\n", array);
    return;
    }
