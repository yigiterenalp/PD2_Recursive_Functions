#include <stdio.h>
 
int obeb(int, int);
int okek(int, int);
 
int main() {
    int sayi1,sayi2;
    printf("1. sayiyi giriniz:  ");
    scanf("%d",&sayi1);
    printf("\n2. sayiyi giriniz:  ");
    scanf("%d",&sayi2);
    int sonuc = okek(sayi1, sayi2);
    printf("\nokek(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int obeb(int x, int y) {
    if (y == 0)
        return x;
    return obeb(y, x % y);
}
 
int okek(int x, int y) {
    return x * y / obeb(x, y);
}
