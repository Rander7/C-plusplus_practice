////����
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
//	matrix();//ע�⹹�캯�����ⶨ�岻Ҫ�Ӵ�����
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
//		case 90://�����ǰ�90��270�㷴��
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
////������Ϣϵͳ
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
//		cout << "singer���캯������" << endl;
//	}
//	~singer()
//	{
//		cout << "singer������������" << endl;
//	}
//	void init_singer();
//	void modify_singer();
//	void print_singer();
//
//};
//
//void singer::init_singer()
//{
//	cout << "������ֵ����������Ա����" << endl;
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
//	cout << "��������ĸ�xuan" << endl;
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
//	singer s[maxn];//��������,������һ����ע��ʵ�ֿ��ٵĿռ�̶�
//	char flag1 = 'y';
//	char flag2 = 'y';
//	int i = 0;
//	while (flag1 == 'y')
//	{
//		cout << "�����������" << endl;
//		cin >> number;
//		for (int i=0; i < number; i++)
//		{
//			s[i].init_singer();
//		}
//		cout << "������Ϣ����" << endl;
//		for (int i = 0; i < number; i++)
//		{
//			s[i].print_singer();
//		}
//		cout << "��Ҫ�޸ĸ�����Ϣ��" << endl;
//		cin >> flag2;
//		while (flag2 == 'y')
//		{
//			cout << "��Ҫ�޸��ĸ�" << endl;
//			int j = 0;
//			cin >> j;
//			s[j - 1].modify_singer();
//			s[j - 1].print_singer();
//			cout << "��Ҫ�����޸���" << endl;
//			cin >> flag2;
//		}
//		cout << "��Ҫ�������������Ϣ��" << endl;
//		cin >> flag1;
//
//	}
//
//	
//	return 0;
//}


//
//
////ѧ����
////ѧ����ѧ�ţ��������Ա����䣬�γ̣��ɼ�
////�γ��пγ̺ţ��γ�����
////�ɼ��гɼ�
//
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//
////class course;
////class score;//������ǰ����ʧЧ
//
//class course
//{
//public:
//	string m_course_name;
//	int m_cno;
//	course() {}
//	course(string name, int cno) :m_course_name(name), m_cno(cno) {}//�вι���
//	course(course& tempcourse)//��������
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
//	course m_course;//ѧ����һ����Ա��course��
//	score m_score;//һ��score��
//
//public:
//	student() {}
//	~student() {}
//	//����ѧ������ʱ���ѧ���е��๹���ˣ�ע�ⱻ��������Ҫ�п������캯������Ȼ�޷�����
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
//	student st(9213010806,"��",18,"��",cs,sc);
//
//	st.print_student();
//
//
//	return 0;
//}


//
////��Ԫ��ϰ
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
//	room = "����";
//	bedroom = "����";
//}
//
////ȫ�ֺ�����Ԫ
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
//	Building* building;//��һ����̬������building��
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



////����<<�������ϰ
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



