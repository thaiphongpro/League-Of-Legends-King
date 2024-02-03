#include <stdio.h>

int main()
{
    int number=0;
    int diem=0;
    int ch;
    printf("Moi chon case: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
    printf("Moi nhap vao 1 so: ");
    scanf("%d",&number);
    if(number % 2 == 0){
    printf("Số chẵn\n");
    }else{
        printf("Số lẻ\n");
    }
    break;
        case 2:
    printf("\nMoi nhap vao diem: ");
    scanf("%d",&diem);
    if (diem>=9){
        printf("Hoc luc Xuat xac");
    }else if(diem>=8){
        printf("Hoc luc Gioi");
    }else if(diem>=7){
        printf("Hoc luc Kha");
    }else if(diem>=5){
        printf("Hoc luc Trung Binh");
    }else if(diem>=3){
        printf("Hoc luc Yeu");
    }else if(diem>=0){
        printf("Hoc luc Kem");
    }
    }
}
//  CO 3 HINH THUC RE NHANH
//  if(điều kiện){…}
//  if(điều kiện){…}else{…}
//  if(điều kiện 1){…} …else if(điều kiện i){…}…else{…}

// Switch
