#include <iostream>

void MergeSortImpl(int *array, int *buffer, int l, int r) {
  if (l < r) {
	int m = (l + r) / 2;
	MergeSortImpl(array, buffer, l, m);
	MergeSortImpl(array, buffer, m + 1, r);
	int k = l;
	for (int i(l), j = m + 1; i <= m || j <= r;) {
	  if (j > r || (i <= m && array[i] < array[j])) {
		buffer[k] = array[i];
		++i;
	  } else {
		buffer[k] = array[j];
		++j;
	  }
	  ++k;
	}
	for (int i(l); i <= r; ++i) {
	  array[i] = buffer[i];
	}
  }
}

void MergeSort(int *array, int cnt_of_members) {
  if (cnt_of_members != 0) {
	int *buffer = new int[cnt_of_members];
	MergeSortImpl(array, buffer, 0, cnt_of_members - 1);
  }
};

void Print(int *array, int cnt_of_members) {
  for (int i(0); i < cnt_of_members; ++i) {
	std::cout << array[i] << " ";
  }
}

int main() {
  int n;
  std::cin >> n;
  int *array = new int[n];
  for (int i(0); i < n; ++i) std::cin >> array[i];
  MergeSort(array, n);
  Print(array, n);
  return 0;
}