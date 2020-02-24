#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c;
printf("Introduzca 3 números: \n");
printf("primer número: \n ");
scanf("%d",&a);
printf("Segundo número: \n");
scanf("%d",&b);
printf("Tercer numero: \n");
scanf("%d",&c);
if(a>b && b>c){
    printf("%d \n",a);
    printf("%d \n",b);
    printf("%d \n",c);

}
else if(b>a && a>c){
    printf("%d \n",b);
    printf("%d \n",a);
    printf("%d \n",c);
}

else if(b>c && c>a){
    printf("%d \n",b);
    printf("%d \n",c);
    printf("%d \n",a);
}
else if(a>c && c>b){
    printf("%d \n",a);
    printf("%d \n",c);
    printf("%d \n",b);
}
else if(c>a && a>b){
    printf("%d \n",c);
    printf("%d \n",a);
    printf("%d \n",b);
}
else if(c>b && b>a){
    printf("%d",c);
    printf("%d",b);
    printf("%d",a);
}
}
