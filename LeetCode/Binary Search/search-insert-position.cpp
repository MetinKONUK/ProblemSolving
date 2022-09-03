#include<iostream>
#include<vector>

using namespace std;


int solve(vector<int>& nums, int key) {
	int n = nums.size(), low = 0, high = n - 1, mid = low + (high - low) / 2;
	while (low <= high) {
		if (nums[mid] == key)
			return mid;
		else if (nums[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
		mid = low + (high - low) / 2;
	}
	return low;
}


int main() {
	vector<int> nums = {1, 4, 6, 7, 8, 10, 12};

	cout << solve(nums, 0);
	return 0;
}
