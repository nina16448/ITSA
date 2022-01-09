//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6982
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int arr[21];
int n, minn = 0x3f3f3f3f;

int min(int a, int b){
    if(a < b)return a;
    return b;
}

void DFS(int level, int Lsum, int Rsum){
    if(level == n){
        minn = min(minn, abs(Lsum - Rsum));
        return; 
    }
    DFS(level + 1, Lsum + arr[level], Rsum);

    DFS(level + 1, Lsum, Rsum + arr[level]);
}

int main(){
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    DFS(0, 0, 0);
    printf("%d\n", minn);
    return 0;
}