#include <stdio.h>
 
int faktoriyel(int);
 
int main() {
    int sayi = 6;
    int sonuc = faktoriyel(sayi);
    printf("%d! = %d\n", sayi, sonuc);
    return 0;
}
 
int faktoriyel(int x) {
    int sonuc = 1,i;
    for(i = 1; i<= x; i++)
        sonuc *= i;
    return sonuc;
}
