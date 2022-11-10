#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string binar_search(int *a, int size, int needed = NULL)
{
	int low = 0;
	int high = size - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		int temp = a[mid];
		if (temp == needed)
		{
			return "Позиция данного числа: " + to_string(mid + 1) + "\n";
		}
		else if (temp > needed)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return "Число не найдено!\n";
}


int main()
{	
	int n;
	cin >> n;
	setlocale(LC_ALL, "RU");
	int a[1000];
	for (int x = 0; x < n; x++)
	{
		cin >> a[x];
	}
	cout << binar_search(a, n, 40);
	
	//vector <int> a = {1 2 3 5 10 14 23 25 40};;
	//cout << binary_search(a.begin(), a.end(), 10);
	

	return 0;
}