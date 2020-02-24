#include <stdio.h>
#include <stdlib.h>
int main(){
float a,b,c;
printf("Introduzca el numerador");
scanf("%f",&a);
printf("Introduzca el denominador");
scanf("%f",&b);
if(b==0){
    printf("Error,el denominador debe ser diferente de 0");
    scanf("%f",&b);
}
c=a/b;
printf("El resultado es %f",c);
}
