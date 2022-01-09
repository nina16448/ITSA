//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1666
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int n, m, L, sizee;
int graph[410][410];
int visited[410][410];
int Lsize[80000];

int cmp(const void* a, const void* b){
    return (*(int *)b) - (*(int *)a);
}

void DFS(int x, int y){
    if(visited[x][y] || !graph[x][y]){
        sizee--;
        return;
    }
    visited[x][y] = 1;
    sizee++;
    DFS(x + 1, y);
    sizee++;
    DFS(x - 1, y);
    sizee++;
    DFS(x, y + 1);
    sizee++;
    DFS(x, y - 1);
}

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            scanf("%d", &graph[i][j]);
        }
    }
    L = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            sizee = 0;
            if(visited[i][j] || graph[i][j] == 0) continue;
            DFS(i, j);
            Lsize[L] = sizee + 1;
            L++;
        }
    }
    qsort(Lsize, L, sizeof(int), cmp);
    for(int i = 0; i < L; i++){
        printf("%d\n", Lsize[i]);
    }
    return 0;
}