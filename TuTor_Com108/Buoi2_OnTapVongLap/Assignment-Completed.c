//  Tạo 1 menu gồm các chức năng sau đây . Menu lặp đi lặp tới khi nào nhập 12 
//  Nhập n. Nhập đến khi là số nguyên dương. Xong tính tích từ 1 tới n 
//  Nhập vào 2 số nguyên. Tính tổng hiệu tích thương của 2 số đó 
//  Nhập vào 1 số. Kiểm tra nó thuộc tháng nào trong năm 
//  Nhập 3 số dương. Nhập đi nhập lại nếu không phải số dương. Kiểm tra xem 3 số đấy có hợp thành 1 tam giác hay không? Nếu có thì đó là tam giác loại gì 
//  Nhập vào 1 tháng trong năm. Kiểm tra tháng này thuộc quý nào trong năm
//  Nhập vào 1 tháng trong năm. Kiểm tra tháng đó có bao nhiêu ngày. Nếu tháng 2 thì in ra 28 hoặc 29 ngày.
//  7. Nhập vào n. Tính tổng các số lẻ của nghịch đảo: 1+1/3+..+1/n 
//  8. Đếm tất cả các số chẵn từ 1 tới n với n là số nhập từ bàn phím 
//  9. Tính tích của tất cả các số lẻ và chia hết cho 3 từ 1 - n  với n nhập vào từ bàn phím. 
//  10. Đếm tất cả các số lẻ và chia hết cho 5 từ 0 - n với n nhập vào từ bàn phím 
//  11. Liệt kê tất cả các số chẵn và chia hết cho 2 và 3 từ 0 - n với n nhập vào từ bàn  phím. 
//  12. Thoát 
#include <stdio.h>

void tinhtichtu1denn(){
	int n;
	printf("Moi nhap 1 don vi: ");
	scanf("%d",&n);
	
	while (n<=0){
		printf("\nMoi ban nhap lai: ");
		scanf("%d",&n);
	}
	int i=0;
	int tong=0;
		printf("\nTich tu 1 den %d la:\n",tong);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
		tong=tong+i;
	}
	printf("\nTong cac so trong do la: %d",tong);
}

void tonghieutichthuong(){
	int a=0;
	int b=0;
	printf("Moi nhap a: ");
	scanf("%d",&a);
	printf("\nMoi nhap b: ");
	scanf("%d",&b);
	//	In ra ket qua
	printf("Tong la:%d\n",a+b);
	printf("Hieu la:%d\n",a-b);
	printf("Tich la:%d\n",a*b);
	printf("Thuong la:%f\n",(float)a/b);
}

void kiemtrathang(){
	int month;
	printf("Moi nhap thang: ");
	scanf("%d",&month);
	while(month<=0<=12){
		printf("Ban da nhap sai. Vui long nhap (so thang>0 & <12): ");
		scanf("%d",&month);
		if(month==1){
			printf("Thang Mot (January)");
		}else if(month==2){
			printf("Thang Hai (February)");
		}else if(month==3){
			printf("Thang Ba (March)");
		}else if (month==4){
			printf("Thang Tu (April)");
		}else if(month==5){
			printf("Thang Nam (May)");
		}else if(month==6){
			printf("Thang Sau (June)");
		}else if(month==7){
			printf("Thang Bay (July)");
		}else if(month==8){
			printf("Thang Tam (August)");
		}else if(month==9){
			printf("Thang Chin (September)");
		}else if(month==10){
			printf("Thang Muoi (October)");
		}else if (month==11){
			printf("Thang Muoi Mot (November)");
		}else if(month==12){
			printf("Thang Muoi Hai (December)");
		}
	}
}

void nhapvaobasoduong(){
	int a=0;
	int b=0;
	int c=0;
	printf("Moi nhap so duong a: ");
	scanf("%d",&a);
	printf("\nMoi nhap so duong b: ");
	scanf("%d",&b);
	printf("\nMoi nhap so duong c: ");
	scanf("%d",&c);
	while(a,b,c<0){
		printf("Ban da nhap sai. Vui long nhap so >0");
	}
	//	Kiem tra tam giac
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Ki?m tra lo?i tam giác
        if (a == b && b == c) {
            printf("Day la tam giac deu.\n");
        } else if (a == b || b == c || a == c) {
            printf("Day la tam giac can.\n");
        } else {
            printf("Day la tam giac thuong.\n");
        }
    } else {
        printf("Ba so vua nhap khong tao thanh tam giac.\n");
    }

}

void thangthuocquynaotrongnam(){
	int month; 
	printf("Moi nhap vao 1 thang: ");
	scanf("%d",&month);
	if (month<=3){
		printf("Thang nay thuoc Quy 1");
	}else if(month<=6){
		printf("Thang nay thuoc Quy 2");
	}else if(month<=9){
		printf("Thang nay thuoc Quy 3");
	}else if(month<=12){
		printf("Thang nay thuoc Quy 4");
	}
}

