/*
	* Author: Md. Nahid Hassan
	* CSE (University of Rajshahi)
	* Gmail : nahid.cseru@gmail.com
	* Date & Time: 13-12-18(10:46)
	* Algrithm: Count number of ways to partition a set into k subsets(Stirling Second Kind)
	* Source code: GeeksforGeeks
*/
#include <bits/stdc++.h>
using namespace std;
#define READ() freopen("in.txt", "rt", stdin);
using ull = unsigned long long;

//recursion solution
//TC: exponential
ull countPartion(ull n, ull k) {
	if(n == 0 || k == 0 || k > n) {
		return 0;
	}
	if(n == k || k == 1) {
		return 1;
	}
	return 2 * countPartion(n - 1, k) + countPartion(n - 1, k - 1);
}

//dp solution
//TC O(n * k) OSC O(n * k)
ull countPartionDp(ull n, ull k) {
	ull dp[n+1][k+1];
	for(int i = 0; i <= n; i++) {
		dp[i][0] = 0;
	}
	for(int i = 0; i <= k; i++) {
		dp[0][i] = 0;
	}

	//Fill the rest of entries in dp[][]
	//bottom up manner
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			if(i == j || j == 1) {
				dp[i][j] = 1;
			} else {
				dp[i][j] = j * dp[i-1][j] + dp[i-1][j-1];
			}
		}
	}
	return dp[n][k];
}

int main() {
	//READ();
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;

	while(testCase--) {
		ull n, k;
		cin >> n >> k;
		ull ans = countPartion(n, k);
		cout << "Number of ways: " << ans << endl;
		ull res = countPartionDp(n, k);
		cout << "Number of ways: " << res << endl;
	}

	return 0;
}
