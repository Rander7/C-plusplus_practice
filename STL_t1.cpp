////================================================================================================
////string容器
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str = "abcdefghi";
//	str.replace(1, 2, "111");			//111bcdefghi
//	cout << str << endl;				//不管s长度是否等于n，都直接替换成s
//
//
//	string str1 = "abcdef";
//	
//	//求字串
//	string substr = str1.substr(1, 3);	//bcd
//	cout << substr << endl;
//
//	//实用操作：求email中用户姓名：
//	string email = "hello@gmail.com";
//	/*int pos = email.find('@');*/		//一个是字符,一个是字符串
//	int pos = email.find("@");
//	string name = email.substr(0, pos);	//hello
//	cout << name << endl;
//
//	system("pause");
//	return 0;
//}


////容器传参记得传引用
////================================================================================================
////vector

////起始代码
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
//	cout << v1.capacity() << endl;			//容量是系统自动分配的
//	cout << v1.size() << endl;
//	//v1.resize(10);
//	//for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	//{
//	//	cout << (*it) << " ";
//	//}
//	//cout << endl;
//	//cout << v1.capacity() << endl;
//	//cout << v1.size() << endl;
//	v1.resize(15, 20);						//使用20代替默认填充元素0
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


////swap
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int>v1;
//	v1.resize(10000);
//	v1.clear();
//	for (int i = 0; i < 20; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "v1 capacity and size" << endl;
//	cout << v1.capacity() << endl;			//这个时候capacity很大但是使用的size很小
//	cout << v1.size() << endl;
//
//	
//	//vector<int>v2(v1);
//	//cout << "v2 capacity and size" << endl;
//	//cout << v2.capacity() << endl;
//	//cout << v2.size() << endl;
//	////这里证明拷贝构造针对v1的实际size大小，v2的capacity是系统自动分配的
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
//	system("pause");
//	return 0;
//}


////reserve
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int>v1;
//	int* p = NULL;
//	int num = 0;
//	v1.reserve(100000);				//采用reserve预留出空间，避免多次重新动态分配空间
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0])			//使用p指针指向v1[0]，如果p不等于说明重新动态分配了空间
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


////使用算法for_each遍历，erase,insert
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

////================================================================================================
////deque
////deque内部有中控器，维护每段缓存区中内容
////中控器维护每一个缓存区的地址，使其像一块连续空间
////vector头部插入删除元素效率低，但是访问元素速度更快
////deque和vector都支持随机访问迭代器
////deque没有容量概念，因为是双端动态数组，地址不连续
////相比vector增加了push_front和pop_front直接操作首元素
//#include<iostream>
//#include<deque>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
//bool mycmp(int val1,int val2)				//使用回调函数
//{
//	return val1 > val2;
//}
//
//class myCmp									//使用仿函数
//{
//public:
//	bool operator()(const int& val1, const int& val2)
//	{
//		return val1 > val2;
//	}
//};
//
//
//void print1(const deque<int>&d)			//打印时候若使用const修饰，迭代器也使用const修饰
//{
//	for (deque<int>::const_iterator it=d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//}
//
//void myprint(int val)
//{
//	cout << val << " ";
//}
//
//int main()
//{
//	deque<int>d;
//	for (int i = 0; i < 10; i++) {
//		d.push_back(i);
//	}
//	print1(d);
//	cout << endl;
//
//	//cout << d.front();
//	//cout << d.back();
//
//	//除了vector的两种使用迭代器的insert，deque还提供一种
//	deque<int>d2;
//	d2.push_back(100);
//	d2.push_back(200);
//	d.insert(d.begin(), d2.begin(), d2.end());
//	print1(d);
//	cout << endl;
//	
//	//sort排序
//	sort(d.begin(), d.end());//默认是升序，三种方式改成降序
//	//sort(d.begin(), d.end(), mycmp);				//使用回调函数
//	//sort(d.begin(), d.end(), myCmp());			//使用仿函数，谓词
//	sort(d.begin(), d.end(), greater<int>());		//使用关系仿函数
//	for_each(d.begin(), d.end(), myprint);			//使用遍历算法for_each打印
//
//	system("pause");
//	return 0;
//}


////vector,deque阶段测试
////评委打分程序
//#include<iostream>
//#include<vector>
//#include<string>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//#include<numeric>
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
//	//string nameseed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += 'A' + i;					//选手姓名 使用'A’加i偏移量
//		//name += nameseed[i];				//种子方式
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
//		//deque<int> d;							//初级做法
//		//int sum = 0;
//		//int temp = 0;
//		//for (int i = 0; i < 10; i++)
//		//{
//		//	temp = rand() % 41 + 60;			//范围在60~100之间
//		//	d.push_back(temp);
//		//	sum += temp;
//		//}
//		//sort(d.begin(), d.end());
//		//sum = sum - d.front() - d.back();
//		//d.pop_back();
//		//d.pop_front();
//
//		//int avg = sum / d.size();
//		//(*it).m_score = avg;
//
//		deque<int> d;								//使用算法新做法
//		for (int i = 0; i < 10; i++)
//		{
//			d.push_back(rand() % 41 + 60);
//		}
//		sort(d.begin(), d.end());
//		int sum=accumulate(d.begin()+1, d.end()-1,0);//使用累加算法，最后一个参数表示起始累加值
//		(*it).m_score = sum / (d.size() - 2);
//	}
//}
//
//
//void print(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名： " << (*it).m_name << " 分数： " << (*it).m_score << endl;
//	}
//}
//
//void myprint(const Person&p)
//{
//	cout << "姓名： " << p.m_name << " 分数： " << p.m_score << endl;
//}
//
//
//int main()
//{
//	//创建5个选手类
//	vector<Person>v;
//	createp(v);
//
//	//10个评委给5个选手打分，去除最高最低分输出平均分
//	gradep(v);
//
//	//输出5个选手最后的平均成绩
//	for_each(v.begin(), v.end(), myprint);
//
//	system("pause");
//	return 0;
//}


////=======================================================================================================================================
//stack和queue不能遍历，stack使用top返回栈顶元素，pop弹出栈顶元素，操作只有empty和size
//queue只有push和pop

////=======================================================================================================================================
//list对数据进行链式存储，STL的链表是双向循环的，list使用双向迭代器，只能++或--不能跳跃访问
//优点是动态不会浪费和溢出，插入和删除方便
//缺点是空间（指针域）和时间（遍历）消耗大
//性质：插入删除不会导致迭代器失效，也就是说之前的容器动态分配内存是不断找新的更大的空间再把
//内容复制进去，现在的list链表存储空间不是连续的，迭代器不会失效

//list多了remove(elem)将容器中所有==elem的元素删除
//数据存储不支持[]，.at本质是链表不是连续的线性空间
//反转reserve
//所有不支持随机访问的迭代器不支持标准排序算法但是其内部会提供成员函数排序

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
//	p.sort(cmp);						//内部提供的排序算法
//	cout << "排序后" << endl;
//	print(p);
//
//	system("pause");
//	return 0;
//}

////==============================================================================================================================