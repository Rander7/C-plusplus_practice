////先导测试代码
////菱形多重继承
////全部普通共有继承
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Artist
//{
//protected:
//	string name;
//	int age;
//public:
//	Artist() {}
//	Artist(string name, int age) :name(name), age(age) {}
//	Artist(const Artist& a)
//	{
//		this->name = a.name;
//		this->age = a.age;
//	}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age << endl;
//	}
//
//};
//
//class Singer :public Artist
//{
//protected:
//	int demonum;
//public:
//	Singer() {}
//	Singer(string name, int age, int num) :
//		Artist(name, age), demonum(num) {}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age 
//			<<" demonum is :"<<demonum << endl;
//	}
//
//};
//
//class Actor :public Artist
//{
//protected:
//	int movnum;
//public:
//	Actor() {}
//	Actor(string name, int age, int num) :
//		Artist(name, age), movnum(num) {}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age
//			<< " movnum is :" << movnum << endl;
//	}
//
//};
//
//class SuperStar :public Actor, public Singer
//{
//protected:
//	int income;
//public:
//	SuperStar() {}
//	SuperStar(string name1, int age1, int mnum, string name2, int age2, int dnum, int income) :
//		Actor(name1, age1, mnum), Singer(name2, age2, dnum), income(income) {}
//	void display()
//	{
//		cout << Artist::name << endl;				//必须指定作用域，不然会不明确
//		cout << Artist::age << endl;
//		cout << "-------------------------" << endl;
//		cout << Actor::name << endl;
//		cout << Actor::age << endl;
//		cout << "-------------------------" << endl;
//		cout << Singer::name << endl;
//		cout << Singer::age << endl;
//		cout << "-------------------------" << endl;
//		cout << income << endl;
//	}
//};
//
//
//
//int main()
//{
//	SuperStar ss("actor", 18, 2, "singer", 19, 3, 5000);
//	ss.display();
//	ss.Actor::display();			//调用派生类的父类display函数
//	ss.Actor::Artist::display();	//调用派生类父类的父类的display函数
//	ss.Singer::display();
//	ss.Singer::Artist::display();	//发现两个父类中的父类是不同的赋值
//	cout << endl;
//	ss.Artist::display();			//直接访问子类的父类的父类，其值是最早构造的父类的构造使用的值
//									//artist最早在actor中被调用构造,其值是actor构造时的值
//	
//	system("pause");
//	return 0;
//}




//
////菱形多重继承
////全部都采用虚继承
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Artist
//{
//protected:
//	string name;
//	int age;
//public:
//	Artist() {}
//	Artist(string name, int age) :name(name), age(age) {}
//	Artist(const Artist& a)
//	{
//		this->name = a.name;
//		this->age = a.age;
//	}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age << endl;
//	}
//
//};
//
//class Singer :virtual public Artist
//{
//protected:
//	int demonum;
//public:
//	Singer() {}
//	Singer(string name, int age, int num) :
//		Artist(name, age), demonum(num) {}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age
//			<< " demonum is :" << demonum << endl;
//	}
//
//};
//
//class Actor :virtual public Artist
//{
//protected:
//	int movnum;
//public:
//	Actor() {}
//	Actor(string name, int age, int num) :
//		Artist(name, age), movnum(num) {}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age
//			<< " movnum is :" << movnum << endl;
//	}
//
//};
//
//class SuperStar :virtual public Actor,virtual public Singer
//{
//protected:
//	int income;
//public:
//	SuperStar() {}
//
//	SuperStar(string name0,int age0,string name1, int age1, int mnum, string name2, int age2, int dnum, int income) :
//		Artist(name0,age0),Actor(name1, age1, mnum), Singer(name2, age2, dnum), income(income) {}
//	//构造时候自上而下赋值，将所有继承来的类全部赋值构造
//	void display()
//	{
//		cout << name << endl;						//这时候不会有二义性，因为继承来只有一份
//		cout << Artist::name << endl;
//		cout << Actor::name << endl;
//		cout << Singer::name << endl;				//这时候所有name都是artist，也就是子类最开始给artist赋的值
//		cout << age << endl;						//同理age也是一样
//		cout << income << endl;
//		cout << movnum << endl;
//		cout << demonum << endl;
//	}
//};
//
//
//
//int main()
//{
//	SuperStar ss("artist",10,"actor", 18, 2, "singer", 19, 3, 5000);
//	ss.display();
//	ss.Actor::display();			//调用派生类的父类display函数
//	ss.Actor::Artist::display();	//调用派生类父类的父类的display函数
//	ss.Singer::display();
//	ss.Singer::Artist::display();	
//	cout << endl;
//	ss.Artist::display();			//发现全是子类初始赋给基类的值
//	system("pause");
//	return 0;
//}




////菱形多重继承
////父类继承基类时候采用虚继承，子类继承直接父类的时候不采用
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Artist
//{
//protected:
//	string name;
//	int age;
//public:
//	Artist() {}
//	Artist(string name, int age) :name(name), age(age) {}
//	Artist(const Artist& a)
//	{
//		this->name = a.name;
//		this->age = a.age;
//	}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age << endl;
//	}
//
//};
//
//class Singer :virtual public Artist
//{
//protected:
//	int demonum;
//public:
//	Singer() {}
//	Singer(string name, int age, int num) :
//		Artist(name, age), demonum(num) {}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age
//			<< " demonum is :" << demonum << endl;
//	}
//
//};
//
//class Actor :virtual public Artist
//{
//protected:
//	int movnum;
//public:
//	Actor() {}
//	Actor(string name, int age, int num) :
//		Artist(name, age), movnum(num) {}
//
//	void display()
//	{
//		cout << "name is: " << name << " and age is : " << age
//			<< " movnum is :" << movnum << endl;
//	}
//
//};
//
//class SuperStar :public Actor, public Singer
//{
//protected:
//	int income;
//public:
//	SuperStar() {}
//
//	SuperStar(string name0, int age0, string name1, int age1, int mnum, string name2, int age2, int dnum, int income) :
//		Actor(name1, age1, mnum), Singer(name2, age2, dnum), income(income), Artist(name0, age0) {}
//	//构造时候自上而下赋值，将所有继承来的类全部赋值构造
//	void display()
//	{
//		cout << name << endl;						//这时候不会有二义性，因为继承来只有一份
//		cout << Artist::name << endl;
//		cout << Actor::name << endl;
//		cout << Singer::name << endl;				//这时候所有name都是artist，也就是子类最开始给artist赋的值
//		cout << age << endl;						//同理age也是一样
//		cout << income << endl;
//		cout << movnum << endl;
//		cout << demonum << endl;
//	}
//};
//
//
//
//int main()
//{
//	SuperStar ss("artist", 10, "actor", 18, 2, "singer", 19, 3, 5000);
//	ss.display();
//	ss.Actor::display();			//调用派生类的父类display函数
//	ss.Actor::Artist::display();	//调用派生类父类的父类的display函数
//	ss.Singer::display();
//	ss.Singer::Artist::display();
//	cout << endl;
//	ss.Artist::display();			//发现全是子类初始赋给基类的值
//
//	system("pause");
//	return 0;
//}

