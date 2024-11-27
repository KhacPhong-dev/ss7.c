#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    int i;
    for(i=0;i<n;i++){
        int so;
        printf("Nhap phan tu thu %d la so le: ", i + 1);
        scanf("%d", &so);
            while (so % 2 == 0) {
            printf("So khong hop le nhap lai phan tu thu %d so le: ", i + 1);
            scanf("%d", &so);
        }
        mang[i] = so;
    }
        printf("Mang cac so le la:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
}
