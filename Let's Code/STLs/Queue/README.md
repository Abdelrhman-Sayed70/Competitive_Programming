# Queue `FIFO`
## `Push, Pop & Front`
```cpp
queue<int>q;
q.push(5);
q.push(6);
q.push(7);
// || 5 6 7
q.pop();
// || 6 7
cout << q.front(); // 6
```
## `Printing Queue`
```cpp
queue<int>q;
q.push(5);
q.push(6);
q.push(7);

while (q.size()) {
    cout << q.front() << "\n";
    q.pop();
}
// 5 6 7

```
