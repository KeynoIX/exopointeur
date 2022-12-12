#include <stdio.h>

void SwitchNumber(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

int main(void) {
  int a = 1;// creer une variable
  printf("L'adresse de a : %p\n", &a);  // afficher son adresse ( %d ou %p )
  
  int b = 2; // creer une deuxieme variable
  printf("La valeur non inversé de a et de b : %d et %d\n", a, b);
 
  int* pa = &a; //variable intermédiaire
  int* pb = &b; //variable intermédiaire
  
  // executer la fonction qui echange les deux nombres
  SwitchNumber(pa, pb); //ou SwitchNumber(&a, &b);
  printf("La valeur inversé de a et de b : %d et %d\n", a, b);  // afficher les 2 nombres
  return 0;
}
