#include<stdio.h>
#include<stdlib.h>
#include<iostream>

#define maxN 10
#define N 10
#define M 10
#define MINE -1
using namespace std;

int B[maxN][maxN]; 
int T[maxN][maxN];
int di[] = {0,  0, 1,  1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, -1, 1,  0, -1,  1};
int valid(int x, int y){
    if (x < 0 || x > N-1) return 0;
    if (y < 0 || y > M-1) return 0;
    return 1;
}
void create_mine(int k){
    srand(time(NULL));
    for(int i = 1; i <= k; ++i){
        int x = 
    }
}
void init(){
    for(int i = 0; i < N; ++i) for(int j = 0; j < M; ++j) T[i][j] = B[i][j] = 0;
}

void printMap1(){
    printf("  ");
    for(int i = 0; i < N; ++i) printf("%d ", i);
    printf("\n");
    for(int i = 0; i < N; ++i){
        printf("%d ", i);
        for(int j = 0; j < M; ++j) {
            if (B[i][j] == MINE) printf("x ");
            else if (B[i][j] == 0) printf(". ");
            else printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}
void printMap2(){
    printf("  ");
    for(int i = 0; i < N; ++i) printf("%d ", i);
    printf("\n");
    for(int i = 0; i < N; ++i){
        printf("%d ", i);
        for(int j = 0; j < M; ++j) {
            if (T[i][j] == 1){
                if (B[i][j] == MINE) printf("x ");
                else if (B[i][j] == 0) printf(". ");
                else printf("%d ", B[i][j]);
            }
            else printf("# ");
        }
        printf("\n");
    }
}
int count_remain(){
    int cnt = 0;
    for(int i = 0; i < N; ++i) for(int j = 0; j < M; ++j) cnt += (T[i][j] == 0);
    return cnt;
}
void open_cell_3(int r, int c){
    if (T[r][c] == 0){
        T[r][c] = 1;
        if (B[r][c] == 0){
            for(int x = 0; x < 8; ++x){
                if (valid(r + di[x], c + dj[x])) open_cell_3(r + di[x], c + dj[x]);
            }
        }
    }
}
int main(){
    init();
    cout << "level :";
    cin >> 
    create_mine()
    while(true){
        printMap2();
        cout << "nhap o: ";
        cin >> 
    }
    return 0;
}