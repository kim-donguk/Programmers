#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	// 1���� 4���� ������ ���� ����
	// �迭�� ����!
	vector<char> v;

	v.push_back('A');
	v.push_back('B');
	v.push_back('C');
	v.push_back('D');



	// next_permutation�� ���ؼ� ���� ���� ���ϱ�
	do {

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}

		cout << '\n';

	} while (next_permutation(v.begin(), v.end()));

	return 0;

}