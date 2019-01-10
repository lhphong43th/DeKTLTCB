#include	<stdio.h>

int KiemTraSoNguyenTo(int n);

int main()
{
	int soNguyen, kqSoNguyenTo;
	printf("\n Nhap vao 1 so nguyen: ");
	scanf("%d", &soNguyen);
	
	kqSoNguyenTo = KiemTraSoNguyenTo(soNguyen);
	
	if(kqSoNguyenTo == 1)
		printf("\n So vua nhap la so nguyen to.");
	else
		printf("\n So vua nhap khong phai la so nguyen to.");
	
	return 0;
}

int KiemTraSoNguyenTo(int n)
{
	for(int i = 2; i < n; i++)
		if(n % i == 0)
			return 0;
	
	return 1;
}
