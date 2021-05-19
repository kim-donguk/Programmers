#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<string, int> ans;
    string number = "";

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            number += s[i];
        }
        if (s[i] == ',') {
            ans[number] += 1;
            number = "";
        }
        if (i == s.size() - 1) {
            ans[number] += 1;
        }
    }

    answer.resize(ans.size());
    for (auto it = ans.begin(); it != ans.end(); it++) {
        answer[it->second - 1] = stoi(it->first);
    }

    reverse(answer.begin(), answer.end());

    return answer;
}