//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=687
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF){
        if(m & 1) printf("%.1f\n", (n - 80) * 0.7);
        else printf("%.1f\n", (n - 70) * 0.6);
    }
    return 0;
}