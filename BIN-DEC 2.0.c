#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    printf("===========================================================");
    printf("\nDIGITE O NUMERO BINARIO QUE DESEJA CONVERTER + ENTER: ");
    scanf("%lld", &n);
    printf("===========================================================");
    printf("\nO NUMERO %lld EM DECIMAL E: %d ", n, convert(n));
    printf("\n===========================================================");
}
int convert(long long n)
{
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
}
    return dec;
}
