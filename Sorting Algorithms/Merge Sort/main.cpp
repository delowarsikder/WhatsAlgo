#include <iostream>
#include "merge_sort.h"

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	merge_sort(0, n - 1, a);
	for (int i = 0; i < n; i++)
		std::cout << a[i] << " ";
	return 0;
}