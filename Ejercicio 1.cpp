#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("Introduce un número mayor a 100:\n");
    scanf("%d",&a);
    if (a>100){
            printf("El numero es mayor a 100");
    }
    else (a<100);{
            printf("Error, el número es menor a 100:\n");
            while(a<100){
                scanf("%d",&a);
            }

        }
    }

