////�ȵ����Դ���
////���ζ��ؼ̳�
////ȫ����ͨ���м̳�
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
//		cout << Artist::name << endl;				//����ָ�������򣬲�Ȼ�᲻��ȷ
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
//	ss.Actor::display();			//����������ĸ���display����
//	ss.Actor::Artist::display();	//���������ุ��ĸ����display����
//	ss.Singer::display();
//	ss.Singer::Artist::display();	//�������������еĸ����ǲ�ͬ�ĸ�ֵ
//	cout << endl;
//	ss.Artist::display();			//ֱ�ӷ�������ĸ���ĸ��࣬��ֵ�����繹��ĸ���Ĺ���ʹ�õ�ֵ
//									//artist������actor�б����ù���,��ֵ��actor����ʱ��ֵ
//	
//	system("pause");
//	return 0;
//}




//
////���ζ��ؼ̳�
////ȫ����������̳�
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
//	//����ʱ�����϶��¸�ֵ�������м̳�������ȫ����ֵ����
//	void display()
//	{
//		cout << name << endl;						//��ʱ�򲻻��ж����ԣ���Ϊ�̳���ֻ��һ��
//		cout << Artist::name << endl;
//		cout << Actor::name << endl;
//		cout << Singer::name << endl;				//��ʱ������name����artist��Ҳ���������ʼ��artist����ֵ
//		cout << age << endl;						//ͬ��ageҲ��һ��
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
//	ss.Actor::display();			//����������ĸ���display����
//	ss.Actor::Artist::display();	//���������ุ��ĸ����display����
//	ss.Singer::display();
//	ss.Singer::Artist::display();	
//	cout << endl;
//	ss.Artist::display();			//����ȫ�������ʼ���������ֵ
//	system("pause");
//	return 0;
//}




////���ζ��ؼ̳�
////����̳л���ʱ�������̳У�����̳�ֱ�Ӹ����ʱ�򲻲���
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
//	//����ʱ�����϶��¸�ֵ�������м̳�������ȫ����ֵ����
//	void display()
//	{
//		cout << name << endl;						//��ʱ�򲻻��ж����ԣ���Ϊ�̳���ֻ��һ��
//		cout << Artist::name << endl;
//		cout << Actor::name << endl;
//		cout << Singer::name << endl;				//��ʱ������name����artist��Ҳ���������ʼ��artist����ֵ
//		cout << age << endl;						//ͬ��ageҲ��һ��
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
//	ss.Actor::display();			//����������ĸ���display����
//	ss.Actor::Artist::display();	//���������ุ��ĸ����display����
//	ss.Singer::display();
//	ss.Singer::Artist::display();
//	cout << endl;
//	ss.Artist::display();			//����ȫ�������ʼ���������ֵ
//
//	system("pause");
//	return 0;
//}

