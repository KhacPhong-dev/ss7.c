#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    int i;
    printf("nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++){
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("Cac phan tu la so nguyen to trong mang la:\n");
    int a = 0;
    for (int i = 0; i < n; i++){
        int so = mang[i];
        int so1 = 1;
        if (so <= 1){
            so1 = 0;
        } else{
            int j;
            for (j = 2; j <= sqrt(so); j++){
                if (so % j == 0){
                    so1 = 0;
                    break;
                }
            }
        }
        if (so1) {
            printf("%d ", so);
            a = 1;
        }
    }
    if (a==0){
        printf("Khong co so nguyen to trong mang.");
    }
}