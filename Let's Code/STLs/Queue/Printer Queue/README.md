# Printer Queue
### [Printer Queue | VJ](https://vjudge.net/problem/UVA-12100)
### [Printer | Codeforces](https://codeforces.com/group/T3p02rhrmb/contest/339641/problem/I)
### [Printer Queue | UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3252)

![image](https://github.com/Abdelrhman-Sayed70/Competitive_Programming/assets/99830416/c167a094-d91e-4d4a-9e33-f5bfdfeb7fd4)

## Fucken solution
```cpp
void doIt() {
    int n, m, cnt = 0; 
    cin >> n >> m; 
    vector<int>freq(11, 0);
    queue<int>q;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        q.push(p);
        freq[p]++;
    }
    while (q.size()) {
        int p = q.front();
        q.pop();
        bool flag = false;
        for (int i = 9; i > p; i--) {
            if (freq[i])
                flag = true;
        }
        if (flag) {
            q.push(p);
            m == 0 ? m = q.size() - 1 : m--;
        }
        else {
            cnt++;
            if (m == 0) { break; }
            freq[p]--;
            m--;
        }
    }
    cout << cnt << "\n";
} 
```
