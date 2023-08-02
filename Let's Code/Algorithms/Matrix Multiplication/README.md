# Matrix Multiplication
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            ans[i][j] += v1[i][k] * v2[k][j];
        }
    }
}
```

# Staressen
```cpp
void printMatrix(vector<vector<int>>v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}
void enterVector(vector<vector<int>>&v, int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
}
vector<vector<int>> addMatrices(vector<vector<int>>& v1, vector<vector<int>>& v2, int n) {
    vector<vector<int>>ans(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = v1[i][j] + v2[i][j];
        }
    }
    return ans;
}
vector<vector<int>> subtractMatrices(vector<vector<int>>& v1, vector<vector<int>>& v2, int n) {
    vector<vector<int>>ans(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = v1[i][j] - v2[i][j];
        }
    }
    return ans;
}
vector<vector<int>> multiMatrices(vector<vector<int>>&v1, vector<vector<int>>&v2) {
    int matrixSize = v1.size();
    vector<vector<int>>ans(matrixSize, vector<int>(matrixSize));
    if (matrixSize == 1) {
        // base case 
        vector<vector<int>> anss(1, vector<int>(1));
        anss[0][0] = v1[0][0] * v2[0][0];
        return anss;
    }
    int newSize = matrixSize / 2; 

    vector<vector<int>>
    A11(newSize, vector<int>(newSize)),
    A12(newSize, vector<int>(newSize)),
    A21(newSize, vector<int>(newSize)),
    A22(newSize, vector<int>(newSize)),

    B11(newSize, vector<int>(newSize)),
    B12(newSize, vector<int>(newSize)),
    B21(newSize, vector<int>(newSize)),
    B22(newSize, vector<int>(newSize)),

    C11(newSize, vector<int>(newSize)),
    C12(newSize, vector<int>(newSize)),
    C21(newSize, vector<int>(newSize)),
    C22(newSize, vector<int>(newSize)),

    S1(newSize, vector<int>(newSize)),
    S2(newSize, vector<int>(newSize)),
    S3(newSize, vector<int>(newSize)),
    S4(newSize, vector<int>(newSize)),
    S5(newSize, vector<int>(newSize)),
    S6(newSize, vector<int>(newSize)),
    S7(newSize, vector<int>(newSize)),
    S8(newSize, vector<int>(newSize)),
    S9(newSize, vector<int>(newSize)),
    S10(newSize, vector<int>(newSize)),

    P1(newSize, vector<int>(newSize)),
    P2(newSize, vector<int>(newSize)),
    P3(newSize, vector<int>(newSize)),
    P4(newSize, vector<int>(newSize)),
    P5(newSize, vector<int>(newSize)),
    P6(newSize, vector<int>(newSize)),
    P7(newSize, vector<int>(newSize)),

    tmpA(newSize, vector<int>(newSize)),
    tmpB(newSize, vector<int>(newSize));

    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            A11[i][j] = v1[i][j];
            A12[i][j] = v1[i][j + newSize];
            A21[i][j] = v1[i + newSize][j];
            A22[i][j] = v1[i + newSize][j + newSize];

            B11[i][j] = v2[i][j];
            B12[i][j] = v2[i][j + newSize];
            B21[i][j] = v2[i + newSize][j];
            B22[i][j] = v2[i + newSize][j + newSize];
        }
    }

    S1 = subtractMatrices(B12, B22, newSize);
    S2 = addMatrices(A11, A12, newSize);
    S3 = addMatrices(A21, A22, newSize);
    S4 = subtractMatrices(B21, B11, newSize);
    S5 = addMatrices(A11, A22, newSize);
    S6 = addMatrices(B11, B22, newSize);
    S7 = subtractMatrices(A12, A22, newSize);
    S8 = addMatrices(B21, B22, newSize);
    S9 = subtractMatrices(A11, A21, newSize);
    S10 = addMatrices(B11, B12, newSize);

    P1 = multiMatrices(A11, S1);
    P2 = multiMatrices(S2, B22);
    P3 = multiMatrices(S3, B11);
    P4 = multiMatrices(A22, S4);
    P5 = multiMatrices(S5, S6);
    P6 = multiMatrices(S7, S8);
    P7 = multiMatrices(S9, S10);

    tmpA = addMatrices(P5, P4, newSize);
    tmpB = subtractMatrices(tmpA, P2, newSize);
    C11 = addMatrices(tmpB, P6, newSize);

    C12 = addMatrices(P1, P2, newSize);
    C21 = addMatrices(P3, P4, newSize);

    tmpA = addMatrices(P5, P1, newSize);
    tmpB = subtractMatrices(tmpA, P3, newSize);
    C22 = subtractMatrices(tmpB, P7, newSize);


    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            ans[i][j] = C11[i][j];
            ans[i][j + newSize] = C12[i][j];
            ans[i + newSize][j] = C21[i][j];
            ans[i + newSize][j + newSize] = C22[i][j];
        }
    }
    return ans;
}
void do_it() {
    int n; cin >> n; 
    vector<vector<int>>
    v1(n, vector<int>(n)),
    v2(n, vector<int>(n)), 
    ans(n, vector<int>(n));
    enterVector(v1, n);
    enterVector(v2, n); 
    ans = multiMatrices(v1, v2); 
    printMatrix(ans);
}
```
