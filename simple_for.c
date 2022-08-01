/*
Nama    : Frengky Manurung
NIM     : 13321005
Kelas   : D3TK1
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 1;
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(counter; counter <= number; counter ++){
        printf("It is %d\n", counter);
    }
    return 0;
}