#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &vec, int l, int r)
{
	int j = l;
	for (int i = l; i < r; ++i)
	{
		if (vec[i] < vec[r]) {
			swap(vec[i], vec[j]);
			++j;
		}
	}
	swap(vec[j], vec[r]);
	return j;
}

void quick_sort(vector<int> &vec, int l, int r)
{
	if (l < r) {
		int mid = partition(vec, l, r);
		quick_sort(vec, l, mid - 1);
		quick_sort(vec, mid + 1, r);
	}
}

int main() {
	vector<int> vec{2, 6, 7, 4, 3, 5, 8, 1};
	quick_sort(vec, 0, vec.size() - 1);
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << " ";
	}
	return 0;
}
