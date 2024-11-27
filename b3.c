#include <stdio.h>

int main() {
    int mang[5] = {1, 2, 3, 4, 5};
    int sochan = 1;
    printf("cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            sochan = 2;
        }
    }
    if (sochan !=1) {
        printf("mang khong chua so chan.");
    }

}