//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30756
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n, a, b, c;
    scanf("%d,%d,%d,%d", &n, &a, &b, &c);
    int coin = n - 15 * a - 20 * b - 30 * c;
    if(coin <= 0) printf("0\n");
    else
        printf("%d,%d,%d\n", (coin % 50) % 5 , (coin % 50) / 5, coin / 50);
    return 0;
}