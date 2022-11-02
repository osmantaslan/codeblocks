#include<stdio.h>
#include<stdlib.h>

/*
Bu ornekte
sizeof uygulamasý yapýlacaktýr
*/

int main()
{

 int tamSayi=89;

 float ilkOndalikliSayi=4.7856f;  //%f kullanilir

 double doubleSayi=4879.45879d;  //%lf kullanilir

 char krk='S';   // %c kullanilir


 printf("tam sayi degiskenin RAM deki boyutu:%zu Byte'dir\n",sizeof(tamSayi));

 printf("Ilk ondalikli degiskenin RAM deki boyutu:%zu Byte'dir\n",sizeof(ilkOndalikliSayi));

 printf("double sayi degiskenin RAM deki boyutu:%zu Byte'dir\n",sizeof(doubleSayi));

 printf("Karakter sayi degiskenin RAM deki boyutu:%zu Byte'dir\n",sizeof(krk));



  return 0;
}
