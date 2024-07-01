#include <iostream>
using namespace std;

void swapNums(int& x, int& y) {
	int z = x;
	x = y;
	y = z;
}
int main()
{
	// Khoi tao mang
	int arr[5];
	// Nhap du lieu vao mang 
	for (int i = 0; i < 5; i++)
	{
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> arr[i];
	}
	// Xuat du lieu 
	for (int i : arr) {
		cout << i << "  ";
	}
	// Tim so lon nhat va chi so 
	int chiso = 0;
	int somax = 0;
	for (int i = 0; i < 5; i++)
	{
		if (somax < arr[i])
		{
			somax = arr[i];
			chiso = i;
		}
	}
	cout << "\nSo max: " << somax;
	cout << "\nSau khi swap\n";
	// Tien hanh swap 
	swapNums(arr[0], arr[chiso]);
	// Xuat du lieu 
	for (int i : arr) {
		cout << i << " ";
	}
}