void kiemtrathangcobaonhieungay (){
	int thang=0;
	printf("\nMoi nhap thang: ");
	scanf("%d",&thang);
	if ( thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 ){
		printf("Thang nay co 31 ngay"); 
	}else if ( thang == 4 || thang == 6 || thang == 9 || thang == 11 ){
		printf("Thang nay co 30 ngay");
	}
	int nam=0;
	printf("Moi nhap so nam hien tai: ");
	scanf("%d",&thang);
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
		// In ra Nam Thuong & Nam Nhuan
		printf("Day la: NAM NHUAN",nam);
	}else {
		printf("Day la: NAM THUONG",nam);
	}
}

void tinhtongcacsolenghichdao(){
	int n;
    float sum = 0;

    // Nhap gia tri cua n
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    // Tính tong cac so le cua nghich doa tu 1 den n
    int i=0;
    for (i = 1; i <= n; i += 2) {
        sum += 1.0 / i;
    }

    // In ra ket qua
    printf("Tong cac so la cua nghich dao tu 1 den %d là: %.6f\n", n, sum);


}

void demcacsochantu1denn(){
	//	Nhap vao gia tri
	
	int n=0;
	printf("Nhap gia tri cua n: ");
	scanf("%d",&n);
	
	//	Nhap lai khi nhap so le
	if(n%2!=0){
		printf("Ban da nhap sai. Moi nhap lai gia tri (CHI NHAP SO CHAN) : ");
		scanf("%d",&n);
	}
	
	//	In ra gia tri
	int i=0;
	printf("Cac so chan tu 1 -> n (lan luot theo thu tu) la: %d\t",i);
	for(i=1;i<=n;i++){
	//	Dieu kien so chan
		if(i%2==0){
			printf("%d\t",i);
		}
	}
}

void tichtatcasolechiahetchoba(){
	int n=0;
	printf("Moi nhap gia tri n: ");
	scanf("%d",&n);
	
	while (n%2==0){
	printf("Ban da nhap so chan, vui long nhap so le",n);
	break;
	}
	
	int i=0;
	long long product=1;
	for(i=1;i<=n;i+=2){
		if(i%3==0){
			product*=i;
		}
	}
	//In ra ket qua
		printf("Tich cac so le chia het cho 3 tu 1 den %d la: %lld\n",n,product);
}

void demtatcasolechiahetchonam(){
	int n;
    int dem = 0;

    // Nhap gia tri cua n
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    // Dem tat ca cac so le chia het cho 5 tu 1 - n
    int i=0;
    for (i = 1; i <= n; i += 2) {
        if (i % 5 == 0) {
            dem++;
        }
    }

    // In ra ket qua
    printf("So luong cac so le chia het cho 5 tu 0 den %d la: %d\n", n, dem);

}

void lietkecacsochanchiahetchohaivaba(){
    int n;

    // Nhap gia tri cua n
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    // Liet ke tat ca cac so chan va chia het cho 2 và 3 tu 0 den n
    printf("Các so chan chia het cho 2 và 3 tu 0 den %d la:\n", n);
    int i=0;
    for (i = 0; i <= n; i += 2) {
        if (i % 2 == 0 && i % 3 == 0) {
            printf("%d\n", i);
        }
    }
}

int main (){
	int th;
	do{
	printf("\n \t \t +----------BAN QUYEN THUOC THAI PHONG SOFTWARE JSC----------+");
	printf("\n \t \t \t \t 1. Tinh tich Tu 1 -> N");
	printf("\n \t \t \t \t 2. Tong & Hieu & Tich & Thuong");
	printf("\n \t \t \t \t 3. Kiem Tra Thang");
	printf("\n \t \t \t \t 4. Nhap Vao Ba So Duong, Co Phai Tam Giac Khong");
	printf("\n \t \t \t \t 5. Thang Thuoc Quy Nao Trong Nam");
	printf("\n \t \t \t \t 6. Kiem Tra Xem Thang Do Co Bao Nhieu Ngay");
	printf("\n \t \t \t \t 7. Tinh Tong Cac So Le Nghich Dao");
	printf("\n \t \t \t \t 8. Dem Cac So Chan Tu 1 -> N");
	printf("\n \t \t \t \t 9. Tich Tat Ca So Le Chia Het Cho Ba");
	printf("\n \t \t \t \t 10. Dem Tat Ca So Le Chia Het Cho Nam");
	printf("\n \t \t \t \t 11. Liet Ke Cac So Chan Chia Het Cho 2 va 3");
	printf("\n \t \t \t \t 0. Thoat Chuong Trinh");
	printf("\n \t \t \t +-----------------COPYRIGHT 2024-----------------+");
	printf("\nMoi nhap case (Chon 1 -> 11) : ");
	scanf("%d",&th);
	switch (th){
		case 1:
			tinhtichtu1denn();
			break;
		case 2:
			tonghieutichthuong();
			break;
		case 3:
			kiemtrathang();
		case 4:
			nhapvaobasoduong();
		case 5:
			thangthuocquynaotrongnam();
		case 6:
			kiemtrathangcobaonhieungay();
		case 7:
			tinhtongcacsolenghichdao();
		case 8:
			demcacsochantu1denn();
		case 9:
			tichtatcasolechiahetchoba();
		case 10:
			demtatcasolechiahetchonam();
		case 11:
			lietkecacsochanchiahetchohaivaba();
		case 0:
			printf("\nDa thuc hien YEU CAU cua ban! CHUC BAN CO MOT NGAY VUI VE <3\n");
	}	
	}while(th!=0);
	return 0;
}
