////矩阵
//#include<iostream>
//using namespace std;
//#define maxn 100
//
//
//class matrix
//{
//	int d1, d2;
//	int ma[maxn][maxn];
//
//public:
//	matrix();//注意构造函数类外定义不要加大括号
//	void init_matrix();
//	void mul_matrix();
//	void trans_matrix();
//	void var_martrix();
//	void print_matrix();
//
//};
//
//matrix::matrix()
//{
//	d1 = 0;
//	d2 = 0;
//}
//
//void matrix::init_matrix()
//{
//	cout << "input two denmesion" << endl;
//	cin >> d1 >> d2;
//	cout << "input" << endl;
//	for (int i = 0; i < d1; i++)
//	{
//		for (int j = 0; j < d2; j++)
//		{
//			cin >> ma[i][j];
//		}
//	}
//
//}
//
//void matrix::trans_matrix()
//{
//	for (int j = 0; j< d1; j++)
//	{
//		for (int i = 0; i < d2; i++)
//		{
//			cout << ma[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void matrix::var_martrix()
//{
//	char flag = 'y';
//	int arc;
//	while (flag == 'y')
//	{
//		cout << "input the arc:(90/180/270)";
//		cin >> arc;
//		switch (arc)
//		{
//		case 90://别老是把90和270搞反掉
//			for (int j = 0; j < d2; j++)
//			{
//				for (int i = d1 - 1; i >= 0; i--)
//				{
//					cout << ma[i][j] << " ";
//				}
//				cout << endl;
//			}
//			break;
//		case 180:
//			for (int i = d1 - 1; i >= 0; i--)
//			{
//				for (int j = d2 - 1; j >=0; j--)
//				{
//					cout << ma[i][j] << " ";
//				}
//				cout << endl;
//			}
//			break;
//		case 270:
//			for (int j = d2 - 1; j >= 0; j--)
//			{
//				for (int i = 0; i < d1; i++)
//				{
//					cout << ma[i][j] << " ";
//				}
//				cout << endl;
//			}
//
//			break;
//		default:
//			break;
//		}
//
//		cout << "do you want to continue?" << endl;
//		cin >> flag;
//	}
//
//}
//
//void matrix::print_matrix()
//{
//	for (int i = 0; i < d1; i++)
//	{
//		for (int j = 0; j < d2; j++)
//		{
//			cout << ma[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void matrix::mul_matrix()
//{
//	cout << "input the number" << endl;
//	int s;
//	cin >> s;
//
//	for (int i = 0; i < d1; i++)
//	{
//		for (int j = 0; j < d2; j++)
//		{
//			ma[i][j] = ma[i][j] * s;
//		}
//	}
//
//
//}
//
//
//int main()
//{
//	matrix m;
//	m.init_matrix();
//	m.print_matrix();
//	m.mul_matrix();
//	m.print_matrix();
//	m.trans_matrix();
//	m.var_martrix();
//
//
//	return 0;
//}



//
//
//
////歌手信息系统
//#include<iostream>
//#include<cstring>
//#include<string>
//#define maxn 10
//using namespace std;
//
//class singer
//{
//private:
//	string m_name, m_song, m_gender;
//	int m_age;
//	
//public:
//	singer()
//	{
//		cout << "singer构造函数调用" << endl;
//	}
//	~singer()
//	{
//		cout << "singer析构函数调用" << endl;
//	}
//	void init_singer();
//	void modify_singer();
//	void print_singer();
//
//};
//
//void singer::init_singer()
//{
//	cout << "输入歌手的姓名年龄性别歌曲" << endl;
//	cin >> m_name;
//	cin.get();
//	cin >> m_age;
//	cin >> m_gender;
//	cin.get();
//	cin >> m_song;
//
//	
//}
//
//void singer::modify_singer()
//{
//	cout << "你想更改哪个xuan" << endl;
//	int k = 0;
//	cin >> k;
//	switch (k)
//	{
//	case 1:
//		cin >> m_name;
//		break;
//	case 2:
//		cin >> m_age;
//		break;
//	case 3:
//		cin >> m_gender;
//		break;
//	case 4:
//		cin >> m_song;
//		break;
//	default:
//		break;
//	}
//}
//
//void singer::print_singer()
//{
//	cout << m_name << ' ' << m_age << ' ' << m_gender << ' ' << m_song;
//}
//
//
//
//
//int main()
//{
//	cout << "input number" << endl;
//	int number;
//	//cin >> number;
//	singer s[maxn];//对象数组,和数组一样，注意实现开辟的空间固定
//	char flag1 = 'y';
//	char flag2 = 'y';
//	int i = 0;
//	while (flag1 == 'y')
//	{
//		cout << "输入歌手数量" << endl;
//		cin >> number;
//		for (int i=0; i < number; i++)
//		{
//			s[i].init_singer();
//		}
//		cout << "歌手信息如下" << endl;
//		for (int i = 0; i < number; i++)
//		{
//			s[i].print_singer();
//		}
//		cout << "需要修改歌手信息吗" << endl;
//		cin >> flag2;
//		while (flag2 == 'y')
//		{
//			cout << "需要修改哪个" << endl;
//			int j = 0;
//			cin >> j;
//			s[j - 1].modify_singer();
//			s[j - 1].print_singer();
//			cout << "需要继续修改吗" << endl;
//			cin >> flag2;
//		}
//		cout << "需要继续输入歌手信息吗" << endl;
//		cin >> flag1;
//
//	}
//
//	
//	return 0;
//}


