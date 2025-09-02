#include <stdio.h>

int main() {
    int a = 5;
    int b = 40; 
    int c = 20;
    int divisor = 0;

    int produkt = a * b * c;  
    int resultat = produkt / divisor;  

    printf("Produktet av %d, %d og %d er: %d\n", a, b, c, produkt); 
    
    printf("Resultatet etter deling med %d er: %d\n", divisor, resultat);

    return 0;

}