#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("Cadena de caracteres\n");

  char nameC[50];

  int size;

  printf("Ingresar el nombre con gets: \n");
  gets(nameC);

  printf("El nombre es: ");
  puts(nameC);

  size = strlen(nameC);

  char array[size];

  //recorro el arreglo
  for (int i = 0; i < size; i++)
  {
    array[i] = nameC[i];
  }

  //Inserto el arreglo invertido
  printf("Invertido es: ");
  for (int j = size; j >= 0; j--)
  {
    printf("%c", array[j]);
  }

  return 0;
}