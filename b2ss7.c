#include <stdio.h>
int main(){
    int mang[5];
    int i;
    for (i=0;i<5;i++){
        printf("nhap phan tu thu %d",i+1);
        scanf("%d",mang[0]);
    }
    printf("phan tu trong mang la");
    for(i=0;i<5;i++){
        printf("%d",mang[i]);

    }
}