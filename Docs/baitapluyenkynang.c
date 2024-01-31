#include <stdio.h>
#include <math.h>
int main (){
	//	Dieu kien Bai 1 
	char ten[100];
	int namhientai=2024;
	// Dieu kien Bai 2
	int diemToan=0;
	int diemVan=0;
	int diemAnh=0;
	// Dieu kien Bai 3
	int i=0;
	int n;
	// Case
	int ch;
	printf("1 Nhap thong tin ca nhan");
	printf("\n2 Tinh toan");
	printf("\n3 Thong tin tien thuong cuoi nam");
	printf("\n4 Thoat");
	printf("\nMoi nhap case: ");
	scanf("%d",&ch);
	switch (ch){
		case 1:
			//	Nhap vao cac thong tin bao gom: ho ten, dia chi, nam sinh, gioi tinh. 
			//	In ra cac thong tin sau ra man hinh: ho ten, dia chi, tuoi = (2024-nam sinh), gioi tinh
			
			//	Nhap vao du lieu
			printf("\nMoi nhap ho ten: ");
			scanf("%s",&ten);
			gets(ten);
			char diachi[100];
			printf("Moi nhap dia chi: ");
			scanf("%s",&diachi);
			gets(diachi);
			fflush(stdin);
			int namsinh=0;
			printf("Moi nhap nam sinh: ");
			scanf("%d",&namsinh);
			char gioitinh[50];
			printf("Moi nhap gioi tinh: ");
			scanf("%s",&gioitinh);
			
			//Ket qua tra ve
			printf("KET QUA TRA VE");
			printf("\nHo ten cua ban la:%s",ten);
			printf("\nDia chi cua ban la: %s\n",diachi);
			printf("Tuoi cua ban la: %d\n",namhientai-namsinh);
			printf("Gioi tinh cua ban la: %s\n",gioitinh);
			break;
		case 2:
			//	Nhap diem TOAN, VAN, Anh cua Sinh Vien. Tinh diem trung binh cua sinh vien
			//	In ra thong tin sau: 0<diem tb<=5 hoc luc trung bình, 5< dtb<=8 hoc luc khá, 8< dtb<=10 hoc luc gioi
			printf("Moi nhap diem Toan: ");
			scanf("%d",&diemToan);
			printf("\nMoi nhap diem Van: ");
			scanf("%d",&diemVan);
			printf("\nMoi nhap diem Anh: ");
			scanf("%d",&diemAnh);
			//	Tinh diem trung binh
			int diemTb;
			diemTb=(diemToan+diemVan+diemAnh)/3;
			printf("Diem Trung Binh:%f",(float)diemTb);
			//	In ra thong tin
			if (diemTb<=5){
				printf("\nHoc luc trung binh");
			}else if(diemTb<=8){
				printf("\nHoc luc kha");
			}else if (diemTb<=10){
				printf("\nHoc luc gioi");
			}
		case 3:
			//	Moi nhap so nhan vien duoc thong
			//	Moi nhap luong cua cac nhan vien tuong ung
			//	Yeu cau: In ra cac thong tin thuong cua nhan vien = luong * 15%
			//	Tim vi tri cua nhan vien co luong cao nhat
			//	Kiem tra co bao nhieu nhan vien co muc luong > 5.000.000d
			printf("Moi nhap so nhan vien duoc thuong: ");
			scanf("%d,",&n);
			int a[n];
			for(i;i<n;i++){
				printf("Moi nhap luong cua nhan vien thu %d: ");
				scanf("%d",&a[i]);
			}
			for (i=0;i<n;i++){
				printf("luong thuong cua nhan vien so %d la: %.0f\n",i+1,a[i]*0.15);
			}
			int max=a[0];
	int vtm;
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==max){
			printf("nhan vien so %d la nhan vien co muc luong cao nhat la: %d\n",i+1,max);
		}
	}
	int dem=0;
	for(i=0;i<n;i++){
		if(a[i]>=5000000){
			dem++;
		}
	}
	printf("co %d nhan vien co muc luong tren 5000000\n",dem);
}
	return 0;
}
