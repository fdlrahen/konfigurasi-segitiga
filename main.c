#include <stdio.h>
#include <stdlib.h>
#define PHI 97.5

void main()
{
/*
    char huruf;
    huruf= '1';
    huruf= '8';
    printf("%c\n", huruf);

    printf("%.4f", PHI);

    int angka1, angka2, hasil;
    angka1 =5;
    angka2 =4;
    hasil =angka1+angka2;
    printf("%d\n", hasil);

    hasil =angka1-angka2;
    printf("%d\n", hasil);

    hasil = angka1*angka2;
    printf("%d\n", hasil);
    //modulo
    hasil =angka1%angka2;
    printf("%d\n", hasil);

    //increment
    int pos = angka1++;
    int inc = ++angka1;
    printf("%d\n", pos);
    printf("%d\n", inc);

    //decrement
    int posdec =angka2--;
    int dec =--angka2;
    printf("%d\n", posdec);
    printf("%d\n", dec);

    //ekspresi
    int a,b,c;
    a=10;
    b=5;
    a+=b;//a=a+b;
    printf("%d\n", a);
    a -= b;
    printf("%d\n", a);
    a*= b;
    printf("%d\n", a);
    a= a/b;
    printf("%d\n", a);

}
*/
/*
int main (){

int i;
for (i=0; i<=10; i++){
    printf("Hello Word\n");
}
//while loop
int j=0;
while (j<=10){
    printf ("Hello monday\n");
    j++;
}
//do while loop tetap berjalan meski di int k terjadi kesalahan
int k=0;
do {
    printf("Hello Girls\n");
    k++;
}while(k<=10);
//input
int input;
scanf ("%d", &input);
for (int i=0; i<=input; i+=2){
    printf("Hello Gala - %d\n", i);
}


//pola pertama
int;
for (int i=1; i<=5; i++){
    for (int j=i; j<=5; j++){
        printf("%d",i);
    }
    printf("\n");
}
//pola kedua
*/
/*
int i,j;
for ( i=0; i<=j; i++){
    for ( j=i; j<5; j++){
        printf(" ");
    }
    for (int k=0; k<=i; k++){
        printf("kk");
    }
    printf("\n");
}
*/
/*
int i=2;
cetak:
    printf("Hallo Toni\n");
    i++;
    if (i%2==0){
        {

        goto cetak;
        }
  printf("%d\n",i);
    }
    return 0;

//perulangan if
    char huruf ='A';

    if (huruf =='B'){
        printf("Hallo J\n");
    }
    printf("Hallo apip");
*/

//perulangan if else
/*
    char tinggi;
    if (tinggi=='A'){
        printf("Hallo A\n");
    }else if ( huruf=='A'){
        printf ("Hallo B\n");
    }else{
        printf("Hallo C\n");
    }
        printf("Hallo D");

    char huruf;
    scanf("%c", &huruf);
    switch(huruf){
    case 'A':
        printf("Hallo Anton\n");
        break;
    case 'B':
        printf("Hallo Buby\n");
        break;
    case 'C':
        printf("Hallo c");
        break;
    default:
    printf ("Hallo d");
    }
    */
int tinggi;
int x = 20;
int y =3;
char jk;
printf("masukkan jeniskelamin: "); scanf("%c", &jk);
printf("masukkan tinggi badan: \n");scanf("%d", &tinggi);

if (jk=='w'|| jk=='W'){
    if(tinggi>=165){
        printf("lulus seleksi\n");
    }else{
        printf("tidak lulus\n");
    }
}
else if(jk=='p'|| jk=='P'){
    if (tinggi>=175){
        printf("lulus seleksi\n");
    }else{
        printf("tidak lulus");
    }
}

}



