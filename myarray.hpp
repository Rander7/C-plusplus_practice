//#pragma once
//#include<iostream>
//#include<string>
//using namespace std;
//
////����ʵ��ģ������Ԫȫ�ֺ���
//template<class T>
//class MyArray;
//
//template<class T>
//int show2(MyArray<T> p)			//ע�����ﲻ��дshow2<>
//{
//	int n = p.getsize();
//	return n;
//}
//
//
////����<<
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
//	template<class T>				//һ��Ҫ��
//	friend ostream& operator<<(ostream& cout, MyArray<T> arr);
//
//
//
//	//����ʵ����Ԫȫ�ֺ���
//	//template<class T>				//һ�����ܼ�
//	friend int show1(MyArray<T> p)//ע�������ģ����
//	{
//		int n = p.getcapacity();
//		return n;
//	}
//
//	//����ʵ����Ԫȫ�ֺ���
//	//template<class T>				//���Լӿ��Բ���
//	friend int show2<>(MyArray<T> p);//ע��������show<>��������ģ�����ȫ�ֺ���
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
//	MyArray(const MyArray& arr)//ע����MyArray������MyArray<T>
//	{
//		this->m_capacity = arr.m_capacity;		//�����ڲ��������һ������ʱ������ͨ���ö��������˽�г�Ա
//		this->m_size = arr.m_size;				//thisָ����Է�����������public��private��protect�ĳ�Ա�����ͱ���
//		this->address = new T[arr.m_capacity];	//thisָ�벻������static�����У���Ϊ����δ������
//												//thisָ����const��ָ�룬�޷����޸�
//		for (int i = 0; i < this->m_size; i++)
//		{
//			this->address[i] = arr.address[i];
//		}
//	}
//	T& operator[](const int seq)//ע�����ã��޸ĸĵľͲ��ǿ������
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
