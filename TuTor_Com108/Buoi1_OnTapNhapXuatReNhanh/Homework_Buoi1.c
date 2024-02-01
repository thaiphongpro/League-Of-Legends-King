#include <stdio.h>
int main (){
	//Tao 1 menu gom các chuc nang sau:
	//Tính tong, hieu tích, thuong cua 2 so nguyên 
	//Tính chu vi , dien tích cua hình chu nhat 
	//Kiem tra so chan nhap tu bàn phím
	//Nhap vào tuoi và in ra tuoi 
	//Nhap vào do F và in ra do C 
	//Thoát
	int a=0;
	int b=0;
	int doF=0;
	int n;
	int ch;
	printf("1. Tinh tong, hieu, tich, thuong cua 2 so nguyen");
	printf("\n2. Tinh chu vi, dien tich cua hinh chu nhat");
	printf("\n3. Kiem tra so chan nhap tu ban phim");
	printf("\n4. Kiem tra tuoi");
	printf("\n5. Nhap vao do F va in ra do C");
	printf("\n6. Chon 6 de thoat chuong trinh");
	printf("\nMoi nhap case: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			//Tong, hieu, tich, thuong
			printf("Moi nhap gia tri cua a: ");
			scanf("%d",&a);
			printf("\nMoi nhap gia tri cua b: ");
			scanf("%d",&b);
			//Ket qua tra ve
			printf("Tong la: %d",a+b);
			printf("\nHieu la: %d",a-b);
			printf("\nTich la: %d",a*b);
			printf("\nThuong la:%f",(float)a/b);
			break;
		case 2:
			//Chu vi & Dien tich hinh chu nhat
			printf("Moi nhap chieu dai: ");
			scanf("%d",&a);
			printf("\nMoi nhap chieu rong: ");
			scanf("%d",&b);
			//Ket qua tra ve
			int chuvi= (float)(a+b)/2;
			int dientich=a*b;
			printf("Chu vi HCN la:%d",chuvi);
			printf("\nDien tich HCN la:%d",dientich);
			break;
		case 3:
			//Kiem tra so chan nhap tu ban phim
			printf("Moi nhap gia tri: ");
			scanf("%d",&a);
			if(a%2==0){
				printf("Day la so chan");
			}else{
				printf("\nDay khong phai la so chan");
			}
			break;
		case 4:
			//Kiem tra do tuoi
			printf("Moi nhap tuoi: ");
			scanf("%d",&a);
			//Ket qua tra ve
			printf("\nTuoi cua ban la:%d",a);
			break;
		case 5:
			//Do F to Do C
			printf("Moi nhap do F: ");
			scanf("%d",&doF);
			//Ket qua tra ve
			printf("Do C la:%d",(doF-32)*5/9);
			break;
		case 6:
			//Nhap 0 de thoat
			printf("Nhap 0 de thoat chuong trinh: 0");
			scanf("%d",&n);
			if(n==0){
				//Neu user nhap 0 -> Thoat chuong trinh
				printf("Thoat chuong trinh.");
			}
			break;
	}
}
