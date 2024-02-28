#include <stdio.h>

void thongtinthucung(){
	//	Ma thu cung, ten thu cung, tuoi
	char ten[100];
	char mathucung[100];
	int tuoi=0;
	fflush(stdin);
	printf("\nMoi nhap ten thu cung: ");
	gets(ten);
	printf("\nMoi nhap ma thu cung: ");
	gets(mathucung);
	printf("Moi nhap vao tuoi: ");
	scanf("%d",&tuoi);
	//	In ra
	printf("Ten la: %s\n",ten);
	printf("Ma thu cung la: %s\n",mathucung);
	printf("Tuoi thu cung la: %d\n",tuoi);
	
	printf("Gia cua thu cung la: %d",tuoi*500);
}

void songuyenn(){
	//	Tinh tong cac so le tu 1-n
	//	Kiem tra xem so n co chia het cho 5 hay khong
	//	Dem xem co bao nhieu so chia het cho 3 hoac la so chan tu 1-n
	int n;
	int i=0;
	int count=0;
	printf("Moi nhap vao gia tri n: ");
	scanf("%d",&n);
	
	int tong=0;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			tong=tong+i;
		}
	}
	printf("\nTong cac so le tu 1 den n la: %d",tong);
	
	if(n%5==0){
		printf("\nSo %d chia het cho 5",n);
	}else{
		printf("\nSo %d khong chia het cho 5",n);
	}
	
	for(i;i<=n;i++){
		if(i%3==0 && i%2!=0){
			count++;
		}
	}
	printf("\nCo %d so chia het cho 3 hoac la so chan trong khoang tu 1 den n la: %d.\n",count,n);

}

int main (){
	int menu;
	do{
	printf("\n+--------------------Menu--------------------+");
	printf("\n1. Thong tin thu cung");
	printf("\n2. Tinh tong");
	printf("\n3. Thong tin cua hang");
	printf("\n0. Thoat");
	printf("\n+-------------------------------------------+");
	printf("\nMoi chon chuc nang: ");
	scanf("%d",&menu);
	switch(menu){
		case 1:
			thongtinthucung();
			break;
		case 2:
			songuyenn();
			break;
		case 0:
			printf("\nDa thoat");
			break;
		default:
			printf("\n404 NOT FOUND! Chuong trinh khong ton tai");
	}
	}while(menu!=0);
}