//
//
////学生表
////学生有学号，姓名，性别，年龄，课程，成绩
////课程有课程号，课程名字
////成绩有成绩
//
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//
////class course;
////class score;//这里向前引用失效
//
//class course
//{
//public:
//	string m_course_name;
//	int m_cno;
//	course() {}
//	course(string name, int cno) :m_course_name(name), m_cno(cno) {}//有参构造
//	course(course& tempcourse)//拷贝构造
//	{
//		m_course_name = tempcourse.m_course_name;
//		m_cno = tempcourse.m_cno;
//	}
//};
//
//class score
//{
//public:
//	int m_grade;
//	score() {}
//	score(int score) :m_grade(score) {}
//	score(score& tempscore)
//	{
//		m_grade = tempscore.m_grade;
//	}
//};
//
//
//class student
//{
//private:
//	int m_sno;
//	string m_name;
//	string m_gender;
//	int m_age;
//	course m_course;//学生有一个成员是course类
//	score m_score;//一个score类
//
//public:
//	student() {}
//	~student() {}
//	//这里学生构造时候把学生中的类构造了，注意被包含的类要有拷贝构造函数，不然无法构造
//	student(int sno, string name, int age, string gender, course scs, score grade) :m_sno(sno),
//		m_name(name), m_age(age), m_gender(gender), m_course(scs), m_score(grade) {}
//	void print_student()
//	{
//		cout << m_name << ' ' << m_age << ' ' << m_sno << ' ' << m_gender << ' ';
//		cout << m_course.m_course_name << ' ' << m_course.m_cno << ' ';
//		cout << m_score.m_grade;
//	}
//
//
//};
//
//
//
//
//
//int main()
//{
//	course cs("C++",19218120);
//	score sc(98);
//	student st(9213010806,"任",18,"男",cs,sc);
//
//	st.print_student();
//
//
//	return 0;
//}


//
////友元练习
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//
//class Building
//{
//public:
//	friend void extra_visit(Building* building);
//	friend class goodman;
//	Building();
//	~Building() {}
//
//public:
//	string room;
//private:
//	string bedroom;
//
//};
//
//Building::Building()
//{
//	room = "房间";
//	bedroom = "卧室";
//}
//
////全局函数友元
//void extra_visit(Building *building)
//{
//	cout << building->room << endl;
//	cout << building->bedroom << endl;
//}
//
//class goodman
//{
//public:
//	goodman();
//	~goodman()
//	{
//		if (building)
//		{
//			delete building;
//
//		}
//	}
//	void visit();
//
//private:
//	Building* building;//有一个动态创建的building类
//};
//
//goodman::goodman()
//{
//	building = new Building;
//}
//
//void goodman::visit()
//{
//	cout << building->room << endl;
//	cout << building->bedroom << endl;
//}
//
//
//
//int main()
//{
//	Building b;
//	goodman gg;
//	extra_visit(&b);
//	gg.visit();
//
//
//	return 0;
//}



////重载<<运算符练习
//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//
//public:
//	Person();
//	friend ostream& operator<<(ostream& cout, Person p);
//
//	Person(int a, int b) :m_b(b), m_a(a) {}
//
//	
//
//
//private:
//	int m_a;
//	int m_b;
//
//};
//
//Person::Person()
//{
//	m_a = 10;
//	m_b = 12;
//}
//
//ostream& operator<<(ostream& cout, Person p)
//{
//	cout << p.m_a;
//	cout << ' ';
//	cout << p.m_b;
//	return cout;
//}
//
//
//
//
//int main()
//{
//	Person p(10, 10);
//	cout << p << "hello world" << endl;
//
//	return 0;
//}



////重载++
//#include<iostream>
//using namespace std;
//
//class Myint
//{
//public:
//	friend ostream& operator<<(ostream& cout, Myint p);//不加引用
//	Myint() {};
//	Myint(int a) :num(a) {}
//
//	//前置++
//	Myint& operator ++()
//	{
//		num++;
//		return *this;
//	}
//
//	//后置++
//	Myint operator ++(int)
//	{
//		Myint temp;
//		temp = *this;
//		num++;
//		return temp;
//	}
//
//
//	int num;
//};
//
//ostream& operator<<(ostream& cout, Myint p)//不加引用
//{
//	cout << p.num;
//	return cout;
//}
//
//int main()
//{
//
//	Myint t1 = 10;
//	Myint t2 = 10;
//	
//	cout << ++(++t1) << endl;
//	cout << (t2++) << endl;
//
//
//	return 0;
//}
//






