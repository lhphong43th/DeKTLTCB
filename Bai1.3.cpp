#include	<stdio.h>
#define MAX 100

void NhapMang(int mangSoNguyen[], int soPhanTu);
void XuatMang(int mangSoNguyen[], int soPhanTu);
int TimSoNhoNhat(int mangSoNguyen[], int soPhanTu);
int KiemTraMangToanChan(int mangSoNguyen[], int soPhanTu);
void LietKeSoLonHonTBC(int mangSoNguyen[], int soPhanTu);
float TinhTrungBinhCong(int mangSoNguyen[], int soPhanTu);

int main()
{
	int mangSoNguyen[MAX], soPhanTu, kqMin, kqKiemTraMangToanChan;
	
	printf("\n Nhap vao so phan tu: ");
	scanf("%d", &soPhanTu);
	
	NhapMang(mangSoNguyen, soPhanTu);
	printf("\n Mang vua nhap la: ");
	XuatMang(mangSoNguyen, soPhanTu);
	
	kqMin = TimSoNhoNhat(mangSoNguyen, soPhanTu);
	printf("\n So nho nhat trong mang la: %d", kqMin);
	
	kqKiemTraMangToanChan = KiemTraMangToanChan(mangSoNguyen, soPhanTu);
	if(kqKiemTraMangToanChan == 1)
		printf("\n Mang toan chan.");
	else
		printf("\n Mang khong toan chan.");
	
	printf("\n Cac gia tri lon trung binh cong: ");
	LietKeSoLonHonTBC(mangSoNguyen, soPhanTu);
	
	return 0;
}

void NhapMang(int mangSoNguyen[], int soPhanTu)
{
	for(int i = 0; i < soPhanTu; i++)
	{
		printf("\n Nhap phan tu thu %d: ", i+1);
		scanf("%d", &mangSoNguyen[i]);
	}
}

void XuatMang(int mangSoNguyen[], int soPhanTu)
{
	for(int i = 0; i < soPhanTu; i++)
		printf("%5d", mangSoNguyen[i]);
}

int TimSoNhoNhat(int mangSoNguyen[], int soPhanTu)
{
	int kqMin = mangSoNguyen[0];
	for(int i = 1; i < soPhanTu; i++)
		if(kqMin > mangSoNguyen[i])
			kqMin = mangSoNguyen[i];
	
	return kqMin;
}

int KiemTraMangToanChan(int mangSoNguyen[], int soPhanTu)
{
	int demSoChan = 0;
	
	for(int i = 0; i < soPhanTu; i++)
		if(mangSoNguyen[i] % 2 == 0)
			demSoChan = demSoChan + 1;
			
	if(demSoChan == soPhanTu)
		return 1;
	else
		return 0;
}

void LietKeSoLonHonTBC(int mangSoNguyen[], int soPhanTu)
{
	float TBC = TinhTrungBinhCong(mangSoNguyen, soPhanTu);
	
	for(int i = 0; i < soPhanTu; i++)
		if(mangSoNguyen[i] > TBC)
			printf("%5d", mangSoNguyen[i]);
}

float TinhTrungBinhCong(int mangSoNguyen[], int soPhanTu)
{
	int kqTong = 0;
	float kqTBC;
	for(int i = 0; i < soPhanTu; i++)
		kqTong = kqTong + mangSoNguyen[i];
	
	kqTBC = (float)kqTong / soPhanTu; 
	
	return kqTBC;
}
