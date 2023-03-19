#include <stdio.h>
#define MAX_VECTOR 10

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
  int vector[MAX_VECTOR];

  for(int i = 0; i < MAX_VECTOR; i++){ // Inicialización 
    vector[i] = i;
  }

  for(int i = 0; i < MAX_VECTOR; i++){ // Operación 
    if(i < MAX_VECTOR){
      vector[i] = fibonacci(i);
    }else{
      break; // salimos del bucle si llegamos al límite
    }
  }

  printf("[");
  for(int i = 0; i < MAX_VECTOR; i++){ // Impresión 
    printf("%d ", vector[i]);
  }
  printf("]\n"); // agregamos un salto de línea para una mejor presentación
  return 0; // indicamos que el programa finalizó sin errores
}

