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