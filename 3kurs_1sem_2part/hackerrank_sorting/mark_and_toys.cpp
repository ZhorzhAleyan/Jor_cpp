#include <iostream>
#include <vector>
using namespace std;

int maximumToys(vector<int>& prices, int k) {
	int count = 0, sum = 0;
	int n = prices.size();
	for (size_t i = 1; i < n; i++)
	{
		int key = prices[i];
		int j = i - 1;
		while (j >= 0 && prices[j] > key)
		{
			prices[j + 1] = prices[j];
			--j;
		}
		prices[j + 1] = key;
	}

	int i = 0;
	while ((sum += prices[i]) <= k) {
		count++;
		i++;
	}
	return count;
}

int main() {
	int n;
	cout << " n= "; cin >> n;
    
	vector<int> prices(n);
	for (int i = 0; i < n; i++)
		cin >> prices[i];
	int k;
	cin >> k;
	cout << maximumToys(prices, k);

	return 0;
}
