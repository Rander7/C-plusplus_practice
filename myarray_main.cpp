//#pragma once
//#include "myarray.hpp"
//
//
//
//void printintarray(MyArray<int>& arr)
//{
//	for(int i = 0; i < arr.getsize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//
//
//
//
//void test1()
//{
//	MyArray<int>arr1(5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr1.push_back(i);
//		
//	}
//	printintarray(arr1);
//	cout << arr1.getcapacity() << endl;
//	cout << arr1.getsize() << endl;
//
//	MyArray<int>arr2(arr1);
//	printintarray(arr2);
//	cout<<arr2.getcapacity() << endl;
//	cout << arr2.getsize() << endl;
//	arr2.pop_back();
//	cout<<arr2.getcapacity() << endl;
//	cout<<arr2.getsize() << endl;
//
//	//MyArray<int>arr3(100);
//	//arr3 = arr1;
//
//
//
//}
//
//class Person
//{
//public:
//
//
//	Person() {}
//	Person(string name, int age) :m_name(name), m_age(age) {}
//
//	string m_name;
//	int m_age;
//
//};
//
//void printpersonarray(MyArray<Person>& arr)
//{
//	for (int i = 0; i < arr.getsize(); i++)
//	{
//		cout << "name: " << arr[i].m_name << "age: " << arr[i].m_age << endl;
//	}
//}
//
//
//void test2()
//{
//	MyArray<Person> arr(10);
//	Person p1("sb1", 12);
//	Person p2("sb2", 13);
//	Person p3("sb3", 14);
//	Person p4("sb4", 15);
//	Person p5("sb5", 16);
//	Person p6("sb6", 17);
//	arr.push_back(p1);
//	arr.push_back(p2);
//	arr.push_back(p3);
//	arr.push_back(p4);
//	arr.push_back(p5);
//	arr.push_back(p6);
//
//	printpersonarray(arr);
//	cout << "capa: " << arr.getcapacity() << endl;
//	cout << "size: " << arr.getsize() << endl;
//}
//
//void test3()
//{
//	MyArray<int>s(5);
//	s.push_back(2);
//	s.push_back(3);
//	cout << show1(s);
//	cout << endl;
//	cout << show2(s);
//
//}
//
//void test4()
//{
//	MyArray<int>arr1(5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr1.push_back(i);
//
//	}
//	printintarray(arr1);
//	cout << "===========" << endl;
//	cout << arr1;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//
//	system("pause");
//	return 0;
//}