////����++
//#include<iostream>
//using namespace std;
//
//class Myint
//{
//public:
//	friend ostream& operator<<(ostream& cout, Myint p);//��������
//	Myint() {};
//	Myint(int a) :num(a) {}
//
//	//ǰ��++
//	Myint& operator ++()
//	{
//		num++;
//		return *this;
//	}
//
//	//����++
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
//ostream& operator<<(ostream& cout, Myint p)//��������
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
//	virtual int getresult() = 0;//���麯��������������࣬����ʵ��������
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
////֤�����������ַ����ÿո���û������
////���м��Ҳû����
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
////bΪ��������b��0-2��Ԫ�ظ�ֵ������a
//a.assign(b.begin(), b.begin() + 3);
////a����4��ֵΪ2��Ԫ��
//a.assign(4, 2);
////����a�����һ��Ԫ��
//a.back();
////����a�ĵ�һ��Ԫ��
//a.front();
////����a�ĵ�iԪ��,���ҽ���a����
//a[i];
////���a�е�Ԫ��
//a.clear();
////�ж�a�Ƿ�Ϊ�գ����򷵻�true���ǿ��򷵻�false
//a.empty();
////ɾ��a���������һ��Ԫ��
//a.pop_back();
////ɾ��a�е�һ�����ӵ�0�����𣩵��ڶ���Ԫ�أ�Ҳ����˵ɾ����Ԫ�ش�a.begin()+1���𣨰�������һֱ��a.begin()+3����������������
//a.erase(a.begin() + 1, a.begin() + 3);
////��a�����һ�����������һ��Ԫ�أ���ֵΪ5
//a.push_back(5);
////��a�ĵ�һ��Ԫ�أ��ӵ�0������λ�ò�����ֵ5,
//a.insert(a.begin() + 1, 5);
////��a�ĵ�һ��Ԫ�أ��ӵ�0������λ�ò���3��������ֵ��Ϊ5
//a.insert(a.begin() + 1, 3, 5);
////bΪ���飬��a�ĵ�һ��Ԫ�أ��ӵ�0��Ԫ�����𣩵�λ�ò���b�ĵ�����Ԫ�ص���5��Ԫ�أ�������b+6��
//a.insert(a.begin() + 1, b + 3, b + 6);
////����a��Ԫ�صĸ���
//a.size();
////����a���ڴ����ܹ��������ɵ�Ԫ�ظ���
//a.capacity();
////��a������Ԫ�ظ���������10��������ɾ�����򲹣���ֵ���
//a.resize(10);
////��a������Ԫ�ظ���������10��������ɾ�����򲹣���ֵΪ2
//a.resize(10, 2);
////��a������������100��
//a.reserve(100);
////bΪ��������a�е�Ԫ�غ�b�е�Ԫ�����彻��
//a.swap(b);
////bΪ�����������ıȽϲ������� != >= > <= <
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
//	//������
//	vector<int>::iterator pstart = v.begin();
//	vector<int>::iterator pend = v.end();
//	//ͨ������������
//	while (pstart != pend)
//	{
//		cout << *pstart << " ";
//		pstart++;
//	}
//	cout << endl;
//	//count�㷨ͳ��Ԫ�ظ���
//	//����Ԫ��ֵΪtarget��Ԫ�ظ���
//	pstart = v.begin();
//	int n = count(pstart, pend, 5);
//	cout << n;
//}
//
//
////stl�����洢�����
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
////�洢��ָ��
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
////����Ƕ��
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
//	cout << "����"<<m*n<<"��Ԫ�ص�ֵ" << endl;
//	for (int i = 0; i < matrix.size(); i++)
//	{
//		for (int j = 0; j < matrix[0].size(); j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	//���õ�����������
//	print(matrix);
//	//��ͳ�±���ʷ�
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
//	//for (int i = 0; i < m; i++)//����m*n�Ķ�ά����
//	//{
//	//	v.clear();//�����鷵��ʱҪ���
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
//		arr.age;//�����ڲ��������һ������ʱ������ͨ���ö��������˽�г�Ա
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


//
//
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
//class SuperStar :public Actor,public Singer
//{
//protected:
//	int income;
//public:
//	SuperStar() {}
//
//	SuperStar(string name0, int age0, string name1, int age1, int mnum, string name2, int age2, int dnum, int income) :
//		Actor(name1, age1, mnum), Singer(name2, age2, dnum), income(income),Artist(name0, age0){}
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
//	SuperStar ss("artist", 10, "actor", 18, 2, "singer", 19, 3,5000);
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




 










//----------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------------------------

// //��ͳ��������̳�
// //�����Խ��������ʹ�����������
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
//     d.B::show();                             //�ڹ���B��Cʱ��ֱ��ò�ͬ��ֵ��ʼ����A
//     d.C::show();
//     cout<<"ʹ�������������·��������ʱ�������������ռ�ռ��СΪ��"<<sizeof(d)<<endl;

//     return 0;
// }


////ʹ����̳з�ʽ���·��������
////ֱ�Ӹ�������̳������ģ�����������ͨ�̳�ֱ�Ӹ���
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
//    //���ɶ�A�Ĺ��캯����A��ʼ����BC�Ĳ������ã��������У�������ռλ
//    //���϶��½����������м̳�������ȫ����ʼ��
//    //�������ĳ�ʼ��ֻ�������һ�������൥�����������Ĺ��칹�죬����ֱ�Ӹ���������Ĺ��첻��ʵ��
//};
//
//
//int main()
//{
//    D d(98, 'b', "bs", 99, 'c', "cs");
//    d.B::show();
//    d.C::show();
//    cout << "ʹ����̳з�ʽ���·��������ʱ�������������ռ�ռ��СΪ��" << sizeof(d) << endl;
//    // ��������������Ĺ��캯��
//    // Ϊ�˳�ʼ��������Ӷ���������Ĺ��캯��Ҫ���û���Ĺ��캯����
//    // ��������࣬����������Ķ�����ֻ��һ���������Ӷ���
//    // Ϊ�˱�֤������Ӷ���ֻ������һ�Σ��������๹�캯������ֻ������һ�Ρ�
//    // ���ڼ̳л������ܺ���涨���ڽ�������ʱָ�������Ϊ�������ࡣ
//    // C++���Թ涨��������Ӷ���������������Ĺ��캯��ͨ������������
//    // ���캯�����г�ʼ���ġ� �����������ֱ�ӻ��������г��Ķ����������
//    // ���캯���ĵ�����ִ��ʱ�����ԣ�������֤�˶��������Ӷ���ֻ��ʼ��һ�Ρ�
//
//    return 0;
//}



