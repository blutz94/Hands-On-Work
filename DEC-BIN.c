#include<stdio.h>

int main ()
{
int dec, temp, i, j=1, bin=0;
    printf("===========================================================");
    printf("\nDIGITE O NUMERO DECIMAL QUE DESEJA CONVERTER + ENTER:  ");
    scanf("%lld",&dec);
    temp=dec;
    while (temp!=0)
{
    i=temp%2;
    bin=bin+(i*j);
    temp=temp/2;
    j=j*10;
}
    printf("===========================================================");
    printf("\nO NUMERO %d CONVERTIDO EM BINARIO E:%d\n",dec,bin);
    printf("===========================================================");
}
