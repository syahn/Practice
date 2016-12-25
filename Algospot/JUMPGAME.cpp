int n, board[100][100];
bool jump(int y, int x){
    //기저사례: 게임판 밖을 벗어난 경우
    if(y >=n || x >= n) return false;
    //기저사례: 마지막 칸에 도착한 경우
    if(y == n-1 && x == n-1) return true;
    int jumpSize = board[y][x];
    return jump(y + jumpSize, x) || jump(y, x + jumpSize);
}

int n, board[100][100];
int cache[100][100];
bool jump2(int y, int x){
    //기저사례: 게임판 밖을 벗어난 경우
    if(y >=n || x >= n) return 0;
    //기저사례: 마지막 칸에 도착한 경우
    if(y == n-1 && x == n-1) return 1;
    //Memoization
    int &ret = cache[y][x];
    if(ret != -1) return ret;
    int jumpSize = board[y][x];
    return jump(y + jumpSize, x) || jump(y, x + jumpSize);
}
