#include <iostream>

void ShellSort(int *array, int cnt_of_members) {
  for (int step(cnt_of_members / 2); step > 0; step /= 2) {
	for (int i = step; i < cnt_of_members; ++i) {
	  for (int j(i - step); j >= 0 && array[j] > array[j + step]; j-=step) {
		std::swap(array[j], array[j + step]);
	  }
	}
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
  ShellSort(array, n);
  Print(array, n);
  return 0;
}