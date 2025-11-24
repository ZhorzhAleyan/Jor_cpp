#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for(int j = low; j < high; j++)
		if (arr[j] < pivot)
		{
			i++;
			int buf = arr[i];
			arr[i] = arr[j];
			arr[j] = buf;
		}
	int buf = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = buf;
	return i + 1;
}
void quicksort(vector<int>& arr, int low, int high) {
	if (low < high)
	{
		 int p = partition(arr, low, high);
		quicksort(arr, low, p - 1);
		quicksort(arr, p + 1, high);
	}
}

int main() {
	int size;
	cin >> size;
	vector<int> arr(size);
	for (int i = 0; i < size; i++)
		cin >> arr[i];

	quicksort(arr, 0, arr.size() - 1);

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	return 0;
}
