#include <iostream>
using namespace std;

int find_smallest_index(int *arr, int size) // Нахождение наименьшего индекса
{
	int smallest = INT_MAX;
	int smal_ind = 0;
	for (int x = 0; x < size; x++)
	{
		if (arr[x] < smallest)
		{
			smallest = arr[x];
			smal_ind = x;
		}
	}
	return smal_ind;
}

int find_highest_index(int *arr, int size) // Нахождение наибольшего индекса
{
	int highest = INT_MIN;
	int high_ind = 0;
	for (int x = 0; x < size; x++)
	{
		if (arr[x] < highest)
		{
			highest = arr[x];
			high_ind = x;
		}
	}
	return high_ind;
}

void sort_array(int *old_arr, int *new_arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		int t = find_smallest_index(old_arr, len);
		new_arr[i] = old_arr[t];
		old_arr[t] = INT_MAX; // null
	}
}


int main()
{	int cnt_of_sym;
	cin >> cnt_of_sym;
	int *array_orig = new int [cnt_of_sym];
	int *array_new = new int [cnt_of_sym];
	for (int x = 0; x < cnt_of_sym; x++)
	{
		cin >> array_orig[x];
		array_new[x] = 0;
	}

	sort_array(array_orig, array_new, cnt_of_sym);

	for (int x = 0; x < cnt_of_sym; x++)
	{
		cout << array_new[x];
	}

	delete[] array_orig;
	
	return 0;
}