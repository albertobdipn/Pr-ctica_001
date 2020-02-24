#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    printf("Introduce un numero");
    scanf("%d",&a);
    printf("Introduce el segundo numero");
    scanf("%d",&b);
    if(a>b){
        printf("El numero %d es mayor",a);

    }
       else if(a<b){
        printf("El numero %d es menor",a);
        }
        else{
            printf("El numero %d es igual a ",a);
            printf("%d",b);
        }

    }





