class Solution {
public:
bool isValid(string s) {
	stack<char> sta = {};
	cout << "in";
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			sta.push(s[i]);
		if (sta.size() == 0) {
			sta.push(s[i]);
			continue;
		}
		else if (s[i] == ']') {
			if (sta.top() == '[') sta.pop();
			else sta.push(s[i]);
		}
		else if (s[i] == ')') {
			if (sta.top() == '(') sta.pop();
			else sta.push(s[i]);
		}
		else if (s[i] == '}') {
			if (sta.top() == '{') sta.pop();
			else sta.push(s[i]);
		}
	}
	return sta.size() == 0;
}
};