#include <stdio.h>

int pc[100][100];
int visit[100];
int virus;

void check_connect(int n, int k){
    for(int i=0; i<n; i++){
        if(visit[i] == 0 && pc[k][i] == 1){
            visit[i] = 1;
            check_connect(n, i);
            virus ++;
        }
    }
}

int main (){
  
    int n, pair;
    int x, y;
    
    scanf("%d", &n);
    scanf("%d", &pair);
  
    for(int i=0; i < pair; i++){
        scanf("%d %d", &x, &y);
        pc[x-1][y-1] = 1;
        pc[y-1][x-1] = 1;
    }
  
    visit[0] = 1;
    check_connect(n, 0);
    
    printf("%d", virus);
}

