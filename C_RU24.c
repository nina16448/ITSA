//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=29335
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

double f(int n){
    if(n == 1) return 2;
    double m = 2 * f(n - 1);
    return m / (1 + m);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%.5f\n", f(n));
    return 0;
}