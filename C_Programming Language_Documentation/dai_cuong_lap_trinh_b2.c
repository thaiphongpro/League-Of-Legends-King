#include <stdio.h>
int main (){
	int tuoi;
	printf("Moi nhap so tuoi cua ban: ");
	scanf("%d",&tuoi);
	//	In ra ket qua
	printf("\nSo tuoi cua ban la: %d",tuoi);
	return 0;
}

//	Printf -> In
//	Scanf -> Nhap Du Lieu Tu Ban Phim
//	Int -> Khai Bao Hang So

//	%c : Kieu char 1 ky tu
//	%d : Kieu int
//	%u : Kieu unsigned int
//	%f : Kieu float
//	%lf : Kieu double
//	%s : Chuoi ky tu

//	----TOAN TU----
//	"+" -> Tong
//	"-" -> Hieu
//	"*" -> Tich
//	"/" -> Thuong
//	"%" -> Chia lay du
//	"++" -> Tang gia tri cua bien len 1 don vi
//	"--" -> Giam gia tri cua bien di 1 don vi

//	"==" -> So sanh bang
//	">" -> So sanh lon hon
//	">=" -> So sanh lon hon hoac bang
//	"<" -> So sanh nho hon
//	"<=" -> So sanh nho hon hoac bang
//	"!=" -> So sanh khac

//	"&&" -> Tra ve gia tri true khi tat ca bieu thuc tham gia bieu thuc co gia tri true
//	"||" -> Tre ve gia tri true khi co 1 bieu thuc tham gia bieu thuc co gia tri la true
//	"!" -> Lay gia tri phu dinh cua bieu thuc

//	"=" -> a=20 (gan 20 cho a) -> a==20
//	"+=" -> a+=10 (a=a+10) -> a==30
//	"-=" -> a-=10 (a=a-10) -> a==20
//	"*=" -> a*=10 (a=a*10) -> a==200
//	"/=" -> a/=10 (a=a/10) -> a==20
//	"%=" -> a%=10 (a=a%10) -> a==0
