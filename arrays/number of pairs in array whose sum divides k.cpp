#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, k;
	cin >> n >> k;
	vector<int> cnt(k);
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		++cnt[x % k];
	}
	
	int ans = cnt[0] / 2;
	if (k % 2 == 0) ans += cnt[k / 2] / 2;
	for (int i = 1; i < (k + 1) / 2; ++i) {
		int j = k - i;
		ans += min(cnt[i], cnt[j]);
	}
	
	cout << ans << endl;
	
	return 0;
}