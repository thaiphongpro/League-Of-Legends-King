 // Tao menu gom gom cac chuc nang.Menu lap lai toi khi chon chuc nang thoat
// 1. Tinh tong 2 so nguyen nhap tu ban phim 
// 2. Tinh tong cac so nguyen tu 1- n.
// 3. Thoat
#include <stdio.h>
// Co 2 loai ham: 
// Ham co kieu du lieu tra ve  (return)
// Ham k co kieu du lieu tra ve : VOID 
// HAM => VIET O TREN MAIN 
void tinhTongHaiSo(int soThuNhat, int soThuHai){
    int tong = soThuNhat + soThuHai;
    printf("Tong = %d\n",tong);
}
// Ham co kieu du lieu tra ve va co tham so truyen vao 
int tinhTongC2(int so1,int so2){
    int tong = so1 + so2;
    return tong;
}
int main(){
    // 0 => false 
    // 1 => true 
    while(1){ //while(true) => break; : lap mai mai 
        int chucNang;
        printf("\nmoi nhap:");
        scanf("%d",&chucNang);
        switch(chucNang){
            case 1:{
                printf("Day la chuc nang 1\n");
                int so1;
                printf("Moi nhap so 1:");
                scanf("%d",&so1);
                int so2;
                printf("Moi nhap so 2:");
                scanf("%d",&so2);
                // tinhTongHaiSo(so1,so2); // HAM VOID => KHONG CO KIEU DU LIEU TRA VE 
                int a = tinhTongC2(so1,so2);
                printf("Tong la %d\n",a);
                break;
            }
            case 2:{
                printf("Day la chuc nang 2");
                break;
            }
            case 3:{
                printf("Thoat");
                // break; => k dung dc break;
                // exit(0); // DUNG DOT NGOT => THEM EXIT (0)=> CHUC NANG MUON THOAT 
                break; // THOAT KHOI SWITCH
            }
            default:{
                printf("Chuc nang k ton tai");
                break;
            }
        }
        // // Khen => Tan dung cac ban hoc 
        // if(chucNang == 3){
        //     break; // THOAT KHOI VONG LAP 
        // }
    }

    return 0;
}
