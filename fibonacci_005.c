/*
Nama    : Frengky Manurung
NIM     : 13321005
Kelas   : D3TK1
*/

#include <stdio.h>

int main()
{
	int i, bil;
	int angka1 = 1;
	int angka2 = 1;
	int c;
	int jumlah = 1;

	printf("Enter any number to find the fibonacci sequence : ");
	scanf("%d", &bil);
	printf("The fibonacci sequence of %d number is : \n");
	printf("%d ", angka1);
	printf("%d ", angka2);
	for (i = 0; i < bil - 2; i++)
	{
		c = angka1 + angka2;
		printf("%d ", c);
		jumlah = jumlah + c;
		angka1 = angka2;
		angka2 = c;
	}
	return 0;
}
