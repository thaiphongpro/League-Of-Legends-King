// Khai bao thu vien 
#include <stdio.h> 

int main(){
    // 1. Re nhanh 
    // Cu phap:
    // if(dieu kien){
    //     // Code 
    // }else if(dieu kien){
    //     // Code 
    // } // CO THE CO RAT NHIEU ELSE IF 
    // ....
    // else {
    //     // Code 
    //     // Cac tru?ng h?p còn l?i 
    // }
    // Chú ý : LUON LUON CHI CO 1 IF , 1 ELSE 
    // CON THUA BN THI MOI LA ELSE 
    // KET THUC LUON LUON LA ELSE 
    // VD 1: Nhap vao 1 so. Kiem tra day la so chan hay le  // 2 DK: 1 if , 1 else 
    // VD 2: Nhap vao 1 so. Kiem tra day la so nguyen duong hay nguyen am
    // 1 if , 1 else => 1 else if 
    int number;
    printf("Vui long nhap so:");
    scanf("%d",&number);
    // if(number % 2 == 0){
    //     printf("Day la so chan");
    // }else{
    //     printf("day la so le ");
    // }
    if(number > 0 ){
        printf("Day la so duong");
    }else if (number < 0 ){
        printf("Day la so am");
    }else{
        printf("Khong phai so nguyen duong hoac nguyen am");
    }
    return 0;
}
