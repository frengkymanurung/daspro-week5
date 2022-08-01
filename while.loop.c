//Nama : Frengky Manurung//
//NIM : 13321005//
//Kelas : D3TK1//


#include <stdio.h>
#include <stdlib.h>


    int main()
    {
    float count_emp,hours,rate,pay,total_pay; 
    count_emp = 0;

    while (count_emp < 4) {
        printf("Hours> ");
        scanf("%1f", &hours);
        printf("Rate > $");
        scanf("%1f", &rate);
        pay = hours * rate;
        total_pay = total_pay + pay;
        count_emp = count_emp + 1;
        
    printf("\nAll employees processed\n");
    printf("Pay is $%6.2f\n", pay);
        
    printf("\nTotal payroll is $%8.2f\n", total_pay);


    return 0;

    }