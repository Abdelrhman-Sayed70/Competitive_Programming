# Dequeu

## `Push front & back`
```cpp
deque<int>dq;
dq.push_back(1);
dq.push_back(2);
dq.push_front(10);
for (int i = 0; i < dq.size(); i++) {
	cout << dq[i] << " ";
}
// 10 1 2
```

## `Pop front & back`
```cpp
deque<int>dq = { 1,2,3,4,5 };
dq.pop_back();
dq.pop_front();
for (int i = 0; i < dq.size(); i++) {
	cout << dq[i] << " ";
}
// 2 3 4
```
