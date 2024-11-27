#include <stdio.h>
int main() {
    int mang[5] = {12, 45, 7, 23, 89};
    int max = mang[0];
    int min = mang[0];
    for (int i = 1; i < 5; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }
    printf("phan tu lon nhat trong mang: %d\n", max);
    printf("phan tu nho nhat trong mang: %d\n", min);
}