//
//#include<iostream>
//using namespace std;
//
//class abstractcalculatior
//{
//public:
//	int num1 = 0;
//	int num2 = 0;
//	virtual int getresult() = 0;//纯虚函数，他就算抽象类，不能实例化对象
//};
//
//
//class add :public abstractcalculatior
//{
//public:
//	virtual int getresult()
//	{
//		return num1 + num2;
//	}
//};
//
//class dec :public abstractcalculatior
//{
//public:
//	virtual int getresult()
//	{
//		return num1 - num2;
//	}
//};
//
//void test1()
//{
//	//abstractcalculatior* abc = new add;
//	abstractcalculatior* abc = new add();
//	abc->num1 = 10;
//	abc->num2 = 5;
//	cout << abc->num1 << "+" << abc->num2 << "=" << abc->getresult();
//
//	delete abc;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//
//#include<iostream>
//#include<string>
//using namespace std;
////证明输入两个字符串用空格间隔没有问题
////换行间隔也没问题
//
//int main()
//{
//	string a, b;
//	cin >> a >> b;
//	cout << a << endl;
//	cout << b << endl;
//
//
//	return 0;
//}

//==========================================vector=================================================
//#include<vector>
//vector<int> a, b;
////b为向量，将b的0-2个元素赋值给向量a
//a.assign(b.begin(), b.begin() + 3);
////a含有4个值为2的元素
//a.assign(4, 2);
////返回a的最后一个元素
//a.back();
////返回a的第一个元素
//a.front();
////返回a的第i元素,当且仅当a存在
//a[i];
////清空a中的元素
//a.clear();
////判断a是否为空，空则返回true，非空则返回false
//a.empty();
////删除a向量的最后一个元素
//a.pop_back();
////删除a中第一个（从第0个算起）到第二个元素，也就是说删除的元素从a.begin()+1算起（包括它）一直到a.begin()+3（不包括它）结束
//a.erase(a.begin() + 1, a.begin() + 3);
////在a的最后一个向量后插入一个元素，其值为5
//a.push_back(5);
////在a的第一个元素（从第0个算起）位置插入数值5,
//a.insert(a.begin() + 1, 5);
////在a的第一个元素（从第0个算起）位置插入3个数，其值都为5
//a.insert(a.begin() + 1, 3, 5);
////b为数组，在a的第一个元素（从第0个元素算起）的位置插入b的第三个元素到第5个元素（不包括b+6）
//a.insert(a.begin() + 1, b + 3, b + 6);
////返回a中元素的个数
//a.size();
////返回a在内存中总共可以容纳的元素个数
//a.capacity();
////将a的现有元素个数调整至10个，多则删，少则补，其值随机
//a.resize(10);
////将a的现有元素个数调整至10个，多则删，少则补，其值为2
//a.resize(10, 2);
////将a的容量扩充至100，
//a.reserve(100);
////b为向量，将a中的元素和b中的元素整体交换
//a.swap(b);
////b为向量，向量的比较操作还有 != >= > <= <
//a == b;


//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void test1()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(5);
//	v.push_back(7);
//	v.push_back(9);
//
//	//迭代器
//	vector<int>::iterator pstart = v.begin();
//	vector<int>::iterator pend = v.end();
//	//通过迭代器遍历
//	while (pstart != pend)
//	{
//		cout << *pstart << " ";
//		pstart++;
//	}
//	cout << endl;
//	//count算法统计元素个数
//	//返回元素值为target的元素个数
//	pstart = v.begin();
//	int n = count(pstart, pend, 5);
//	cout << n;
//}
//
//
////stl容器存储类对象
//class Teacher
//{
//public:
//	Teacher() {}
//	Teacher(int age1):age(age1) {}
//public:
//	int age;
//};
//
//
//void test2()
//{
//	vector<Teacher>v;
//	Teacher t1(10), t2(20), t3(30);
//	v.push_back(t1);
//	v.push_back(t2);
//	v.push_back(t3);
//	vector<Teacher>::iterator pstart = v.begin();
//	vector<Teacher>::iterator pend = v.end();
//	while (pstart != pend)
//	{
//		cout << pstart->age << " ";
//		pstart++;
//	}
//	cout << endl;
//
//}
//
////存储类指针
//void test3()
//{
//	vector<Teacher*> v;
//	Teacher* t1 = new Teacher(10);
//	Teacher* t2 = new Teacher(10);
//	Teacher* t3 = new Teacher(10);
//	v.push_back(t1);
//	v.push_back(t2);
//	v.push_back(t3);
//	vector<Teacher*>::iterator pstart = v.begin();
//	vector<Teacher*>::iterator pend = v.end();
//	while (pstart != pend)
//	{
//		cout << (*pstart)->age << " ";
//		pstart++;
//	}
//	cout << endl;
//
//}
//
////容器嵌套
//void test4()
//{
//	vector<vector<int>>v;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i * 10);
//		v3.push_back(i * 100);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator subit = (*it).begin(); subit != (*it).end(); subit++)
//		{
//			cout << *subit << " ";
//		}
//		cout << endl;
//	}
//
//
//}
//
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//
//
//	system("pause");
//	return  0;
//}

