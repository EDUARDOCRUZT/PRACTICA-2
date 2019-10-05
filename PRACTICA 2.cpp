/*
PRACTICA 2
CRUZ TAPIA EDUARDO
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main() {
float a,b;
char repeticion;
printf("1.-suma\n");
printf("2.-resta\n");
printf("3.-multiplicacion\n");
printf("4.-division\n");
printf("introdue una opcion");
int opt;
scanf("%d",&opt);
printf("introduce la primera cantidad");
scanf("%f",&a);
printf("introduce la segunda cantidad");
scanf("%f",&b);
float c;

do{
switch (opt){
case 1:
    c=a+b;
    printf("el resultado es:%f",c);
    break;
case 2:
    c=a-b;
    printf("el resultado es:%f",c);
    break;
case 3:
    c=a*b;
    printf("el resultado es:%f",c);
    break;
case 4:
    while(b==0){
        printf("el segundo sumando debe ser diferente de cero");
        scanf("%f",&b);
    }
    c=a/b;
    printf("el resultado es:%f\n",c);
    break;
default:
    printf("opcion invalida\n");
    break;
}
printf("desea hacer otra operacion??  S  N :\n");
repeticion = getch();
}while(repeticion=='S' || repeticion=='s');
}

