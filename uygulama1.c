#include<stdio.h>
#include<stdlib.h>


int main()
{

 int tamSayi=89; // %d kullaninilir

 float ilkOndalikliSayi=4.7856f;  //%f kullanilir

 double doubleSayi=4879.45879d;  //%lf kullanilir

 char krk='S';   // %c kullanilir

 printf("RAM'e Yuklemis oldugunuz degerler....:\n");

 printf("Tamsayi degeriniz:%d  ve bunun hafizadaki adresi:%p dir\n",tamSayi,&tamSayi);
 printf("Ilk ondalikli degeriniz:%.2f  ve bunun hafizadaki adresi:%p dir\n",ilkOndalikliSayi,&ilkOndalikliSayi);
 printf("Ilk double degeriniz:%lf ve bunun hafizadaki adresi:%p dir\n",doubleSayi,&doubleSayi);
 printf("Karakter degeriniz:%c  ve bunun hafizadaki adresi:%p dir\n",krk,&krk);



  return 0;
