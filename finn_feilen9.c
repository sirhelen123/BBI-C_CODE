#include <stdio.h> 


int summer_liste(int tall_liste[], int størrelse) 
{ 
    int sum; for (int i = 0; i < størrelse; i++) 
    { 
        sum += tall_liste[i]; 
    } 
    return sum; 
} 
    
    
int main() { 
    int tall_liste[] = {1, 2, 3, 4, 5}; 
    
    int størrelse = sizeof(tall_liste) / sizeof(tall_liste[0]); 
    int resultat = summer_liste(tall_liste, størrelse); 
    
    printf("Summen av listen er: %d\n", resultat); return 0; 
}
