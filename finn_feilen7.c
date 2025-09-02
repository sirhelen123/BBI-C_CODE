#include <stdio.h> 
// bruk gdb til å finne feil 

/* 
- gcc -g -O0 <fil_navn>.c 
- gdb ./a.out 
- break main 
- run 
- next 

*/ 

// NB!! Her trenger du bare å finne hvor feilen skjer, 
// ikke hva feilen er 


int main() { 
    int teller = 0; 
    while (teller < 5) { 
        printf("Teller: %d\n", teller); 
    } 
    return 0; 
}