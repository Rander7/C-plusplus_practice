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