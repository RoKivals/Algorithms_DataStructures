// ���������� ���������

#include <iostream>
using namespace std;

const double factor = 1.247; // ������ ����������


void CombSort(int *array, int cnt_of_sym) {
  double step = cnt_of_sym - 1;
  while (step >= 1) {
	for (int i(0); i + step < cnt_of_sym; ++i) {
	  if (array[i] > array[(int)(i + step)]) {
		swap(array[i], array[(int)(i + step)]);
	  }
	}
	step /= factor;
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
  CombSort(array, cnt_of_sym); // ����������
  print(array, cnt_of_sym); // ������
  return 0;
}