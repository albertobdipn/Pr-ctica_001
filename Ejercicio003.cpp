#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
printf("Introduzca un número");
scanf("%d",&a);
if(a%2==0){
    printf("El número %d es par",a);
}
else{
    printf("El numero es impar\n");
    if(a%3==0){
        printf("El numero %d es divisible entre 3",a);
    }

}
}
