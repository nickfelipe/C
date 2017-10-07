#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
setlocale(LC_ALL, "");

printf("hello word \n");

int var1=0;
int var2=0;
int resto=0;
int soma=0;
int subt=0;
int mut=0;
float div=0;
float media=0;



printf("digite um valor:");
scanf_s("%i",&var1);

printf("digite mais um numero:");
scanf_s("%i",&var2);

resto=var1 % var2;

printf("o resto da divisão eh: %i \n",resto);

soma=var1 + var2;

printf("a soma eh:%i \n",soma);

subt=var1 - var2;

printf("a subtração eh:%i \n",subt);

mut=var1 *var2;

printf("a mutiblicação eh:%i \n",mut);

div=(float)var1 / var2;

printf("a divisão eh:%f \n",div);

media=(float)soma/2;

printf("a media eh:%f \n",media);

system("pause"); 


	return 0;

}
