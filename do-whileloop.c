//Nama : Frengky Manurung//
//NIM : 13321005//
//Kelas : D3TK1//


    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int num;
        do
        {
            printf("Enter a value : ");
            scanf("%d", &num);
        }while (num % 2 != 0);
        printf("nilai num %d habis dibagi 2", num);
    }


    