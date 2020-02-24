#include <stdio.h>
#include <stdlib.h>
int main(){
float b,b1,h;
int opt;
printf("Seleccione una operacion: \n");
printf("1= Calcula el área de un triangulo: \n 2= Calcula el área de un trapecio: \n 3=calcula el area de un rectangulo: \n");
scanf("%d",&opt);
switch(opt){
case 1:
    printf("Introduzca un valor para la base: \n");
    scanf("%f",&b);
    printf("Introduzca un valor para la altura: \n");
    scanf("%f",&h);
    printf("el valor del area es %f",b*h/2);
    break;
case 2:
    printf("Introduzca un valor para la base 1: \n");
    scanf("%f",&b);
    printf("Introduzca un valor para la base 2: \n");
    scanf("%f",&b1);
    printf("Introduzca un valor para la altura: \n");
    scanf("%f",&h);
    printf("el valor del area es %f",h*((b+b1)/2));
    break;
case 3:
    printf("Introduzca un valor para la base: \n");
    scanf("%f",&b);
    printf("Introduzca un valor para la altura: \n");
    scanf("%f",&h);
    printf("el valor del area es %f",b*h);
    break;
}
}

