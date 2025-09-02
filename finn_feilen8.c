#include <stdio.h> 
#include <stdlib.h> 


void feilfunksjon() { 
    int *peker = NULL; 
    
    *peker = 42; 
    printf("Adressen: %p\n", (void *)peker); 
    printf("Verdien på adressen: %d\n", *peker); 
} 


int main() { 
    feilfunksjon(); 
    return 0; 
}
