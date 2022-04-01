#include <stdio.h>
  char array[1024] = "this is a test string";

  void main() {

    int k;
    char *p; // pointer

    p = array;  // assigned to address that array lives at  

    printf("array lives at %p\n", array);

    while(*p != '\0') {

        if(*p >= 'a' && *p <= 'z'){

            *p += 2; //ADD.B #2,(a0) // this moves the letter by 2 (A->C, F->H, etc)

        }   

        p++; // ADDA.L #1,A0 // increment the array

    }

    printf("%s\n", array);
    return;
  }
