////================================================================================================
////string����
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str = "abcdefghi";
//	str.replace(1, 2, "111");			//111bcdefghi
//	cout << str << endl;				//����s�����Ƿ����n����ֱ���滻��s
//
//
//	string str1 = "abcdef";
//	
//	//���ִ�
//	string substr = str1.substr(1, 3);	//bcd
//	cout << substr << endl;
//
//	//ʵ�ò�������email���û�������
//	string email = "hello@gmail.com";
//	/*int pos = email.find('@');*/		//һ�����ַ�,һ�����ַ���
//	int pos = email.find("@");
//	string name = email.substr(0, pos);	//hello
//	cout << name << endl;
//
//	system("pause");
//	return 0;
//}


////�������μǵô�����
////================================================================================================
////vector

////��ʼ����
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
//	cout << v1.capacity() << endl;			//������ϵͳ�Զ������
//	cout << v1.size() << endl;
//	//v1.resize(10);
//	//for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	//{
//	//	cout << (*it) << " ";
//	//}
//	//cout << endl;
//	//cout << v1.capacity() << endl;
//	//cout << v1.size() << endl;
//	v1.resize(15, 20);						//ʹ��20����Ĭ�����Ԫ��0
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
//	cout << v1.capacity() << endl;			//���ʱ��capacity�ܴ���ʹ�õ�size��С
//	cout << v1.size() << endl;
//
//	
//	//vector<int>v2(v1);
//	//cout << "v2 capacity and size" << endl;
//	//cout << v2.capacity() << endl;
//	//cout << v2.size() << endl;
//	////����֤�������������v1��ʵ��size��С��v2��capacity��ϵͳ�Զ������
//	
//
//	//swap�����ڴ�
//	//�ȹ�����������󣬿������죬Ȼ���v1�����������������capacity�����¸���v1��size��С����ģ�
//	//�����������ϵͳ�Զ����գ�ʵ����v1�����ڴ�ռ�
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
//	v1.reserve(100000);				//����reserveԤ�����ռ䣬���������¶�̬����ռ�
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0])			//ʹ��pָ��ָ��v1[0]�����p������˵�����¶�̬�����˿ռ�
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


////ʹ���㷨for_each������erase,insert
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
//	for_each(v1.begin(),v1.end(), print2);		//ʹ���㷨����
//
//	//ע�����²���ʹ�õ�����
//	//vectorû��ֱ�Ӳ���ĳ��Ԫ�س�����λ�õ�find����
//
//	//vector<int>::iterator beg = v1.begin();
//	//vector<int>::iterator ends = v1.end();
//
//	//v1.erase(v1.begin(), v1.begin() + 3);		//ǰ�պ�ɾ������Ԫ��
//	v1.erase(v1.begin());						//ɾ����λ��Ԫ��
//
//	cout << endl;
//	//v1.insert(v1.begin(), 3, 20);				//����n��Ԫ��
//	for_each(v1.begin(), v1.end(), print2);
//
//	system("pause");
//	return 0;
//}

////================================================================================================
////deque
////deque�ڲ����п�����ά��ÿ�λ�����������
////�п���ά��ÿһ���������ĵ�ַ��ʹ����һ�������ռ�
////vectorͷ������ɾ��Ԫ��Ч�ʵͣ����Ƿ���Ԫ���ٶȸ���
////deque��vector��֧��������ʵ�����
////dequeû�����������Ϊ��˫�˶�̬���飬��ַ������
////���vector������push_front��pop_frontֱ�Ӳ�����Ԫ��
//#include<iostream>
//#include<deque>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
//bool mycmp(int val1,int val2)				//ʹ�ûص�����
//{
//	return val1 > val2;
//}
//
//class myCmp									//ʹ�÷º���
//{
//public:
//	bool operator()(const int& val1, const int& val2)
//	{
//		return val1 > val2;
//	}
//};
//
//
//void print1(const deque<int>&d)			//��ӡʱ����ʹ��const���Σ�������Ҳʹ��const����
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
//	//����vector������ʹ�õ�������insert��deque���ṩһ��
//	deque<int>d2;
//	d2.push_back(100);
//	d2.push_back(200);
//	d.insert(d.begin(), d2.begin(), d2.end());
//	print1(d);
//	cout << endl;
//	
//	//sort����
//	sort(d.begin(), d.end());//Ĭ�����������ַ�ʽ�ĳɽ���
//	//sort(d.begin(), d.end(), mycmp);				//ʹ�ûص�����
//	//sort(d.begin(), d.end(), myCmp());			//ʹ�÷º�����ν��
//	sort(d.begin(), d.end(), greater<int>());		//ʹ�ù�ϵ�º���
//	for_each(d.begin(), d.end(), myprint);			//ʹ�ñ����㷨for_each��ӡ
//
//	system("pause");
//	return 0;
//}


