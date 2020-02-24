#include <stdio.h>
#include <stdlib.h>
int main(){
float x,y;
y=75;
printf("Boleto normal: $75 \n Boleto ninos menores de 12 años: 60 porciento de descuento \n Boleto adulto mayores de 60 años: 55 porciento de descuento \n");
printf("Ingrese su edad:\n");
scanf("%f",&x);
if(x<12){
    printf("El costo es de: %f pesos ",y*0.40);
}
else if(x>60){
    printf("El costo es de: %f pesos ",y*0.45);
}
else{
    printf("El costo es de: %f pesos ",y);
}
}
