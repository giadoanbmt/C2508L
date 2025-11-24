#include <stdio.h>

int main() {
	printf("Xin chao!\n\n"); // Ham printf (print formatted) dung de in 1 cai gi do
	
	//	%d, %f, %lf, %c ... goi la format specifier (dac ta dinh dang)
	
	int tuoi = 20;
	printf("Tuoi cua toi la: %d \n\n", tuoi);
	
	float diemToan = 7.5, diemVan = 3.45, diemAnh = 8.0;
	printf("Diem cac mon cua toi la: \n");
	printf("- Diem Toan: %f \n", diemToan);
	printf("- Diem Van: %f \n", diemVan);
	printf("- Diem Anh: %f \n", diemAnh);
	
	double DTB = 0;	
	printf("- Diem trung binh cac mon la: %.15lf \n", DTB = (diemToan + diemVan + diemAnh)/3);
	
	char kyTu = 'A';
	printf("\nGia tri cua bien kyTu la: %c \n", kyTu);
	
	//	De nhap du lieu tu ban phim, ta dung ham "scanf()"
	int a = 0, b = 0;
	printf("\nNhap so nguyen a: ");
	scanf("%d", &a); // Dau " & " la toan tu dia chi, dung de xac dinh gia tri cua bien " a " duoc luu o dau trong bo nho RAM
	printf("So ban vua nhap la: %d \n", a);
	
	printf("\nNhap so nguyen b: ");
	scanf("%d", &b);
	printf("So ban vua nhap la: %d \n", b);
	
	printf("\nTong 2 so nguyen ban vua nhap la: %d", a+b);
	printf("\nHieu 2 so nguyen ban vua nhap la: %d", a-b);
	printf("\nTich 2 so nguyen ban vua nhap la: %d", a*b);
	printf("\nThuong 2 so nguyen ban vua nhap la: %d", a/b);
	
	
	return 0;
}
