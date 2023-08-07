# 8 Queens
## [8 Queens | Codeforces](https://codeforces.com/group/gA8A93jony/contest/270592/problem/P)

## Solution
```cpp
bool isSafe(int row, int column, vector<string> &chessBoard) {
    int n = chessBoard.size();
 
    // check for the current row
    for (int j = 0; j < column; j++) {
        if (chessBoard[row][j] == 'Q')
            return false;
    }
 
    int i, j;
 
    // check for upper left diagonal [i--, j--]
    i = row, j = column;
    while (i >= 0 and j >= 0) {
        if (chessBoard[i][j] == 'Q')
            return false;
        i--, j--;
    }
 
    // check for lower left diagonal [i++, j]
    i = row, j = column;
    while (i < n and j >= 0) {
        if (chessBoard[i][j] == 'Q')
            return false;
 
        i++, j--;
    }
 
    return true;
}
int mx = -1;
void nQueen(int col, int value, vector<string>chessBoard, vector<vector<int>>& cost) {
    int n = chessBoard.size();
    if (col == n) {
        mx = max(mx, value);
        return;
    }
 
    for (int i = 0; i < n; i++) {
        if (isSafe(i, col, chessBoard)) {
            chessBoard[i][col] = 'Q';
            nQueen(col + 1, value + cost[i][col], chessBoard, cost);
            chessBoard[i][col] = '.';
        }
    }
}
void doIt() {
    int n = 8;
    vector<vector<int>>cost(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }
 
    // initialize chess board
    vector<string>chessBoard(n);
    string s(n, '.');
    for (int i = 0; i < n; i++) {
        chessBoard[i] = s;
    }
 
    mx = -1;
    nQueen(0, 0, chessBoard, cost);
    cout << mx << "\n";
}
```
