# Priority Queue

# `Priority Queue Max`
```cpp
priority_queue<int>pq;
pq.push(4);
pq.push(5);
pq.push(6);
cout << pq.top() << "\n"; // 6
```
#### Traversing priority queue
```cpp
priority_queue<int>pq;
pq.push(4);
pq.push(6);
pq.push(5);
while (pq.size()) {
    cout << pq.top() << "\n";
    pq.pop();
}
// 6 5 4
```

# `Priority Queue Min`
```cpp
priority_queue<int, vector<int>, greater<int>> pq;
pq.push(5);
pq.push(1);
pq.push(4);
cout << pq.top(); //1
```
