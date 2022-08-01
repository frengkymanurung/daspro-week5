//Nama : Frengky Manurung//
//NIM : 13321005//
//Kelas : D3TK1//


#include <stdio.h>

int main()
{
    int x,y,z = 1;

    printf("Masukkan angka :\n");
    scanf("%d", &x);
    for (y = 1; y <= x; y++)
    {
        z = z * y;
    }
    printf("Maka nilai faktorial dari %d! adalah %d\n", x,z);

    return 0;
}