////vector,deque�׶β���
////��ί��ֳ���
//#include<iostream>
//#include<vector>
//#include<string>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//#include<numeric>
//using namespace std;
//
////ѡ����
//class Person
//{
//public:
//	string m_name;
//	int m_score;
//
//	Person(string name, int score) :m_name(name), m_score(score) {}
//};
//
//void createp(vector<Person>&v)				//ע�⴫����
//{
//	//string nameseed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += 'A' + i;					//ѡ������ ʹ��'A����iƫ����
//		//name += nameseed[i];				//���ӷ�ʽ
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
//		//deque<int> d;							//��������
//		//int sum = 0;
//		//int temp = 0;
//		//for (int i = 0; i < 10; i++)
//		//{
//		//	temp = rand() % 41 + 60;			//��Χ��60~100֮��
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
//		deque<int> d;								//ʹ���㷨������
//		for (int i = 0; i < 10; i++)
//		{
//			d.push_back(rand() % 41 + 60);
//		}
//		sort(d.begin(), d.end());
//		int sum=accumulate(d.begin()+1, d.end()-1,0);//ʹ���ۼ��㷨�����һ��������ʾ��ʼ�ۼ�ֵ
//		(*it).m_score = sum / (d.size() - 2);
//	}
//}
//
//
//void print(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������ " << (*it).m_name << " ������ " << (*it).m_score << endl;
//	}
//}
//
//void myprint(const Person&p)
//{
//	cout << "������ " << p.m_name << " ������ " << p.m_score << endl;
//}
//
//
//int main()
//{
//	//����5��ѡ����
//	vector<Person>v;
//	createp(v);
//
//	//10����ί��5��ѡ�ִ�֣�ȥ�������ͷ����ƽ����
//	gradep(v);
//
//	//���5��ѡ������ƽ���ɼ�
//	for_each(v.begin(), v.end(), myprint);
//
//	system("pause");
//	return 0;
//}


////=======================================================================================================================================
//stack��queue���ܱ�����stackʹ��top����ջ��Ԫ�أ�pop����ջ��Ԫ�أ�����ֻ��empty��size
//queueֻ��push��pop

////=======================================================================================================================================
//list�����ݽ�����ʽ�洢��STL��������˫��ѭ���ģ�listʹ��˫���������ֻ��++��--������Ծ����
//�ŵ��Ƕ�̬�����˷Ѻ�����������ɾ������
//ȱ���ǿռ䣨ָ���򣩺�ʱ�䣨���������Ĵ�
//���ʣ�����ɾ�����ᵼ�µ�����ʧЧ��Ҳ����˵֮ǰ��������̬�����ڴ��ǲ������µĸ���Ŀռ��ٰ�
//���ݸ��ƽ�ȥ�����ڵ�list����洢�ռ䲻�������ģ�����������ʧЧ

//list����remove(elem)������������==elem��Ԫ��ɾ��
//���ݴ洢��֧��[]��.at���������������������Կռ�
//��תreserve
//���в�֧��������ʵĵ�������֧�ֱ�׼�����㷨�������ڲ����ṩ��Ա��������

////list�߼�������
////�Զ������ͣ�������������������ͬ���߽�������
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
//		return p1.m_height > p2.m_height;		//Ҫ�����ǰ���ں�
//	else
//		return p1.m_age < p2.m_age;				//Ҫ�����ǰС�ں�
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
//	cout << "����ǰ" << endl;
//	print(p);
//	cout << "---------------------------------------" << endl;
//
//	p.sort(cmp);						//�ڲ��ṩ�������㷨
//	cout << "�����" << endl;
//	print(p);
//
//	system("pause");
//	return 0;
//}

////==============================================================================================================================

//set/multiset����������Ԫ���ڲ���ʱ���Զ�������
//����ʽ������������ʵ��
//set�������ظ�Ԫ�أ�����ʱ�򲻱��������ֻ����һ��

