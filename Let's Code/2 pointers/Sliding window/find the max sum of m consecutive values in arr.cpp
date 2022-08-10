#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// find m consecutive values that their sum is max
	int n , k  ; cin >> n >> k ;   
	int arr[100] ,sum=0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i=0 ;i<k ;i++) {
		sum+=arr[i];
	}
	int mx = sum, ptr = 0;
	for (int i = k; i < n; i++) {
		sum -= arr[ptr];
		sum += arr[i];
		ptr++;
		mx = max(mx, sum);
	}
	cout << mx;
}