//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//void print(vector<vector<int>> v)
//{
//
//	if (v.empty())
//	{
//		cout << "matrix is null" << endl;
//	}
//	else
//	{
//		vector<int>::iterator it;
//		vector<vector<int>>::iterator iter;
//		vector<int>temp;
//		cout << "Use iterator : " << endl;
//		for (iter = v.begin(); iter != v.end(); iter++)
//		{
//			temp = *iter;
//			for (it = temp.begin(); it != temp.end(); it++)
//			{
//				cout << *it << " ";
//			}
//			cout << endl;
//		}
//	}
//
//}
//
//void reverse_with_index(vector<vector<int>> v)
//{
//	if (v.empty())
//	{
//		cout << "the matrix is null" << endl;
//	}
//	else
//	{
//		cout << "Use index : " << endl;
//		for (int i = 0; i < v.size(); i++)
//		{
//			for (int j = 0; j < v[0].size(); j++)
//			{
//				cout << v[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//}
//
//
//
//int main()
//{
//	int m, n;
//	cout << "input the row,col num" << endl;
//	cin >> m >> n;
//	vector<vector<int>> matrix(m);
//	for (int i = 0; i < matrix.size(); i++)
//	{
//		matrix[i].resize(n);
//	}
//	cout << "输入"<<m*n<<"个元素的值" << endl;
//	for (int i = 0; i < matrix.size(); i++)
//	{
//		for (int j = 0; j < matrix[0].size(); j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	//利用迭代器遍历：
//	print(matrix);
//	//传统下标访问法
//	reverse_with_index(matrix);
//
//	system("pause");
//	return 0;
//}


