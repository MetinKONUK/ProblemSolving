#include<iostream>
#include<vector>

using namespace std;


int solve(vector<int>& nums) {
	int sum = 0;
	int n = 0;
	for (int i = 0; i < nums.size(); ++i) {
		sum += nums[i];
		++n;
	}
	return n * (n + 1) / 2 - sum;
}


int main() {
	vector<int> nums = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };

	cout << solve(nums);
	return 0;
}