////֮ǰ��ֱ�Ӹ��಻����̳�ԭ������࣬��������̳�����ԭ��������ֱ�Ӹ���
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
//    //��ʼ���͵��ú�û��ʹ����̳�һ������Ϊ��̳�ֻ�Լ�Ӽ̳������ã������ֱ�Ӹ��ൽ�����࣬������û�����࣬������Ч������Ȼ���麯����ָ�����
//};
//
//
//int main()
//{
//    D d(98, 'b', "bs", 99, 'c', "cs");
//    d.B::show();
//    d.C::show();
//    cout << "ʹ�������ԭ����ֱ�Ӹ�����̳з�ʽ���·��������ʱ�������������ռ�ռ��СΪ��" << sizeof(d) << endl;
//
//    system("pause");
//    return 0;
//}


//
////ԭ����ֱ�Ӹ���ֻ��һ����̳�����࣬��һ����ͨ�̳�
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
//    //���ɶ�A�Ĺ��캯����A��ʼ����BC�Ĳ�������
//};
//
//
//int main()
//{
//    D d(98, 'b', "bs", 99, 'c', "cs");
//    d.B::show();
//    d.C::show();
//    cout << "ʹ����̳з�ʽ���·��������ʱ�������������ռ�ռ��СΪ��" << sizeof(d) << endl;
//    // ��������������Ĺ��캯��
//    // Ϊ�˳�ʼ��������Ӷ���������Ĺ��캯��Ҫ���û���Ĺ��캯����
//    // ��������࣬����������Ķ�����ֻ��һ���������Ӷ���
//    // Ϊ�˱�֤������Ӷ���ֻ������һ�Σ��������๹�캯������ֻ������һ�Ρ�
//    // ���ڼ̳л������ܺ���涨���ڽ�������ʱָ�������Ϊ�������ࡣ
//    // C++���Թ涨��������Ӷ���������������Ĺ��캯��ͨ������������
//    // ���캯�����г�ʼ���ġ� �����������ֱ�ӻ��������г��Ķ����������
//    // ���캯���ĵ�����ִ��ʱ�����ԣ�������֤�˶��������Ӷ���ֻ��ʼ��һ�Ρ�
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
//	//����֤�������������v1��ʵ��size��С��v2��capacity��ϵͳ�Զ������
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
//	v1.reserve(100000);					//����reserveԤ�����ռ䣬���������¶�̬����ռ�
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



////��ί��ֳ���
//#include<iostream>
//#include<vector>
//#include<string>
//#include<deque>
//#include<algorithm>
//#include<ctime>
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
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += 'A' + i;					//ѡ������ ʹ��'A����iƫ����
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
//			temp = rand() % 41 + 60;		//��Χ��60~100֮��
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
//		cout << "������ " << (*it).m_name << " ������ " << (*it).m_score << endl;
//	}
//}
//
//
//int main()
//{
//	//����5��ѡ����
//	vector<Person>v;
//	createp(v);
//	//print(v);
//
//	//10����ί��5��ѡ�ִ�֣�ȥ�������ͷ����ƽ����
//	gradep(v);
//	//print(v);
//	//���5��ѡ������ƽ���ɼ�
//	print(v);
//
//	system("pause");
//	return 0;
//}

//
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
//	p.sort(cmp);
//	cout << "�����" << endl;
//	print(p);
//
//	system("pause");
//	return 0;
//}

////list����֤��ϵͳ��������Ҳ������
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
//	cout << "����ǰ" << endl;
//	print(d);
//
//	cout << "Ĭ�����������" << endl;
//	sort(d.begin(),d.end());
//	print(d);
//
//	cout << "���������" << endl;
//	sort(d.begin(), d.end(), cmp);
//	print(d);
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



////����map��������ʱ������ʽ
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
//	sort(v.begin(), v.end(), cmp());		//�ṩ�������󣬶���������
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
//	v2.resize(v.size(),p1);								//ע��Ҫ��Ϊv2�����㹻�ռ䣬�����Զ����������ͻ���������Զ����������ʹ�С
//	//transform(v.begin(), v.end(), v2.begin(), trans1);
//	transform(v.begin(), v.end(), v2.begin(), Trans2());
//	for_each(v2.begin(), v2.end(), Print2());			//ʹ��ν��
//
//	system("pause");
//	return 0;
//}










