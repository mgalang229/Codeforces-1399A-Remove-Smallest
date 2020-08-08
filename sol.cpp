#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a[50], n;
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		bool ok=1;
		sort(a, a+n);
		for(int i=0; i<n-1; ++i)
			if(abs(a[i]-a[i+1])>1)
				ok=0;
		cout << (ok ? "YES" : "NO") << "\n";
	}
}
