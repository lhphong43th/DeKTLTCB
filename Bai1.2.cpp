#include	<stdio.h>

int TinhToHop(int n, int k);
int TinhGiaiThua(int n);

int main()
{
	int n, k, kqToHop;
	printf("\n Nhap gia tri n: ");
	scanf("%d", &n);
	
	printf("\n Nhap gia tri k: ");
	scanf("%d", &k);
	
	kqToHop= TinhToHop(n, k);
	printf("\n To hop chap %d cua %d la: %d", k, n, kqToHop);
	
	return 0;
}

int TinhToHop(int n, int k)
{
	int kqToHop;
	
	kqToHop = TinhGiaiThua(n) / (TinhGiaiThua(k) * TinhGiaiThua(n-k));
	
	return kqToHop;
}

int TinhGiaiThua(int n)
{
	int kqGiaiThua = 1;
	
	for(int i = 1; i <= n; i++)
		kqGiaiThua = kqGiaiThua * i;
		
	return kqGiaiThua;
}
