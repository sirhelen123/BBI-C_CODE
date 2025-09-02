#include <stdio.h>

int main() {
    float a = 5.5;
    int b = 3; 
    int c = 2; 
    int divisor = 4;          

    int produkt = a * b * c;
    int resultat = produkt / divisor;  

    printf("Produktet av %d, %d og %d er: %d\n", a, b, c, produkt); 
 
    printf("Resultatet etter deling med %d er: %d\n", divisor, resultat);

    return 0;

}