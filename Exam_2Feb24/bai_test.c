#include <stdio.h>

void thongtincanhan(){
	char ten[100];
	int diem=0;
	char mssv[100];
	//	 Nhap vao thong tin
	fflush(stdin);
	printf("Moi nhap ten: ");
	gets(ten);
	printf("\nMoi nhap mssv: ");
	gets(mssv);
	printf("\nMoi nhap diem: ");
	scanf("%d",&diem);
	//	In ra thong tin
	printf("Ten la: %s\n",ten);
	printf("Diem la: %d\n",diem);
	printf("Ma so sinh vien la: %s",mssv);
}

void tinhtongtu1denn(){
	//	Nhap vao gia tri
	int n;
	printf("Moi nhap gia tri: ");
	scanf("%d",&n);
	
	//	In ra gia tri
	while (n<=0){
		printf("Da nhap sai, moi nhap lai: ");
		scanf("%d",&n);
	}
	//	In ra cac so nguyen
	int i=0;
	int tong=0;
	printf("Cac so nguyen tu 1 den %d la: \n",tong);
	for (i=1;i<=n;i++){
		printf("%d\t",i);
		tong=tong+i;
	}
	//	Chan, le
	printf("\nTong cac so do la: %d",tong);
	if(i%2==0){
		printf("\nDay la so chan");
	}else{
		printf("\nDay la so le");
	}
}

void thongtintv(){
	int n=0;
	int i;
    // Nhap so luong ti vi
    printf("+-------- Apple Store -------+\n");
    printf("Moi nhap so loung ti vi: ");
    scanf("%d", &n);

    // Nhap mang kích co cho tung ti vi
    float kichCo[n];
    for (i = 0; i < n; i++) {
        printf("Nhap kích co cho ti vi %d: ", i + 1);
        scanf("%f", &kichCo[i]);
    }

    // Tính so luong ti vi
    printf("\n+------  Xuat thông tin Ti Vi ------ +\n");
    printf("So luong ti vi là: %d\n", n);

    // Tính kích co trung binh
    float sum = 0;
    for (i = 0; i < n; i++) {
        sum += kichCo[i];
    }
    float kichCoTrungBinh = sum / n;
    printf("Kích co trung binh tivi: %.2f\n", kichCoTrungBinh);

    // Tim vi tri tivi co kich co lon nhat
    int viTriMax = 0;
    for (i = 1; i < n; i++) {
        if (kichCo[i] > kichCo[viTriMax]) {
            viTriMax = i;
        }
    }
    printf("Vi trí Ti vi có kích co lon nhat là: %d\n", viTriMax + 1);

}

int main(){	 
		int th;
		do{
		printf("1. Nhap vao ho ten");
		printf("\n2. Tinh tong tu 1 den n");
		printf("\n3. Thong tin tv");
		printf("\n4. Thoat");
		printf("\nMoi nhap case: ");
		scanf("%d",&th);
		switch (th){
			case 1:{
				thongtincanhan();
				break;
			}
			case 2:{
				tinhtongtu1denn();
				break;
			}
			case 3:{
				thongtintv();
				break;
			}
			case 4:{
				printf("\nDa thoat");
				break;
			}
		}
	}while(th!=4);
	return 0;
}
