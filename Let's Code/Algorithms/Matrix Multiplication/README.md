# Matrix Multiplication
![image](https://user-images.githubusercontent.com/99830416/230063119-2a5e0598-c499-4dee-9584-84d1cae935fb.png)

# Resources
- [Matrix Multiplication | Geeks For Geeks](https://practice.geeksforgeeks.org/problems/multiply-2-matrices4144/1)
- [Matrix Multiplication | Calculator](https://matrix.reshish.com/multiplication.php)


# Naive Solution 
### `cpp`
```cpp
int n; cin >> n; 
vector<vector<int>>v1(n, vector<int>(n)), v2(n, vector<int>(n)), ans(n, vector<int>(n));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> v1[i][j];
    }
}
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> v2[i][j];
    }
}
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            ans[i][j] += v1[i][k] * v2[k][j];
        }
    }
}
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << ans[i][j] << " ";
    }
    cout << "\n";
}
```
### `C#`
```cs
static public int[,] MatrixMultiply(int[,] M1, int[,] M2, int N)
{
    //REMOVE THIS LINE BEFORE START CODING
    //throw new NotImplementedException();
    int[,] ans = new int[N, N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                ans[i, j] += M1[i, k] * M2[k, j];
            }
        }
    }
    return ans;
}
```
### Complexity
- O(n^3)

# Divide & Conquer 
```cpp

```