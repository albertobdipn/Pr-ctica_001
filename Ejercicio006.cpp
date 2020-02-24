#include <stdio.h>
#include <stdlib.h>
int main(){
int x;
printf("Calcula el valor de la funcion de acuerdo al valor de x \n");
printf("f(x)= x+3 si x=<0 \n  x^2+2x si x>0 \n");
printf("Introduce un valor para x\n");
scanf("%d",&x);
if(x>0){
    printf("El valor de fx es %d \n", x*x+(2*x));

}

else{
    printf("el valor de fx es %d \n",x+3);
}
}
