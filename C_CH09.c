//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1293
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){
    int n, A, F;
    scanf("%d", &n);
    while(n--){
        scanf("%d%d", &A, &F);
        for(int i = 0; i < F; i++){
            for(int j = 1; j <= A; j++){
                for(int k = 0; k < j; k++){
                    printf("%d", j);
                }
                printf("\n");
            }
            for(int j = A - 1; j > 0; j--){
                for(int k = 0; k < j; k++){
                    printf("%d", j);
                }
                printf("\n");
            }
            if(i != F - 1)printf("\n");
        }
        if(n != 0) printf("\n");
    }
    return 0;
}
