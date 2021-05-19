// //피보나치 수열에서 1이 나타난 횟수와 0이 나타난 횟수 구하기
// //https://www.acmicpc.net/problem/1003
//
//#include <iostream>
//using namespace std;
//int d[41][2] = { {1,0},{0,1} };
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		for (int i = 2; i <= n; i++) {
//			d[i][0] = d[i - 1][0] + d[i - 2][0];
//			d[i][1] = d[i - 1][1] + d[i - 2][1];
//		}
//		cout << d[n][0] << ' ' << d[n][1] << '\n';
//	}
//	return 0;
//}