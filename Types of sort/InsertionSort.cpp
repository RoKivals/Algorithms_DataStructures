#include <iostream>
using namespace std;

void InsertionSort(int *array, int cnt_of_sym) {
  for (int i(0); i < cnt_of_sym; ++i) {
	int temp = array[i];
	size_t j = i;
	while (j > 0 and array[j - 1] > temp) {
	  array[j] = array[j - 1];
	  --j;
	}
	array[j] = temp;
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
  InsertionSort(array, cnt_of_sym); // сортировка
  print(array, cnt_of_sym); // печать
  return 0;
}