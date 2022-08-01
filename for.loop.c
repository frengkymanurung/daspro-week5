//Nama : Frengky Manurung
//NIM : 13321005
//Kelas : D3TK1


#include <stdio.h>
#include <stdlib.h>

int  main()
{
    float count_emp,number_emp,hours,rate,total_pay,pay;
            printf("Hours> ");
            scanf("%1f", &hours);
            printf("Rate > $");
            scanf("%1f", &rate);

    for (count_emp = 0; count_emp < number_emp; count_emp += 1) {
            
            pay = hours * rate;
            total_pay = total_pay + pay;
        }
        printf("Pay is $%6.2f\n\n", pay);
        printf("All employees processed\n");
        printf("Total payroll is $%8.2f\n", total_pay);

        return 0;

}
