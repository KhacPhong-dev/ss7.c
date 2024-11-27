#include <stdio.h>
int main(){
    int n;
    printf("nhap so phan tu trong mang \n");
    scanf("%d",&n);
    int mang[n];
    int i;
    for(i=0;i<n;i++){
        printf("nhap phan tu thu %d trong mang \n",i+1);
        scanf("%d",mang[i]);
    }
}