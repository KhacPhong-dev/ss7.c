#include <stdio.h>
int main(){
    int mang[5]={1,2,3,4,5};
    int dodai = sizeof(mang)/sizeof(mang[0]);
    int i;
    for (i=0;i<dodai;i++){
        printf("phan tu thu %d la %d",i+1,mang[i]);

    }
    printf("do dai cua mang la %d",dodai);

}