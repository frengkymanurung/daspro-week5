/*
Nama    : Frengky Manurung
NIM     : 13321005
Kelas   : D3TK1
*/


#include <stdio.h>

int main()
{
    int counter = 1;
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (counter <= number) {
        printf("It is %d\n", counter);
        ++counter;
    }
    return 0;
}