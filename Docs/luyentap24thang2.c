#include <stdio.h>

void thongtincanhan(){
	//	Ma sv, ten, tuoi, dia chi, nganh hoc
	char ten[100];
	int tuoi=0;
	char diachi[100];
	char nganhhoc[100];
	// Nhap vao
	fflush(stdin);
	printf("Moi nhap vao ten: ");
	gets(ten);
	printf("Moi nhap vao tuoi: ");
	scanf("%d",&tuoi);
	fflush(stdin);
	printf("Moi nhap vao dia chi: ");
	gets(diachi);
	printf("Moi nhap vao nganh hoc: ");
	gets(nganhhoc);
	// Xuat ra
	printf("\nTen la: %s",ten);
	printf("\nTuoi la: %d",tuoi);
	printf("\nDia chi la: %s",diachi);
	printf("\nNganh hoc la: %s",nganhhoc);
	// Kiem tra sinh vien da vao dai hoc chua
	if(tuoi>=18){
		printf("\n--> Sinh vien da vao Dai Hoc");
	}else{
		printf("\n--> Sinh vien chua vao Dai Hoc");
	}
}

void tinhtongn(){
	int n=0;
	int i=0;
	int tong=0;
	printf("Moi nhap n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if( i%2!=0 && i%3==0 && i!=9){
		printf("%d\t",i);
		tong=tong+i;
	}
	}
	printf("\nTong cac so tu 1-n la: %d",tong);
}

void kiemtraso(){
	int n=0;
	int i=0;
	int tong=0;
	int dem=0; 
	printf("Moi nhap vao n: ");
	scanf("%d",&n);
	
	if(n>0) {
		printf("\nDay la so nguyen duong");
	}else if (n<0) {
		printf("\nDay la so nguyen am");
	}
	for(i=1;i<n;i++){
	if(i%3==0){
		printf("\nCac so chia het cho 3 tu 0-n: %d\t");
	}
	}
}

void thongtinsinhvien(){
	int n=0;
	printf("Moi nhap so luong lop: ");
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++){
		printf("Moi nhap so sinh vien cho lop %d: ",i);
		scanf("%d",&a[i]);
	}
	// In ra 
	printf("\nSo luong lop la: %d");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	int dem=0;
	int tong=0;
	int TBC=0;
	for(i=0;i<n;i++){
		tong=tong+a[i];
	}
	TBC=(float)tong/n;
	printf("\nTrung binh cong so sinh vien: %2d",TBC);
	for(i=0;i<n;i++){
		if(a[i]>TBC){
			dem++;
		}
	}
	printf("\nCac lop co so sinh vien lon hon sinh vien trung binh la: %d",dem);
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			dem++;
		}
	}
	printf("\nSo lop co so luong sinh vien la so chan la: %d",dem);
}

void kiemtrathangtrongnam(){
	int thang;
	printf("Moi nhap thang: ");
	scanf("%d",&thang);
	
	if(thang>=1 && thang <=12){
		if(thang>=1 && thang <=3){
			printf("Thang %d thuoc quy 1",thang);
		}else if(thang>=4 && thang <=6){
			printf("Thang %d thuoc quy 2",thang);
		}else if(thang>=7 && thang <=9){
			printf("Thang %d thuoc quy 3",thang);
		}else if(thang>=10 && thang <=12){
			printf("Thang %d thuoc quy 4",thang);
		}
	}else{
		printf("\nBan da nhap mot thang khong hop le.");
	}
}

void sucvat(){
	//	ten, can nang, khu vuc giong, tieng keu, chieu cao
	char ten[100];
	char cannang[100];
	char khuvucgiong[100];
	char tiengkeu[100];
	char chieucao[100];
	
	fflush(stdin);
	printf("Moi nhap ten vat nuoi: ");
	gets(ten);
	printf("Moi nhap can nang vat nuoi: ");
	gets(cannang);
	printf("Moi nhap khu vuc giong: ");
	gets(khuvucgiong);
	printf("Moi nhap tieng keu: ");
	gets(tiengkeu);
	printf("Moi nhap chieu cao: ");
	gets(chieucao);
	
	printf("\nTen la: %s",ten);
	printf("\nCan nang la: %s",cannang);
	printf("\nKhu vuc giong la: %s",khuvucgiong);
	printf("\nTieng keu la: %s",tiengkeu);
	printf("\nChieu cao la: %s",chieucao);
}

int main (){
	int menu;
	do{
		printf("\n+--------------------Menu--------------------+");
		printf("\n1. Nhap thong tin ca nhan");
		printf("\n2. Tinh tong");
		printf("\n3. Kiem tra so");
		printf("\n4. Nhap thong tin sinh vien");
		printf("\n5. Kiem tra thang trong nam");
		printf("\n6. Nhap thong tin dong vat ban nuoi");
		printf("\n0. Thoat");
		printf("\n+--------------------------------------------+");
		printf("\nMoi chon chuc nang: ");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				thongtincanhan();
				break;
			case 2:
				tinhtongn();
				break;
			case 3:
				kiemtraso();
				break;
			case 4:
				thongtinsinhvien();
				break;
			case 5:
				kiemtrathangtrongnam();
				break;
			case 6:
				sucvat();
				break;
			case 0:
				printf("\nBan da thoat chuong trinh");
				break;
			default:
				printf("\nChuong trinh khong ton tai! 404 NOT FOUND");
		}
	}while(menu!=0);
	return 0;
} 
