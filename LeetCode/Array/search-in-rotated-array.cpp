#include <iostream>
#include <vector>
using namespace std;


int findPivot(vector<int> arr) {
	int n = arr.size();
	int low = 0, high = n - 1, mid = (low + high) / 2;
	while (low < high) {
		if (mid < high && arr[mid] > arr[mid + 1]) return mid;
		if (mid > low && arr[mid] < arr[mid - 1]) return mid - 1;
		if (arr[low] >= arr[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
		mid = (low + high) / 2;
	}
	//if (low == high) return low;
	return -1;
}


int binarySearch(vector<int> arr, int key, int low, int high) {
	int n = arr.size();
	int mid = (low + high) / 2;
	while (low <= high) {
		if (arr[mid] == key) return mid;
		else if (arr[mid] > key) high = mid - 1;
		else low = mid + 1;
		mid = (low + high) / 2;
	}
	return -1;
}

int main() {
	
	vector<int> arr = {1, 3};
	int key = 0;
	int pivot = findPivot(arr);
	int n = arr.size();
	int low = 0, high = n - 1;
	if (pivot == -1) {
		low = 0;
		high = n - 1;
	}
	else if (arr[0] <= key && key <= arr[pivot]) {
		low = 0;
		high = pivot;
	}
	else if (arr[0] > key) {
		low = pivot + 1;
		high = n - 1;
	}
	int result = binarySearch(arr, key, low, high);
	cout << result;

	return 0;
}