//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	cout << "input the row and col of the matrix:" << endl;
//	int m, n;
//	cin >> m >> n;
//	vector<vector<int>> array1(m);
//	for (int i = 0; i < m; i++)
//	{
//		array1[i].resize(n);
//	}
//	cout << "input " << m * n << " elements" << endl;
//	for (int i = 0; i < array1.size(); i++)
//	{
//		for (int j = 0; j < array1[0].size(); j++)
//		{	
//			cin >> array1[i][j];
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << array1[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	
//	//vector<int>v;
//	//int temp = 0;
//	//array1.clear();
//	//for (int i = 0; i < m; i++)//输入m*n的二维数组
//	//{
//	//	v.clear();//子数组返回时要清除
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		cin >> temp;
//	//		v.push_back(temp);
//
//	//	}
//	//	array1.push_back(v);
//	//}
//	//for (int i = 0; i < m; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		cout << array1[i][j]<<" ";
//	//	}
//	//	cout << endl;
//	//}
//
//
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//	void she(const person& arr)
//	{
//		arr.age;//在类内操作本类的一个对象时，可以通过该对象访问其私有成员
//		
//	}
//
//protected:
//	int ab;
//
//private:
//	int age;
//	char c;
//};
//
//int main()
//{
//	
//	system("pause");
//	return 0;









////
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


//
//
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
//class SuperStar :public Actor,public Singer
//{
//protected:
//	int income;
//public:
//	SuperStar() {}
//
//	SuperStar(string name0, int age0, string name1, int age1, int mnum, string name2, int age2, int dnum, int income) :
//		Actor(name1, age1, mnum), Singer(name2, age2, dnum), income(income),Artist(name0, age0){}
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
//	SuperStar ss("artist", 10, "actor", 18, 2, "singer", 19, 3,5000);
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




 










//----------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------------------------

// //传统不适用虚继承
// //二义性解决方法：使用作用域规则
// #include<iostream>
// #include<string>
// using namespace std;

// class A
// {
//     int i;
// protected:
//     char c;
// public:
//     string s;
//     A(int tempi,char tempc,string temps):i(tempi),c(tempc),s(temps){}
// 	void show(){cout<<"A::i="<<i<<"  A::c="<<c<<"  A::s="<<s<<endl;}

// };

// class B:public A
// {
// public:
//     B(int tempi,char tempc,string temps):A(tempi,tempc,temps){}
// };

// class C:public A
// {
// public:
//     C(int tempi,char tempc,string temps):A(tempi,tempc,temps){}
// };


// class D:public B,public C
// {
// public:
//     D(int tbi, char tbc, string tbs, int tci, char tcc, string tcs):B(tbi, tbc,tbs),C(tci,tcc,tcs){}
// };


// int main()
// {
//     D d(98,'b',"bs",99,'c',"cs");
//     d.B::show();                             //在构造B和C时候分别用不同的值初始化了A
//     d.C::show();
//     cout<<"使用作用域规则解决路径二义性时，派生类对象所占空间大小为："<<sizeof(d)<<endl;

//     return 0;
// }


////使用虚继承方式解决路径二义性
////直接父类是虚继承虚基类的，派生类是普通继承直接父类
//#include<iostream>
//#include<string>
//using namespace std;
//
//class A
//{
//    int i;
//protected:
//    char c;
//public:
//    string s;
//    A(int tempi, char tempc, string temps) :i(tempi), c(tempc), s(temps) {}
//    void show() { cout << "A::i=" << i << "  A::c=" << c << "  A::s=" << s << endl; }
//
//};
//
//class B :virtual public A
//{
//public:
//    B(int tempi, char tempc, string temps) :A(tempi, tempc, temps) {}
//};
//
//class C :virtual public A
//{
//public:
//    C(int tempi, char tempc, string temps) :A(tempi, tempc, temps) {}
//};
//
//
//class D :public B, public C
//{
//public:
//    D(int tbi, char tbc, string tbs, int tci, char tcc, string tcs) :A(tbi, tbc, tbs), B(tbi, tbc, tbs), C(tci, tcc, tcs) {}
//    //仅由对A的构造函数将A初始化，BC的不起作用，但必须有，类似于占位
//    //自上而下将派生类所有继承来的类全部初始化
//    //对虚基类的初始化只能由最后一个派生类单独调用虚基类的构造构造，其他直接父类对虚基类的构造不会实现
//};
//
//
//int main()
//{
//    D d(98, 'b', "bs", 99, 'c', "cs");
//    d.B::show();
//    d.C::show();
//    cout << "使用虚继承方式解决路径二义性时，派生类对象所占空间大小为：" << sizeof(d) << endl;
//    // 含虚基类的派生类的构造函数
//    // 为了初始化基类的子对象，派生类的构造函数要调用基类的构造函数。
//    // 对于虚基类，由于派生类的对象中只有一个虚基类的子对象。
//    // 为了保证虚基类子对象只被调用一次，这个虚基类构造函数必须只被调用一次。
//    // 由于继承机构可能很深，规定将在建立对象时指定的类称为最派生类。
//    // C++语言规定，虚基类子对象是由最派生类的构造函数通过调用虚基类的
//    // 构造函数进行初始化的。 而该派生类的直接基类中所列出的对这个虚基类的
//    // 构造函数的调用在执行时被忽略，这样保证了对虚基类的子对象只初始化一次。
//
//    return 0;
//}



////之前的直接父类不再虚继承原来虚基类，派生类虚继承两个原来的两个直接父类
//#include<iostream>
//#include<string>
//using namespace std;
//
//class A
//{
//    int i;
//protected:
//    char c;
//public:
//    string s;
//    A(int tempi, char tempc, string temps) :i(tempi), c(tempc), s(temps) {}
//    void show() { cout << "A::i=" << i << "  A::c=" << c << "  A::s=" << s << endl; }
//
//};
//
//class B :public A
//{
//public:
//    B(int tempi, char tempc, string temps) :A(tempi, tempc, temps) {}
//};
//
//class C : public A
//{
//public:
//    C(int tempi, char tempc, string temps) :A(tempi, tempc, temps) {}
//};
//
//
//class D :virtual public B,virtual public C
//{
//public:
//    D(int tbi, char tbc, string tbs, int tci, char tcc, string tcs) :B(tbi, tbc, tbs), C(tci, tcc, tcs) {}
//    //初始化和调用和没有使用虚继承一样，因为虚继承只对间接继承起作用，这个由直接父类到派生类，派生类没有子类，所以无效果，虽然有虚函数表指针产生
//};
//
//
//int main()
//{
//    D d(98, 'b', "bs", 99, 'c', "cs");
//    d.B::show();
//    d.C::show();
//    cout << "使用子类对原本的直接父类虚继承方式解决路径二义性时，派生类对象所占空间大小为：" << sizeof(d) << endl;
//
//    system("pause");
//    return 0;
//}


//
////原来的直接父类只有一边虚继承虚基类，另一边普通继承
//#include<iostream>
//#include<string>
//using namespace std;
//
//class A
//{
//    int i;
//protected:
//    char c;
//public:
//    string s;
//    A(int tempi, char tempc, string temps) :i(tempi), c(tempc), s(temps) {}
//    void show() { cout << "A::i=" << i << "  A::c=" << c << "  A::s=" << s << endl; }
//
//};
//
//class B :virtual public A
//{
//public:
//    B(int tempi, char tempc, string temps) :A(tempi, tempc, temps) {}
//};
//
//class C :public A
//{
//public:
//    C(int tempi, char tempc, string temps) :A(tempi, tempc, temps) {}
//};
//
//
//class D :public B, public C
//{
//public:
//    D(int tbi, char tbc, string tbs, int tci, char tcc, string tcs) :A(tbi, tbc, tbs), B(tbi, tbc, tbs), C(tci, tcc, tcs) {}
//    //仅由对A的构造函数将A初始化，BC的不起作用
//};
//
//
//int main()
//{
//    D d(98, 'b', "bs", 99, 'c', "cs");
//    d.B::show();
//    d.C::show();
//    cout << "使用虚继承方式解决路径二义性时，派生类对象所占空间大小为：" << sizeof(d) << endl;
//    // 含虚基类的派生类的构造函数
//    // 为了初始化基类的子对象，派生类的构造函数要调用基类的构造函数。
//    // 对于虚基类，由于派生类的对象中只有一个虚基类的子对象。
//    // 为了保证虚基类子对象只被调用一次，这个虚基类构造函数必须只被调用一次。
//    // 由于继承机构可能很深，规定将在建立对象时指定的类称为最派生类。
//    // C++语言规定，虚基类子对象是由最派生类的构造函数通过调用虚基类的
//    // 构造函数进行初始化的。 而该派生类的直接基类中所列出的对这个虚基类的
//    // 构造函数的调用在执行时被忽略，这样保证了对虚基类的子对象只初始化一次。
//
//
//
//    return 0;
//}










//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string email = "hello@gmail.com";
//	/*int pos = email.find('@');*/
//	int pos = email.find("@");
//	string name = email.substr(0, pos);
//	cout << name;
//
//
//	system("pause");
//	return 0;
//}

//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int>v1;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i);
//	}
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	//v1.resize(10);
//	//for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	//{
//	//	cout << (*it) << " ";
//	//}
//	//cout << endl;
//	//cout << v1.capacity() << endl;
//	//cout << v1.size() << endl;
//	v1.resize(15, 20);
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	//v1.clear();
//	cout << endl;
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int>v1;
//
//	//for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	//{
//	//	cout << (*it) << " ";
//	//}
//	//cout << endl;
//	v1.resize(10000);
//	v1.clear();
//	for (int i = 0; i < 20; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "v1 capacity and size" << endl;
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//
//	
//	vector<int>v2(v1);
//	//for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
//	//{
//	//	cout << (*it) << " ";
//	//}
//	//cout << endl;
//	cout << "v2 capacity and size" << endl;
//	cout << v2.capacity() << endl;
//	cout << v2.size() << endl;
//	//这里证明拷贝构造针对v1的实际size大小，v2的capacity是系统自动分配的
//	
//
//	//swap搜索内存
//	//先构造出匿名对象，拷贝构造，然后和v1交换，（匿名对象的capacity是重新根据v1的size大小分配的）
//	//最后匿名对象被系统自动回收，实现了v1收缩内存空间
//	vector<int>(v1).swap(v1);
//	cout << "v1 capacity and size after swap " << endl;
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int>v1;
//	int* p = NULL;
//	int num = 0;
//	v1.reserve(100000);					//采用reserve预留出空间，避免多次重新动态分配空间
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0])
//		{
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << num;
//
//	system("pause");
//	return 0;
//}
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void print1(vector<int>&v1)
//{
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void print2(int a)
//{
//	cout << a << " ";
//}
//
//int main()
//{
//	vector<int>v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	print1(v1);
//	for_each(v1.begin(),v1.end(), print2);		//使用算法遍历
//
//	//注意以下参数使用迭代器
//	//vector没有直接查找某个元素出现首位置的find函数
//
//	//vector<int>::iterator beg = v1.begin();
//	//vector<int>::iterator ends = v1.end();
//
//	//v1.erase(v1.begin(), v1.begin() + 3);		//前闭后开删除其中元素
//	v1.erase(v1.begin());						//删除该位置元素
//
//	cout << endl;
//	//v1.insert(v1.begin(), 3, 20);				//插入n个元素
//	for_each(v1.begin(), v1.end(), print2);
//
//	system("pause");
//	return 0;
//}



