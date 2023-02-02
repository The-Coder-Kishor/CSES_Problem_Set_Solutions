#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, total=0, ans=INT_MAX;
	cin >> n;
	long long int arr[n];
	for(long long int i = 0; i < n; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	for(long long int i = 0; i < 1<<n; i++) {
		long long int s = 0;
		for(long long int j = 0; j < n; j++) {
			if(i & 1<<j) s += arr[j];
		}
		long long int curr = abs((total-s)-s);
		ans = min(ans, curr);
	}
	cout << ans;
	return 0;
}