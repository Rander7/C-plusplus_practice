//#pragma once
//#include<iostream>
//#include<string>
//using namespace std;
//
////类外实现模板类友元全局函数
//template<class T>
//class MyArray;
//
//template<class T>
//int show2(MyArray<T> p)			//注意这里不用写show2<>
//{
//	int n = p.getsize();
//	return n;
//}
//
//
////重载<<
//template<class T>
//class MyArray;
//template<class T>
//ostream& operator<<(ostream& cout, MyArray<T> arr)
//{
//	for (int i = 0; i < arr.getsize(); i++)
//	{
//		cout << arr[i];
//	}
//	return cout;
//}
//
//
//template<class T>
//class MyArray
//{
//	template<class T>				//一定要加
//	friend ostream& operator<<(ostream& cout, MyArray<T> arr);
//
//
//
//	//类内实现友元全局函数
//	//template<class T>				//一定不能加
//	friend int show1(MyArray<T> p)//注意表明是模板类
//	{
//		int n = p.getcapacity();
//		return n;
//	}
//
//	//类外实现友元全局函数
//	//template<class T>				//可以加可以不加
//	friend int show2<>(MyArray<T> p);//注意这里是show<>，表明是模板类的全局函数
//
//
//
//public:
//	MyArray(int capacity)
//	{
//		this->m_capacity = capacity;
//		this->m_size = 0;
//		this->address = new T[this->m_capacity];
//	}
//	~MyArray()
//	{
//		if (this->address != NULL)
//		{
//			delete[]this->address;
//			this->address = NULL;
//			this->m_capacity = 0;
//			this->m_size = 0;
//		}
//	}
//	MyArray(const MyArray& arr)//注意是MyArray，不是MyArray<T>
//	{
//		this->m_capacity = arr.m_capacity;		//在类内操作本类的一个对象时，可以通过该对象访问其私有成员
//		this->m_size = arr.m_size;				//this指针可以访问类中所有public、private、protect的成员函数和变量
//		this->address = new T[arr.m_capacity];	//this指针不能用于static函数中，因为对象未被创建
//												//this指针是const的指针，无法被修改
//		for (int i = 0; i < this->m_size; i++)
//		{
//			this->address[i] = arr.address[i];
//		}
//	}
//	T& operator[](const int seq)//注意引用，修改改的就不是拷贝后的
//	{
//		return this->address[seq];
//	}
//	MyArray& operator=(const MyArray&arr)
//	{
//		if (this->address != NULL)
//		{
//			delete[]this->address;
//			this->address = NULL;
//			this->m_capacity = 0;
//			this->m_size = 0;
//		}
//		this->m_capacity = arr.m_capacity;
//		this->m_size = arr.m_size;
//		this->address = new T[arr.m_capacity];
//		for (int i = 0; i < this->m_size; i++)
//		{
//			this->address[i] = arr.address[i];
//		}
//		return *this;
//	}
//
//
//
//	void push_back(const T& element)
//	{
//		if (this->m_size == this->m_capacity)
//		{
//			cout << "can not input cause it is full" << endl;
//			return;
//		}
//		this->address[this->m_size] = element;
//		this->m_size++;
//	}
//	void pop_back()
//	{
//		if (this->m_size == 0)
//		{
//			cout << "no elements in the myarray" << endl;
//			return;
//		}
//		this->m_size--;
//	}
//	int getcapacity()
//	{
//		return m_capacity;
//	}
//	int getsize()
//	{
//		return m_size;
//	}
//
//
//
//private:
//	T* address;
//	int m_size;
//	int m_capacity;
//
//};
