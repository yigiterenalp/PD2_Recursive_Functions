#include <stdio.h>
 
int girilenSayiyaKadargoster(int);
 
int main() {
    int sayi = 55;
    int sonuc = girilenSayiyaKadargoster(sayi);
    printf("%d\n", sonuc);
    return 0;
}
 
int girilenSayiyaKadargoster(int x) {
    if (x == 0)
        return 0;
    printf("%d ", x);
    return girilenSayiyaKadargoster(x - 1);
 
}
