#include "DynamicArray.h"
#include <iostream>
using namespace std;

void bubsort() 
{
	int c, b, temp;
	int a[] = { 2,1,5,4,3,44,10 };

	for (c = 0; c < 4; c++)
	{
		for (b = c + 1; b < 4; b++)
		{
			if (a[b] < a[c])
			{
				 temp = a[c];
				a[c] = a[b];
				a[b] = temp;
			}
		}
	}
	cout << "Sorted Element List ...\n";
	for (c = 0; c < 4; c++)
		cout << a[c] << "\t";

}
template <typename T>
void bubsortT(T arr[])
{
	int c, b;
	T temp;

	for (c = 0; c < 4; c++)
	{
		for (b = c + 1; b < 4; b++)
		{
			if (arr[b] < arr[c])
			{
				temp = arr[c];
				arr[c] = arr[b];
				arr[b] = temp;
			}
		}
	}
	cout << "Sorted Element List ...\n";
	for (c = 0; c < 4; c++)
		cout << arr[c] << "\t";

}
void insertSort() 
{
	//key = 0 j= 0
	int firstValue = 0, valueHolder = 0;
	int a[] = { 1,5,3,4};//collection = []
	for (int i = 1; i < 4 ; i++)//for each index in collection
	{
		//set key to be the value at the curretn index
		valueHolder = a[i];
		//set j to be the previews index
		firstValue = i - 1 ;
		
		//start while loop
		while (firstValue >= 0 && a[firstValue] > valueHolder)//While j is greater than or equal to 0 value at j is greater than key
		{
			a[firstValue + 1] = a[firstValue];	//set value at the index of j+1 to the value at index of j 
			firstValue--;//decrement j
		}//end while loop
		a[firstValue + 1] = valueHolder ;//set collection at the index of j + 1 to be the key 
	}
	for (valueHolder = 0; valueHolder < 4; valueHolder++)
		cout << a[valueHolder] << endl;
}
template <typename T>
void main()
{
	DynamicArray* m_dynamicArray =  DynamicArray();
	
	float arrFloat[] = { 1.2f, 4.9f, 9.9f,-12.9f };

}