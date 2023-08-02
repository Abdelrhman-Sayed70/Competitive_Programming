# Can a string be Palindrom
```cpp
bool canBePalindrom(string s){
    map<char, int>mp;
    for (auto it : s) {
        mp[it]++;
    }

    int cnt = 0;
    for (auto it : mp) {
        cnt += it.second & 1;
    }

    if ((s.size() & 1 and cnt != 1) or (s.size() % 2 == 0 and cnt != 0))
        return 0;
    
    return 1;
}
```
