# 23 out of 5
- ### [23 out of 5 | VJudge](https://vjudge.net/contest/485599#problem/A)
- ### [23 out of 5 | UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1285)

## Solution 
```cpp
bool solve(int i, int val, int target, vector<int>& v, int n) {
    if (i == n) {
        return val == target;
    }

    bool op1 = solve(i + 1, val + v[i], target, v, n);
    bool op2 = solve(i + 1, val - v[i], target, v, n);
    bool op3 = solve(i + 1, val * v[i], target, v, n);

    return op1 or op2 or op3;
}
void doIt() {
    while (true) {
        int n = 5;
        vector<int>v(n);
        bool fail = true;
        for (auto& it : v) {
            cin >> it;
            if (it)
                fail = false;
        }
        if (fail)
            break;

        sort(all(v));
        bool found = false;
        do {
            if (solve(1, v[0], 23, v, n))
                found = true;
        } while (next_permutation(all(v)));

        cout << (found ? "Possible\n" : "Impossible\n");
    }
}
```