////评委打分程序
//#include<iostream>
//#include<vector>
//#include<string>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//
////选手类
//class Person
//{
//public:
//	string m_name;
//	int m_score;
//
//	Person(string name, int score) :m_name(name), m_score(score) {}
//};
//
//void createp(vector<Person>&v)				//注意传引用
//{
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += 'A' + i;					//选手姓名 使用'A’加i偏移量
//
//		Person p(name, 0);
//		v.push_back(p);
//	}
//}
//
//void gradep(vector<Person>& v)
//{
//	srand(unsigned int(time(NULL)));
//
//	for (vector<Person>::iterator it=v.begin(); it != v.end(); it++)
//	{
//		deque<int> d;
//		int sum = 0;
//		int temp = 0;
//		for (int i = 0; i < 10; i++)
//		{
//			temp = rand() % 41 + 60;		//范围在60~100之间
//			d.push_back(temp);
//			sum += temp;
//		}
//
//		//for (deque<int>::iterator iter = d.begin(); iter != d.end(); iter++)
//		//{
//		//	cout << (*iter) << " ";
//		//}
//		//cout << endl;
//
//		sort(d.begin(), d.end());
//		sum = sum - d.front() - d.back();
//		d.pop_back();
//		d.pop_front();
//
//		int avg = sum / d.size();
//		(*it).m_score = avg;
//	}
//}



//void print(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名： " << (*it).m_name << " 分数： " << (*it).m_score << endl;
//	}
//}
//
//
//int main()
//{
//	//创建5个选手类
//	vector<Person>v;
//	createp(v);
//	//print(v);
//
//	//10个评委给5个选手打分，去除最高最低分输出平均分
//	gradep(v);
//	//print(v);
//	//输出5个选手最后的平均成绩
//	print(v);
//
//	system("pause");
//	return 0;
//}

//
////list高级排序案例
////自定义类型，年龄升序排序，年龄相同升高降序排序
//#include<iostream>
//#include<string>
//#include<list>
//using namespace std;
//
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	int m_height;
//
//	Person(string name, int age, int height) :m_name(name), m_age(age), m_height(height) {}
//};
//
//void print(const list<Person>& p)
//{
//	for (list<Person>::const_iterator it=p.begin(); it != p.end(); it++)
//	{
//		cout << (*it).m_name << " " << it->m_age << " " << it->m_height << endl;
//	}
//}
//
//bool cmp(Person& p1, Person& p2)
//{
//	if (p1.m_age == p2.m_age)
//		return p1.m_height > p2.m_height;		//要降序就前大于后
//	else
//		return p1.m_age < p2.m_age;				//要升序就前小于后
//}
//
//int main()
//{
//	list<Person>p;
//	Person p1("sb1", 18, 160);
//	Person p2("sb2", 12, 170);
//	Person p3("sb3", 19, 160);
//	Person p4("sb4", 16, 170);
//	Person p5("sb5", 16, 180);
//	Person p6("sb6", 16, 200);
//	Person p7("sb7", 11, 170);
//	Person p8("sb8", 20, 150);
//
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	p.push_back(p5);
//	p.push_back(p6);
//	p.push_back(p7);
//	p.push_back(p8);
//
//	cout << "排序前" << endl;
//	print(p);
//	cout << "---------------------------------------" << endl;
//
//	p.sort(cmp);
//	cout << "排序后" << endl;
//	print(p);
//
//	system("pause");
//	return 0;
//}

