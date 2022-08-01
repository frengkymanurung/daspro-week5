#include <stdio.h>
#include <stdlib.h>

int main(){

    float hours;
    float rate;
    float pay;
    float total_pay;
    float count_emp = 0;
    int num_emp;

    for (count_emp = 0; count_emp < num_emp; count_emp +=1) {

        printf("Hours> ");
        scanf("%1f", &hours);
        printf("Rate > $");
        scanf("%1f", &rate);

        pay = hours * rate;
        total_pay = total_pay + pay;

        printf("\nAll employees processed\n");
        printf("Pay is $%6.2f\n", pay);
        printf("\nTotal payroll is $%8.2f\n", total_pay);
    }
    return 0;

}
