#include <iostream>
using namespace std;

void ShakerSort(int *array, int cnt_of_sym) {
  int left = 0, right = cnt_of_sym - 1;
  while (left <= right) {
	for (int i(left); i < right; ++i) {
	  if (array[i] > array[i + 1])
		swap(array[i], array[i + 1]);
	}
	--right;
	for (int i(right); i > left; --i) {
	  if (array[i - 1] > array[i])
		swap(array[i], array[i - 1]);
	}
	++left;
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
  int *array = new int[cnt_of_sym]; // Ќормальный человеческий массив, принимающий на вход переменную
  for (int x = 0; x < cnt_of_sym; x++) {
	cin >> array[x]; // считываем массив
  }
  ShakerSort(array, cnt_of_sym); // сортировка
  print(array, cnt_of_sym); // печать
  return 0;
}