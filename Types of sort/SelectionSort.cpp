// Сортировка выбором

#include <iostream>
using namespace std;

void SelectionSort(int *array, int cnt_of_sym) {
  for (int i(0); i < cnt_of_sym; ++i) {
	int minimum = array[i];
	size_t goal = i;
	for (int j(i); j < cnt_of_sym; ++j) {
	  if (array[j] < minimum) {
		minimum = array[j];
		goal = j;
	  }
	}
	swap(array[i], array[goal]);
  }
}

void print(int *array, int cnt_of_sym) {
  for (int y = 0; y < cnt_of_sym; y++) {
	cout << array[y] << " ";
  }
}

int main() {
  int cnt_of_sym; // кол-во элементов в массив
  cin >> cnt_of_sym;
  int *array = new int[cnt_of_sym];
  for (int x = 0; x < cnt_of_sym; x++) {
	cin >> array[x]; // считываем массив
  }
  SelectionSort(array, cnt_of_sym); // сортировка
  print(array, cnt_of_sym); // печать
  return 0;
}