////list排序证明系统给的排序也有重载
//#include<iostream>
//#include<deque>
//#include<algorithm>
//using namespace std;
//
//void print(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//bool cmp(int a1,int a2)
//{
//	return a1 > a2;
//}
//
//int main()
//{
//	deque<int>d;
//	d.push_back(1);
//	d.push_back(5);
//	d.push_back(2);
//	d.push_back(6);
//	d.push_back(3);
//
//	cout << "排序前" << endl;
//	print(d);
//
//	cout << "默认升序排序后" << endl;
//	sort(d.begin(),d.end());
//	print(d);
//
//	cout << "降序排序后" << endl;
//	sort(d.begin(), d.end(), cmp);
//	print(d);
//	
//	system("pause");
//	return 0;
//}

////更改set和map容器插入时候排序方式
//#include<iostream>
//#include<map>
//#include<set>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//
//	Person(string name, int age) :m_name(name), m_age(age) {}
//};
//
//class cmp
//{
//public:
//	bool operator()(const Person& p1, const Person& p2)const
//	{
//		return p1.m_age > p2.m_age;
//	}
//};
//
//void prints(set<Person, cmp>& s)
//{
//	for (set<Person, cmp>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << it->m_name << " " << it->m_age << endl;
//	}
//}
//
//class cmp1
//{
//public:
//	bool operator()(const int& v1, const int& v2) const			//注意加上const
//	{
//		return v1 > v2;
//	}
//};
//
//
//
//void printm(map<int, Person,cmp1>& m)
//{
//	for (map<int, Person, cmp1>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout <<it->first<<" " << it->second.m_name << " " << it->second.m_age << endl;
//	}
//}
//
//int main()
//{
//	set<Person,cmp>s;
//	map<int, Person,cmp1>m;
//
//	Person p1("a", 3);
//	Person p2("b", 2);
//	Person p3("c", 4);
//	Person p4("d", 1);
//	
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	prints(s);
//
//	//注意map的排序人为只能规定key值从大到小或者从小到大
//
//	m.insert(pair<int, Person>(1, p1));
//	m.insert(pair<int, Person>(2, p2));
//	m.insert(pair<int, Person>(3, p3));
//	m.insert(pair<int, Person>(4, p4));
//
//	printm(m);
//	
//
//	system("pause");
//	return 0;
//}






////实现十个人的部门、工资随机分配输出
//#include<iostream>
//#include<map>
//#include<string>
//#include<vector>
//#include<ctime>
//using namespace std;
//
//const int CEHUA = 0;
//const int MEISHU = 1;
//const int KAIFA = 2;
//
//class Person
//{
//public:
//	string m_name;
//	int m_salary;
//
//	Person(string name, int salary) :m_name(name), m_salary(salary) {}
//};
//
//void createv(vector<Person>& v)
//{
//	string nameseed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		string name = "姓名";
//		name += nameseed[i];
//
//		int salary = rand() % 10000 + 10000;
//		Person p(name, salary);
//		v.push_back(p);
//	}
//}
//
//void print(const vector<Person>& p)
//{
//	for (vector<Person>::const_iterator it = p.begin(); it != p.end(); it++)
//	{
//		cout << "姓名： " << it->m_name << " 工资： " << (*it).m_salary << endl;
//	}
//}
//
//void assign(vector<Person>& v, multimap<int, Person>& m)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int num = rand() % 3;
//		m.insert(make_pair(num, (*it)));
//	}
//}
//
//void showdepsal(multimap<int, Person>& m)
//{
//	cout << "策划部门成员如下" << endl;
//	map<int, Person>::iterator pos = m.find(CEHUA);			//返回第一次出现的位置元素迭代器
//	int n = m.count(CEHUA);									//返回总共出现多少次
//	int count = 0;
//	for (; pos != m.end() && count < n; pos++, count++)		//如果没有遍历完并且遍历到需要的数个数小于该数总数
//	{
//		cout << pos->second.m_name << " " << pos->second.m_salary << endl;
//	}
//
//	cout << "美术部门成员如下" << endl;
//	pos = m.find(MEISHU);			//返回第一次出现的位置元素迭代器
//	n = m.count(MEISHU);									//返回总共出现多少次
//	count = 0;
//	for (; pos != m.end() && count < n; pos++, count++)		//如果没有遍历完并且遍历到需要的数个数小于该数总数
//	{
//		cout << pos->second.m_name << " " << pos->second.m_salary << endl;
//	}
//
//	cout << "开发部门成员如下" << endl;
//	pos = m.find(KAIFA);			//返回第一次出现的位置元素迭代器
//	n = m.count(KAIFA);									//返回总共出现多少次
//	count = 0;
//	for (; pos != m.end() && count < n; pos++, count++)		//如果没有遍历完并且遍历到需要的数个数小于该数总数
//	{
//		cout << pos->second.m_name << " " << pos->second.m_salary << endl;
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	//首先创建10个人存到vector容器中
//	vector<Person>v;
//	createv(v);
//	//print(v);
//
//	//再把10个人分配到3个不同的部门
//	multimap<int, Person>m;
//	assign(v,m);
//
//	//打印每个部门成员和对应工资
//	showdepsal(m);
//
//
//
//	system("pause");
//	return 0;
//}



