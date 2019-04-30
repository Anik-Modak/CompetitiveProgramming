/*
	* Author: Md. Nahid Hassan
	* CSE (University of Rajshahi)
	* Gmail : nahid.cseru@gmail.com
	* Date & Time: 14-12-18(1:06)
	* Algrithm: Let S(n, k) be total number of partitions of n elements into k sets.
				The value of n’th Bell Number is sum of S(n, k) for k = 1 to n.
				Value of S(n, k) can be defined recursively as, S(n+1, k) = k*S(n, k) + S(n, k-1)
	* Source code: GeeksforGeeks
*/
/*
Bell Number Triangle:
First few Bell Number: 1 1 2 5 15 52 203 ....
1
1 2   add upper 1 + 1 = 2
2 3 5 add upper 2 + 5 = 7, add upper 3 + 7 = 10, add upper 5 + 10 = 15
5 7 10 15
15 20 27 37 52
*/
#include <bits/stdc++.h>
using namespace std;
#define READ() freopen("in.txt", "rt", stdin);
using ull = unsigned long long;

ull bellNumber(ull n) {
	ull dp[n+1][n+1];

	dp[0][0] = 1;
	for(int i = 1; i <= n; i++) {
		dp[i][0] = dp[i-1][i-1];
		for(int j = 1; j <= i; j++) {
			dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
		}
	}
	return dp[n][0];
}

int main() {
	//READ();
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;

	while(testCase--) {
		ull n;
        cin >> n;
		cout << "Bell Number of " << n << ": " <<bellNumber(n) << endl;
	}

	return 0;
}
