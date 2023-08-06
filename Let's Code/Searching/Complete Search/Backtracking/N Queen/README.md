# N Queen
![image](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/55dacbf1-1996-435b-9062-fb0075062fa7)


## Solution
```cpp
void printChessBoard(vector<string>& chessBoard) {
    int n = chessBoard.size();
    for (int i = 0; i < n; i++) {
        cout << chessBoard[i] << "\n";
    }
}
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
void nQueen(int col, vector<string>chessBoard) {
    int n = chessBoard.size();
    if (col == n) {
        printChessBoard(chessBoard);
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (isSafe(i, col, chessBoard)) {
            chessBoard[i][col] = 'Q';
            nQueen(col + 1, chessBoard);
            chessBoard[i][col] = '.';
        }
    }
}
void doIt() {
    int n;
    cin >> n; 

    // initialize chess board
    vector<string>chessBoard(n);
    string s(n, '.');
    for (int i = 0; i < n; i++) {
        chessBoard[i] = s;
    }

    // print possible chess boards
    nQueen(0, chessBoard);
}
```
