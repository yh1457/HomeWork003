#pragma once

template<typename T>
class SimpleVector
{
private:
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector();
	SimpleVector(int capacity);
	~SimpleVector();
	void push_back(const T& value);
	void pop_back();
	int size() const;
	int capacity() const;
};

template<typename T>
inline SimpleVector<T>::SimpleVector()
{
}

template<typename T>
inline SimpleVector<T>::SimpleVector(int capacity)
{
}

template<typename T>
inline SimpleVector<T>::~SimpleVector()
{
}

template<typename T>
inline void SimpleVector<T>::push_back(const T& value)
{
}

template<typename T>
inline void SimpleVector<T>::pop_back()
{
}

template<typename T>
inline int SimpleVector<T>::size() const
{
	return 0;
}

template<typename T>
inline int SimpleVector<T>::capacity() const
{
	return 0;
}
