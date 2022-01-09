//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6941
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n, a, b, c;
    while(scanf("%d", &n) != EOF){
        a = n / 100;
        b = (n % 100) / 10;
        c = n % 10;
        if(n == a * a * a + b*b*b + c*c*c){
            printf("Yes\n");
        }
        else printf("No\n");
    }
    return 0;
}