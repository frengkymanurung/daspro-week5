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


    do{
        printf("It is a %d\n", counter);
        ++counter;
    } while (counter <= number);
    return 0;
}

