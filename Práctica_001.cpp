#include <stdio.h>
#include <stdlib.h>
int main(){
    float a,b,c;
    int opt;
    printf("1=suma\n 2=Resta\n 3=Multiplicacion\n 4=Division\n ");
    printf("Seleccione una opcion:");
    scanf("%d",&opt);
    printf("Ingrese el primer operando:");
    scanf("%f",&a);
    printf("Introduce el segundo operando");
    scanf("%f",&b);
    if(opt==1){
        c=a+b;
    }

else if(opt==2){
    c=a-b;
}
else if(opt==3){
    c=a*b;
}
else if(opt==4){
    while(b==0){
        printf("Error, b debe ser distinto de 0\n");
        printf("introduce el segundo operando:");
        scanf("%f",&b);
    }
    c=a/b;

}
else{
    printf("Opción inválida");
    c=0;
}
printf("El resultado es %f",c);
}
