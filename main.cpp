#include<iostream>
#include<vector>
#include<cassert>

using namespace std;


void main() {
	vector<float> prices{ 2.5, 4.25, 3.0, 10.0 };


	vector<int> items{ 1, 1, 0, 3 };

	assert(size(prices) == size(items));

	float res = 0;

	for (int i = 0; i < size(prices); i++) {
		res += prices[items[i]];
	}

	cout << "The total cost of the products: " << res;
	
}