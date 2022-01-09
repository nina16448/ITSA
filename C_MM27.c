//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6931
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF){
        int sum = 0;
        for(int i = n * (n < m) + m * (n >= m); i <= n * (n > m) + m * (n <= m); i++){
            sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}