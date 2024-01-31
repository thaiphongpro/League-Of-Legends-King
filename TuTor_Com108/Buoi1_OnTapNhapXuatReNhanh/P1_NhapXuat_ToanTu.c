// Khai bao thu vien 
#include <stdio.h> 

int main(){
    // {} => 1 khoi lenh. 
    // Tat ca cac code trong khoi lenh phai lui vao 1 tab 
    // Kieu du lieu:
    // so nguyen => int/ long  => %d , %ld
    // so thuc => float/double => %f, %lf 
    // chu?i/ký t? => char => %c, %s 
    // dúng sai(true/false) => bool
    // 1. Nhap du lieu tu ban phim => scanf (&)
    // 2. In ra man hinh => printf
    // Bai tap 
    // 1. Nhap 2 so nguyen tu ban phim. In gia tri cua 2 so nguyen day 
    // 2. Nhap 2 so nguyen tu ban phim. Tinh tong 2 so nguyen vua nhap 
    // B1: Nhap du lieu tu ban phim 
    int soThuNhat;
    int soThuHai;
    printf("Moi nhap vao so thu nhat:");
    scanf("%d",&soThuNhat);
    printf("Moi nhap vao so thu hai:");
    scanf("%d",&soThuHai);
    // B2: In ra 
    // printf("So thu 1: %d\n",soThuNhat);
    // printf("So thu 2: %d",soThuHai);
    // int tong = soThuNhat + soThuHai;
    // printf("Tong = %d\n",tong);
    // float thuong = (float)soThuNhat/soThuHai; // C1: ep kieu tuong minh 
    float thuong = 1.0 * soThuNhat/soThuHai; // C1: ep kieu tuong minh 
    // EP KIEU 
    // CO 2 CACH EP KIEU :
    // C1: EP KIEU TUONG MINH: (KIEU DU LIEU MUON EP)CONG THUC 
    // C2: EP KIEU NGAM : 1.0 * cong thuc 
    printf("Thuong = %f\n",thuong);
    return 0;
}
