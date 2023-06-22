# Can a string be palindrome
Can you reorder the chars in the string to make it palindrome? 

```cpp
void can_be_palindrom() {
    string s; cin >> s;
    map<char, int>mp;
    for (auto it : s) {
        mp[it]++;
    }
    int cnt = 0;
    for (auto it : mp) {
        cnt += it.second & 1;
    }
    if ((s.size() & 1 and cnt != 1) or (s.size() % 2 == 0 and cnt != 0)) { cout << "NO"; }
    else { cout << "YES"; }
}
```