////更改map容器插入时候排序方式
////map容器排序时候按照key值排序，后面value值对排序没有作用
////原本索引是int值，现在定义类salary，重新用新方式排序
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//
//	Person(string name, int age) :m_name(name), m_age(age) {}
//};
//
//class Salary
//{
//public:
//	int m_salary;
//
//	Salary(int salary) :m_salary(salary) {}
//};
//
//
//class cmp1
//{
//public:
//	bool operator()(const Salary& s1, const Salary& s2) const			//注意加上const
//	{
//		return s1.m_salary > s2.m_salary;
//	}
//};
//
//void printm(map<Salary, Person, cmp1>& m)
//{
//	for (map<Salary, Person, cmp1>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first.m_salary << " " << it->second.m_name << " " << it->second.m_age << endl;
//	}
//}
//
//int main()
//{
//	map<Salary, Person, cmp1>m;
//
//	Person p1("a", 3);
//	Person p2("b", 2);
//	Person p3("c", 4);
//	Person p4("d", 1);
//
//	Salary s1(20);
//	Salary s2(10);
//	Salary s3(40);
//	Salary s4(30);
//
//	//注意map的排序人为只能规定key值从大到小或者从小到大
//
//	m.insert(pair<Salary, Person>(s1, p1));
//	m.insert(pair<Salary, Person>(s2, p2));
//	m.insert(pair<Salary, Person>(s3, p3));
//	m.insert(pair<Salary, Person>(s4, p4));
//
//	printm(m);
//
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class cmp
//{
//public:
//	bool operator()(int a1, int a2)
//	{
//		return a1 > a2;
//	}
//};
//
//int main()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	sort(v.begin(), v.end(), cmp());		//提供匿名对象，而不是类名
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<set>
//#include<string>
//using namespace std;
//
//class cmp
//{
//public:
//	bool operator()(int a1, int a2)
//	{
//		return a1 > a2;
//	}
//};
//
//int main()
//{
//	set<int, cmp>s;
//	s.insert(1);
//	s.insert(4);
//	s,insert()
//
//	system("pause");
//	return 0;
//}



////循环查找
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	v.push_back(5);
//	v.push_back(5);
//	vector<int>::iterator it = v.begin();
//	vector<int>::iterator pos;
//	while (it!= v.end())				//循环查找
//	{
//		pos = find(it, v.end(), 5);
//		if (pos != v.end())				//如果没有找到返回end()
//		{
//			cout << "找到了，位置是： " << pos - v.begin() << endl;
//			it = pos + 1;				//每次find从pos下一位开始
//		}
//		else
//		{
//			it = pos;					//没有找到这时候pos是end()，说明全部找完了，外面直接退出
//		}
//	}
//
//	system("pause");
//	return 0;
//}


////find_if
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//
//	Person(string name, int age) :m_name(name), m_age(age) {}
//
//	//bool operator()(const Person& p)
//	//{
//	//	return this->m_age > p.m_age;
//	//}
//
//};
//
//class Cmp							//降序排序
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		return p1.m_age > p2.m_age;
//	}
//};
//
//void print1(const Person&p) 
//{
//	cout << p.m_name << " " << p.m_age << endl;
//}
//
//class Print2
//{
//public:
//	void operator()(const Person& p) const
//	{
//		cout << p.m_name << " " << p.m_age << endl;
//	}
//};
//
//Person trans1(Person p)
//{
//	return p;
//}
//
//class Trans2
//{
//public:
//	Person operator()(const Person p)
//	{
//		//Person p1(p.m_name, p.m_age);
//		//return p1;
//		return p;
//	}
//};
//
//int main()
//{
//	vector<Person>v;
//	Person p1("a", 18);
//	Person p2("b", 16);
//	Person p3("c", 11);
//	Person p4("d", 19);
//	Person p5("e", 12);
//	Person p6("f", 20);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	sort(v.begin(), v.end(), Cmp());		//按年龄降序排序
//
//	//for_each(v.begin(), v.end(), print1);	//使用普通函数参数遍历
//	for_each(v.begin(), v.end(), Print2()); //使用谓词
//
//	vector<Person>v2;
//	v2.resize(v.size(),p1);								//注意要先为v2开辟足够空间，对于自定义数据类型还必须加上自定义数据类型大小
//	//transform(v.begin(), v.end(), v2.begin(), trans1);
//	transform(v.begin(), v.end(), v2.begin(), Trans2());
//	for_each(v2.begin(), v2.end(), Print2());			//使用谓词
//
//	system("pause");
//	return 0;
//}










