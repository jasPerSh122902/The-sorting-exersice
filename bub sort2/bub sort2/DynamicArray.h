#pragma once
template <typename T>
class DynamicArray
{
private:
	T** m_items;
	int m_length;

public:
	DynamicArray();
	~DynamicArray();
	void addItem(T *item);
	bool removeItem(T *item);
	void sortItem();
	T* getLength() { return length() };
	T* getItem(m_items) { return m_items };


};

template<typename T>
inline void DynamicArray<T>::addItem(T* item)
{
	//Create a new array with a size one greater than our old array
	T** appendedArray = new T* [m_length + 1];
	//Copy the values from the old array to the new array
	for (int i = 0; i < m_length; i++)
		appendedArray[i] = m_items[i];

	//Set the last value in the new array to be the actor we want to add
	appendedArray[m_length] = item;
	//Set old array to hold the values of the new array
	m_items = appendedArray;
	m_length++;
}

template<typename T>
inline bool DynamicArray<T>::removeItem(T* item)
{
	//Check to see if the actor was null
	if (!item || m_length <= 0)
		return false;

	bool actorRemoved = false;
	//Create a new array with a size one less than our old array
	T** newArray = new T* [m_length - 1];
	//Create variable to access tempArray index
	int j = 0;
	//Copy values from the old array to the new array
	for (int i = 0; i < m_length; i++)
	{
		if (item != m_items[i])
		{
			newArray[j] = m_items[i];
			j++;
		}
		else
			actorRemoved = true;
	}
	//Set the old array to the new array
	if (actorRemoved)
	{
		m_items = newArray;
		m_length--;
	}
	//Return whether or not the removal was successful
	return actorRemoved;
}

template<typename T>
inline void DynamicArray<T>::sortItem()
{
	//key = 0 j= 0
	int firstValue = 0, valueHolder = 0;
	for (int i = 1; i < 4; i++)//for each index in collection
	{
		//set key to be the value at the curretn index
		valueHolder = T[i];
		//set j to be the previews index
		firstValue = i - 1;

		//start while loop
		while (firstValue >= 0 && T[firstValue] > valueHolder)//While j is greater than or equal to 0 value at j is greater than key
		{
			T[firstValue + 1] = T[firstValue];//set value at the index of j+1 to the value at index of j 
			firstValue--;//decrement j
		}//end while loop
		T[firstValue + 1] = valueHolder;//set collection at the index of j + 1 to be the key 
	}
	for (valueHolder = 0; valueHolder < 4; valueHolder++)
		cout << T[valueHolder] << endl;
}