#include <stdio.h>
 
int fibonacci(int);
 
int main() {
 
    int sayi = 15;
    int sonuc = fibonacci(sayi);
    printf("%d = %d\n", sayi, sonuc);
    return 0;
}
 
int fibonacci(int x) {
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
}
