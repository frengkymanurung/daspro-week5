/*
Nama    : Frengky Manurung
NIM     : 13321005
Kelas   : D3TK1
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    int jumlah = 0;
    printf("Enter lower limit : ");
    scanf("%d", &a);
    printf("Enter upper limit : ");
    scanf("%d", &b);

    printf("Sum of even numbers from %d to %d is ", a, b);
    while(a < b){
        if(a %2 == 0){
            jumlah = jumlah + a;
        }
        a++;
    }
    printf("%d\n", jumlah);

    return 0;
}