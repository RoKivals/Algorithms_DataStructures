// ������� ����������. ������� ���������� ������� �������,
// ������������ �������� ��� �������� �������������� �� ������� (������) � ������� (�����).
// ����� ������ ��������� ����������� ��� ������ �������� ����������.

#include <iostream>
using namespace std;

int Part(int *array, int left, int right) {
  int x = array[right];
  int less = left;
  for (int i(left); i < right; ++i) {
	if (array[i] <= x) {
	  swap(array[i], array[less]);
	  ++less;
	}
  }
  swap(array[less], array[right]);
  return less;
}

void QuickSort(int *array, int l, int r) {
  if (l < r) {
	int q = Part(array, l, r);
	QuickSort(array, l, q - 1);
	QuickSort(array, q + 1, r);
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
  QuickSort(array, 0, cnt_of_sym - 1); // ����������
  print(array, cnt_of_sym); // ������
  return 0;
}