//#include<iostream>
//#include<set>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//void myprint(int val)
//{
//	cout << val << " ";
//}
//
//class Cmp
//{
//public:
//	bool operator()(const int& val1, const int& val2) const//ע���ǳ�����const
//	{
//		return val1 > val2;
//	}
//};
//
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//};
//
//class CmpP
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		return p1.m_age > p2.m_age;
//	}
//};
//
//
//int main()
//{
//
//	set<int>s;
//	s.insert(1);//����ʱ��ֻ��insert
//	s.insert(6);
//	s.insert(3);
//	s.insert(2);
//	s.insert(5);
//
//	for_each(s.begin(), s.end(), myprint);
//	cout << endl;
//
//	s.erase(3);//ɾ��ָ��ֵ��Ԫ��
//	for_each(s.begin(), s.end(), myprint);
//	cout << endl;
//	s.erase(s.begin(), ++s.begin());
//	for_each(s.begin(), s.end(), myprint);
//	cout << endl;
//
//	pair < set<int>::iterator, bool>ret = s.insert(2);//����ֵ��һ�����飬multiset�����޷���ֵ
//	if (ret.second)
//	{
//		cout << "����ɹ�" << endl;
//		for_each(s.begin(), s.end(), myprint);
//		cout << endl;
//	}
//	else
//	{
//		cout << "����ʧ��" << endl;
//	}
//
//	pair<int, bool>pair1(1, true);		//����Ĵ�����ʹ��
//	pair<int, bool>pair2 = make_pair(2, false);
//
//	cout << pair1.first << " " << pair1.second << endl;
//	cout << pair2.first << " " << pair2.second << endl;
//
//	//��ͨint���͸�������ʽ
//	set<int, Cmp>s1;//�Զ�������ʽ�����еڶ��������Ƿº�������
//	//ע��º�������Ҫ�������const�����޸Ļ������ǳ�����const
//	s1.insert(1);
//	s1.insert(6);
//	s1.insert(3);
//	s1.insert(2);
//	s1.insert(5);
//	for_each(s1.begin(), s1.end(), myprint);
//
//	//�Զ���Person���͸�������ʽ
//	set<Person, CmpP>sp;
//	Person p1("a", 12);
//	Person p2("b", 11);
//	Person p3("c", 18);
//	Person p4("d", 14);
//	Person p5("e", 16);
//	Person p6("f", 15);
//	Person p7("g", 17);
//
//	sp.insert(p1);
//	sp.insert(p2);
//	sp.insert(p3);
//	sp.insert(p4);
//	sp.insert(p5);
//	sp.insert(p6);
//	sp.insert(p7);
//
//	for (set<Person, CmpP>::iterator it = sp.begin(); it != sp.end(); it++)
//	{
//		cout << (*it).m_name << " " << (*it).m_age << endl;
//	}
//
//	system("pause");
//	return 0;
//}

////==================================================================================================
////map/multimap
//map����Ԫ�ض���pair
//pair�е�һ��Ԫ����key�����������ã��ڶ���Ϊvalue
//����Ԫ�ظ���keyֵ�ڲ���ʱ���Զ�����ָ������ֻ�ܶ�key����
//map������key���ظ�ֵ������value�������ظ�ֵ

//#include<iostream>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//void myprint(pair<int,int>p)
//{
//	cout << p.first << " " << p.second << endl;
//}
//
//int main()
//{
//	map<int, int>m1;
//	map<int, int>m2;
//	map<int, int>m3;
//	map<int, int>m4;
//	m1.insert(pair<int, int>(1, 10));//ʹ���������鷽ʽ����
//	m2.insert(make_pair(2, 20));//ʹ��make_pair��������
//	m3.insert(map<int, int>::value_type(3, 30));
//	m4[4] = 40;//4��key���������ڲ���ʱ��ʹ�ã�����key��valueʱ�������
//
//	m1.insert(make_pair(2, 20));
//	m1.insert(make_pair(3, 20));
//	m1.insert(make_pair(4, 20));
//	m1.insert(make_pair(5, 20));
//	m1.insert(make_pair(6, 20));
//	m1.erase(2);//ɾ��keyΪ2��
//
//	map<int,int>::iterator where=m1.find(3);//�ֱ����ҵ�keyΪ3�ĺͼ���keyΪ3�ĸ���
//	if (where != m1.end())
//	{
//		//cout << (where - m1.begin());//�����������֮���ֵ���ǵڼ���
//		//��Ϊmap�������Ե�
//		map<int, int>::iterator it = m1.begin();
//		int n = 1;
//		while (it != where)
//		{
//			n++;
//			it++;
//		}
//		cout << "�ҵ���λ���ǣ�"<<n<<" ������valueֵΪ" << (*where).second << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	int count=m1.count(3);
//	cout << "keyֵΪ3����" << count << "��" << endl;
//
//	for_each(m1.begin(), m1.end(), myprint);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}


