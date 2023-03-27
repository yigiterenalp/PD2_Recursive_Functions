#include <stdio.h>
 
int carpmaIslemi(int x, int y);
 
int main() {
    int sayi1,sayi2;
    printf("1. sayiyi giriniz:  ");
    scanf("%d",&sayi1);
    printf("\n2. sayiyi giriniz:  ");
    scanf("%d",&sayi2);
    int sonuc = carpmaIslemi(sayi1, sayi2);
    printf("\n%d * %d = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int carpmaIslemi(int x, int y) {
    if (y == 0)
        return 0;
    return x + carpmaIslemi(x, y - 1);
}
