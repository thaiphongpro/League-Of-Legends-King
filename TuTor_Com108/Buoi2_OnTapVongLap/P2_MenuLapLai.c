#include <stdio.h>

int main(){
    // C1: do...while 
    int chucNang;
    do{
        printf("Moi nhap chuc nang:");
        scanf("%d",&chucNang);
        switch(chucNang){
            case 1:{
                int a = 5;
                printf("chuc nang 1\n");
                break; // KET THUC MOI CASE => LUON LUON LA BREAK;
            }
            case 2:{
                int a = 7;
                printf("chuc nang 2\n");
                break;
            }
            case 3:{
                printf("chuc nang 3\n");
                break;
            }
            case 4:{
                printf("chuc nang 4\n");
                break;
            }
            case 5:{
                printf("chuc nang 5\n");
                break;
            }
            case 6:{
                printf("Thoat\n");
                break;
            }
            default:{
                printf("Chuc nang khong ton tai\n");// Cac truong hop khac 
                break;
            }
        }
    }while(chucNang != 6);
    return 0;
}
