//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1283
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}