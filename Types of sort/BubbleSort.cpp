#include <iostream>
using namespace std;

void BubbleSort(int *array, int cnt_of_sym) {
  for (int x = 0; x < cnt_of_sym; x++) {
	for (int i = 0; i < (cnt_of_sym - x - 1); i++) {
	  if (array[i] > array[i + 1]) {
		swap(array[i], array[i + 1]);
	  }
	}
  }
}

void print(int *array, int cnt_of_sym) {
  for (int y = 0; y < cnt_of_sym; y++) {
	cout << array[y] << " ";
  }
}

int main() {
  int cnt_of_sym; // ���-�� ��������� � ������
  cin >> cnt_of_sym;
  int *array = new int[cnt_of_sym];
  for (int x = 0; x < cnt_of_sym; x++) {
	cin >> array[x]; // ��������� ������
  }
  BubbleSort(array, cnt_of_sym); // ����������
  print(array, cnt_of_sym); // ������
  return 0;
}