////����set��map��������ʱ������ʽ
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
//	bool operator()(const int& v1, const int& v2) const			//ע�����const
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
//	//ע��map��������Ϊֻ�ܹ涨keyֵ�Ӵ�С���ߴ�С����
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


///����map��������ʱ������ʽ
////map��������ʱ����keyֵ���򣬺���valueֵ������û������
////ԭ��������intֵ�����ڶ�����salary���������·�ʽ����
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
//	bool operator()(const Salary& s1, const Salary& s2) const			//ע�����const
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
//	//ע��map��������Ϊֻ�ܹ涨keyֵ�Ӵ�С���ߴ�С����
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


////map�׶β���
////ʵ��ʮ���˵Ĳ��š���������������
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
//		string name = "����";
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
//		cout << "������ " << it->m_name << " ���ʣ� " << (*it).m_salary << endl;
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
//	cout << "�߻����ų�Ա����" << endl;
//	map<int, Person>::iterator pos = m.find(CEHUA);			//���ص�һ�γ��ֵ�λ��Ԫ�ص�����
//	int n = m.count(CEHUA);									//�����ܹ����ֶ��ٴ�
//	int count = 0;
//	for (; pos != m.end() && count < n; pos++, count++)		//���û�б����겢�ұ�������Ҫ��������С�ڸ�������
//	{
//		cout << pos->second.m_name << " " << pos->second.m_salary << endl;
//	}
//
//	cout << "�������ų�Ա����" << endl;
//	pos = m.find(MEISHU);			//���ص�һ�γ��ֵ�λ��Ԫ�ص�����
//	n = m.count(MEISHU);									//�����ܹ����ֶ��ٴ�
//	count = 0;
//	for (; pos != m.end() && count < n; pos++, count++)		//���û�б����겢�ұ�������Ҫ��������С�ڸ�������
//	{
//		cout << pos->second.m_name << " " << pos->second.m_salary << endl;
//	}
//
//	cout << "�������ų�Ա����" << endl;
//	pos = m.find(KAIFA);			//���ص�һ�γ��ֵ�λ��Ԫ�ص�����
//	n = m.count(KAIFA);									//�����ܹ����ֶ��ٴ�
//	count = 0;
//	for (; pos != m.end() && count < n; pos++, count++)		//���û�б����겢�ұ�������Ҫ��������С�ڸ�������
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
//	//���ȴ���10���˴浽vector������
//	vector<Person>v;
//	createv(v);
//	//print(v);
//
//	//�ٰ�10���˷��䵽3����ͬ�Ĳ���
//	multimap<int, Person>m;
//	assign(v,m);
//
//	//��ӡÿ�����ų�Ա�Ͷ�Ӧ����
//	showdepsal(m);
//
//
//
//	system("pause");
//	return 0;
//}


////======================================================================================================
////�㷨��

////ѭ������
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
//	while (it!= v.end())				//ѭ������
//	{
//		pos = find(it, v.end(), 5);
//		if (pos != v.end())				//���û���ҵ�����end()
//		{
//			cout << "�ҵ��ˣ�λ���ǣ� " << pos - v.begin() << endl;
//			//������Ե�����ֱ�������λ������Ϊvector�����Ե�
//			it = pos + 1;				//ÿ��find��pos��һλ��ʼ
//		}
//		else
//		{
//			it = pos;					//û���ҵ���ʱ��pos��end()��˵��ȫ�������ˣ�����ֱ���˳�
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
//class Cmp							//��������
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
//	sort(v.begin(), v.end(), Cmp());		//�����併������
//
//	//for_each(v.begin(), v.end(), print1);	//ʹ����ͨ������������
//	for_each(v.begin(), v.end(), Print2()); //ʹ��ν��
//
//	vector<Person>v2;
//	v2.resize(v.size(),p1);		//ע��Ҫ��Ϊv2�����㹻�ռ䣬�����Զ����������ͻ���������Զ����������ʹ�С
//	//transform(v.begin(), v.end(), v2.begin(), trans1);
//	transform(v.begin(), v.end(), v2.begin(), Trans2());
//	for_each(v2.begin(), v2.end(), Print2());//ʹ��ν��
//
//	system("pause");
//	return 0;
//}
