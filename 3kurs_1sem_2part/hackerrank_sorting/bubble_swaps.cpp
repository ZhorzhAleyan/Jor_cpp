#include <iostream>
#include <vector>
using namespace std;

void countSwaps(vector<int> &a) {
	int count = 0;
	for (int i = 0; i < a.size() - 1; i++)
		for (int j = i + 1; j < a.size(); j++)
			if (a[i] > a[j])
			{
				int buf = a[i];
				a[i] = a[j];
				a[j] = buf;
				count++;
			}

	cout << "Array is sorted in " << count << " swaps." << '\n';
	cout << "First Element: " << a[0] << '\n';
	cout << "Last Element: " << a[a.size() - 1] << '\n';
}

int main() {
	int n;
	cout << " n= "; cin >> n;
    
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	countSwaps(a);

	return 0;
}
