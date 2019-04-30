/*
	* Author: Md. Nahid Hassan
	* CSE (University of Rajshahi)
	* Gmail : nahid.cseru@gmail.com
	* Date & Time: 14-12-18(12:52)
	* Algrithm: Eulerian Number Sequence
	* Source code: GeeksforGeeks
*/
#include <bits/stdc++.h>
using namespace std;
#define READ() freopen("in.txt", "rt", stdin);
using ull = unsigned long long;

//using recursion
//time complexity exponential
ull eulerian(ull n, ull m) {
    if(m >= n || n == 0) return 0;
    if(m == 0) return 1;
    return (n-m) * eulerian(n-1, m-1) + (m+1) * eulerian(n-1, m);
}

//using dynamic programming
//time complexity O(n * m)
ull eulerianDp(ull n, ull m) {
	ull dp[n+1][m+1];
	memset(dp, 0, sizeof(dp));

	for(int i = 1; i <= n; i++) {
		for(int j = 0; j <= m; j++) {
			if(i > j) {
				if(j == 0) dp[i][j] = 1;
				else dp[i][j] = (i - j) * dp[i-1][j-1] + (j + 1) * dp[i-1][j];
			}
		}
	}
	return dp[n][m];
}

int main() {
	//READ();
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;

	while(testCase--) {
		ull n, m;
		cin >> n >> m;

		cout << "After calculate: " << eulerian(n, m) << endl;
		cout << "After calculate: " << eulerianDp(n, m) << endl;
	}

	return 0;
}

