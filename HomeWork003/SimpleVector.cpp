#include"SimpleVector.h"
template<typename T>
SimpleVector<T>::SimpleVector()
	:SimpleVector(10)
{
}

template<typename T>
SimpleVector<T>::SimpleVector(int capacity)
	: capacity(capacity), size(0)
{
	data = new T[capacity];
}

template<typename T>
SimpleVector<T>::~SimpleVector()
{
	if (data != nullptr)
	{
		delete[] data;
		data = nullptr;
	}
}

template<typename T>
void SimpleVector<T>::push_back(const T& value)
{
	if (size >= capacity)
	{
		int newCapacity = capacity * 2;
		T* newData = new T[newCapacity];
		for (int i = 0; i < size; i++)
		{
			newData[i] = data[i];
		}
		delete[] data;
		data = newData;
		capacity = newCapacity;
	}

	data[size] = value;
	size++;
}

template<typename T>
void SimpleVector<T>::pop_back()
{
	if (size > 0)
	{
		size--;
	}
}

template<typename T>
int SimpleVector<T>::size() const
{
	return currentSize;
}

template<typename T>
int SimpleVector<T>::capacity() const
{
	return currentCapacity;
}
