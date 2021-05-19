#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	// 1부터 4까지 저장할 벡터 선언
	// 배열도 가능!
	vector<char> v;

	v.push_back('A');
	v.push_back('B');
	v.push_back('C');
	v.push_back('D');



	// next_permutation을 통해서 다음 순열 구하기
	do {

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}

		cout << '\n';

	} while (next_permutation(v.begin(), v.end()));

	return 0;

}