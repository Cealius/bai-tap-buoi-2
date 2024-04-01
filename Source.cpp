#include <stdio.h>
int SoChinhPhuong(int num)
{
	int i;
	for (i = 1; i*i <= num; i++)
	{
		if (i*i == num)
		{
			return i;
		}
	}
	return 0;
}
int DemSCP(int n)
{
	int count = 0;
	int i;
	for (i = 0; i<n; i++)
	{
		if (SoChinhPhuong(i)){
			count++;
		}
	}
	return count;
}
int main(void){
	// Your code here!
	int n;
	printf("Nhap so nguyen duong n:");
	scanf_s("%d", &n);

	printf("Cac so chinh phuong nho hon %d la:\n", n);
	int i;
	for (i = 1; i<n; i++)
	{
		if (SoChinhPhuong(i)){
			printf("%d", i);
		}
	}

	printf("Tong cac so chinh phuong nho hon %d: %d\n", n, DemSCP(n));

	
}
