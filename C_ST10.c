//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1285
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++) printf(" ");
        for(int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
