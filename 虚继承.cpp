//��̳���������������������๹�죬�����ֱ�ӻ��๹�캯����ʼ��ֱ�ӻ��ಿ��
//�����ٵ�������๹�캯��

//��ͨ�̳������๹�캯��ֻ����ֱ�Ӹ��๹�캯������̳����϶���ȫ����

//ֻ�е�����ֱ�ӻ���һ����̳������һ����ͨ�̳�ʱ�����������Ų��ܹ��������

//��̳�ֻ�ڶ�̳��в����ã������һ��̳л򵥼̳ж��������ã���̳б�֤������
//ֻ��һ����Ӹ��࣬��̳�ֻ���ڸ����̳���������


////1. ȫ����ͨ�̳�
 ////�����Խ��������ʹ�����������
 //#include<iostream>
 //#include<string>
 //using namespace std;

 //class A
 //{
 //    int i;
 //protected:
 //    char c;
 //public:
 //    string s;
 //    A(int tempi,char tempc,string temps):i(tempi),c(tempc),s(temps){}
 //	void show(){cout<<"A::i="<<i<<"  A::c="<<c<<"  A::s="<<s<<endl;}

 //};

 //class B:public A
 //{
 //public:
 //    B(int tempi,char tempc,string temps):A(tempi,tempc,temps){}
 //};

 //class C:public A
 //{
 //public:
 //    C(int tempi,char tempc,string temps):A(tempi,tempc,temps){}
 //};


 //class D:public B,public C
 //{
 //public:
 //    D(int tbi, char tbc, string tbs, int tci, char tcc, string tcs):B(tbi, tbc,tbs),C(tci,tcc,tcs){}
 //};


 //int main()
 //{
 //    D d(98,'b',"bs",99,'c',"cs");
 //    d.B::show();                             //�ڹ���B��Cʱ��ֱ��ò�ͬ��ֵ��ʼ����A
 //    d.C::show();
 //    cout<<"ʹ�������������·��������ʱ�������������ռ�ռ��СΪ��"<<sizeof(d)<<endl;

 //    system("pause");
 //    return 0;
 //}



////2. ʹ����̳з�ʽ���·��������
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
//    //���ɶ�A�Ĺ��캯����A��ʼ����BC�Ĳ������ã���������
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
//    system("pause");
//    return 0;
//}



////3. ֮ǰ��ֱ�Ӹ��಻����̳�ԭ������࣬��������̳�����ԭ��������ֱ�Ӹ���
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



////4. ԭ����ֱ�Ӹ���ֻ��һ����̳�����࣬��һ����ͨ�̳�
// //ע�����Ĭ���޲ι��캯��
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
//    A() {}
//    A(int tempi, char tempc, string temps) :i(tempi), c(tempc), s(temps) {}
//    void show() { cout << "A::i=" << i << "  A::c=" << c << "  A::s=" << s << endl; }
//
//};
//
//class B :virtual public A
//{
//public:
//    B() {}
//    B(int tempi, char tempc, string temps) :A(tempi, tempc, temps) {}
//};
//
//class C :public A
//{
//public:
//    C() {}
//    C(int tempi, char tempc, string temps) :A(tempi, tempc, temps) {}
//};
//
//
//class D :public B, public C
//{
//public:
//    D(int tbi, char tbc, string tbs, int tci, char tcc, string tcs) :B(tbi, tbc, tbs), C(tci, tcc, tcs) {}
//    //���ɶ�A���죬�����������
//};
//
//
//int main()
//{
//    D d(98, 'b', "bs", 99, 'c', "cs");
//    d.B::show();
//    d.C::show();//�������B·����A�޲ι��죬C·��A�вι���
//    cout << "ʹ�õ�����̳У������������ռ�ռ��СΪ��" << sizeof(d) << endl;
//    system("pause");
//    return 0;
//}



////5. ֱ�Ӹ�������̳������ģ�����������ͨ�̳�ֱ�Ӹ���
//#include<iostream>
//#include<string>
//using namespace std;
//
//class a
//{
//    int i;
//protected:
//    char c;
//public:
//    string s;
//    a()
//    {
//        cout << "������a���޲ι��캯��" << endl;
//    }
//    a(int tempi, char tempc, string temps) :i(tempi), c(tempc), s(temps)
//    {
//        cout << "������a���вι��캯��" << endl;
//    }
//    ~a()
//    {
//        cout << "������a����������" << endl;
//    }
//    void show() 
//    {
//        cout << "a::i=" << i << "  a::c=" << c << "  a::s=" << s << endl; 
//    }
//
//};
//
//class b :virtual public a
//{
//public:
//    int m_b;
//    b()
//    {
//        cout << "������b���޲ι��캯��" << endl;
//    }
//    b(int tempi, char tempc, string temps,int b) :a(tempi, tempc, temps),m_b(b) 
//    {
//        cout << "������b���вι��캯��" << endl;
//    }
//    ~b()
//    {
//        cout << "������b����������" << endl;
//    }
//    void showb()
//    {
//        cout << "m_b= " << m_b << endl;
//    }
//};
//
//class c :virtual public a
//{
//public:
//    c()
//    {
//        cout << "������c���޲ι��캯��" << endl;
//    }
//    c(int tempi, char tempc, string temps) :a(tempi, tempc, temps) 
//    {
//        cout << "������c���вι��캯��" << endl;
//    }
//    ~c()
//    {
//        cout << "������c����������" << endl;
//    }
//};
//
//
//class d :public b, public c
//{
//public:
//    d()
//    {
//        cout << "������d���޲ι��캯��" << endl;
//    }
//    d(int tbi, char tbc, string tbs, int tci, char tcc, string tcs,int b) :a(tbi, tbc, tbs), b(tbi, tbc, tbs,b), c(tci, tcc, tcs)
//    {
//        cout << "������d���вι��캯��" << endl;
//    }
//    ~d()
//    {
//        cout << "������d����������" << endl;
//    }
//    //���ɶ�a�Ĺ��캯����a��ʼ����bc�Ĳ������ã��������У�������ռλ
//    //���϶��½����������м̳�������ȫ����ʼ��
//    //�������ĳ�ʼ��ֻ�������һ�������൥�����������Ĺ��칹�죬����ֱ�Ӹ���������Ĺ��첻��ʵ��
//};
//
//
//int main()
//{
//    d d(98, 'b', "bs", 99, 'c', "cs",100);
//    d.b::show();
//    d.b::showb();
//    d.c::show();
//    cout << "ʹ����̳з�ʽ���·��������ʱ�������������ռ�ռ��СΪ��" << sizeof(d) << endl;
//
//    system("pause");
//    return 0;
//}


////����·ֻ�м�Ӹ�����̳������
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int m_a;
//	A()
//	{
//		cout << "a." << endl;
//	}
//	A(int a) :m_a(a)
//	{
//		cout << "aaa" << endl;
//	}
//	~A()
//	{
//		cout << "-a" << endl;
//	}
//
//	void showa()
//	{
//		cout << "m_a: " << m_a << endl;
//	}
//};
//
//class B :virtual public A
//{
//public:
//	int m_b;
//	B()
//	{
//		cout << "b." << endl;
//	}
//	B(int a,int b) :A(a),m_b(b)
//	{
//		cout << "bbb" << endl;
//	}
//	~B()
//	{
//		cout << "-b" << endl;
//	}
//	void showb()
//	{
//		cout << "m_b: " << m_b << endl;
//	}
//
//};
//
//class C :virtual public A
//{
//public:
//	int m_c;
//	C()
//	{
//		cout << "c." << endl;
//	}
//	C(int a,int c) :A(a),m_c(c)
//	{
//		cout << "ccc" << endl;
//	}
//	~C()
//	{
//		cout << "-c" << endl;
//	}
//	void showc()
//	{
//		cout << "m_c: " << m_c << endl;
//	}
//
//};
//
//class E :public C
//{
//public:
//	int m_e;
//
//	E()
//	{
//		cout << "e." << endl;
//	}
//	E(int a,int c,int e) :C(a,c),m_e(e)
//	{
//		cout << "eee" << endl;
//	}
//	~E()
//	{
//		cout << "-e" << endl;
//	}
//	void showe()
//	{
//		cout << "m_e: " << m_e << endl;
//	}
//};
//
//class D :public B
//{
//public:
//	int m_d;
//
//	D()
//	{
//		cout << "d." << endl;
//	}
//	D(int a,int b,int d) :B(a,b),m_d(d)
//	{
//		cout << "ddd" << endl;
//	}
//	~D()
//	{
//		cout << "-d" << endl;
//	}
//	void showd()
//	{
//		cout << "m_d: " << m_d << endl;
//	}
//};
//
//class F :public D, public E
//{
//public:
//	int m_f;
//	
//	F()
//	{
//		cout << "f." << endl;
//	}
//	F(int a,int b,int d,int a1,int c,int e,int f) :A(a),D(a,b,d),E(a1,c,e),m_f(f)
//	{
//		cout << "fff" << endl;
//	}
//	~F()
//	{
//		cout << "-f" << endl;
//	}
//	void showf()
//	{
//		cout << "m_f: " << m_f << endl;
//	}
//
//};
//
//
//int main()
//{
//	F f(11, 2, 4, 12, 3, 5, 6);
//	f.showa();
//	f.showb();
//	f.showc();
//	f.showd();
//	f.showe();
//	f.showf();
//	cout << f.m_a << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int m_a;
//	A()
//	{
//		cout << "a." << endl;
//	}
//	A(int a) :m_a(a)
//	{
//		cout << "aaa" << endl;
//	}
//	~A()
//	{
//		cout << "-a" << endl;
//	}
//
//	void showa()
//	{
//		cout << "m_a: " << m_a << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	int m_b;
//	B()
//	{
//		cout << "b." << endl;
//	}
//	B(int a, int b) :A(a), m_b(b)
//	{
//		cout << "bbb" << endl;
//	}
//	~B()
//	{
//		cout << "-b" << endl;
//	}
//	void showb()
//	{
//		cout << "m_b: " << m_b << endl;
//	}
//
//};
//
//class C :virtual public A
//{
//public:
//	int m_c;
//	C()
//	{
//		cout << "c." << endl;
//	}
//	C(int a, int c) :A(a), m_c(c)
//	{
//		cout << "ccc" << endl;
//	}
//	~C()
//	{
//		cout << "-c" << endl;
//	}
//	void showc()
//	{
//		cout << "m_c: " << m_c << endl;
//	}
//
//};
//
//
//
//class D :virtual public B
//{
//public:
//	int m_d;
//
//	D()
//	{
//		cout << "d." << endl;
//	}
//	D(int a, int b, int d) :B(a, b), m_d(d)
//	{
//		cout << "ddd" << endl;
//	}
//	~D()
//	{
//		cout << "-d" << endl;
//	}
//	void showd()
//	{
//		cout << "m_d: " << m_d << endl;
//	}
//};
//
//class F :public D, public C
//{
//public:
//	int m_f;
//
//	F()
//	{
//		cout << "f." << endl;
//	}
//	F(int a, int b, int d, int a1, int c,int f) :B(a,b),D(a, b, d),C(a1,c),m_f(f)
// //����ֱ�ӹ���A
//	{
//		cout << "fff" << endl;
//	}
//	~F()
//	{
//		cout << "-f" << endl;
//	}
//	void showf()
//	{
//		cout << "m_f: " << m_f << endl;
//	}
//
//};
//
//
//int main()
//{
//	F f(11, 2, 4, 12, 3,6);
//	f.D::showa();
//	f.C::showa();
//	f.showb();
//	f.showc();
//	f.showd();
//	f.showf();
//	//cout << f.m_a << endl;
//	system("pause");
//	return 0;
//}


//A<---B<----C
// A<----C������ͨ�̳�
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int m_a;
//
//	A()
//	{
//		cout << "a." << endl;
//	}
//	A(int a) :m_a(a)
//	{
//		cout << "aaa" << endl;
//	}
//
//	void showa()
//	{
//		cout << "m_a: " << m_a;
//	}
//};
//
//class B :public A
//{
//public:
//	int m_b;
//	
//	B()
//	{
//		cout << "b." << endl;
//	}
//	B(int a,int b) :A(a),m_b(b)
//	{
//		cout << "bbb" << endl;
//	}
//	void showb()
//	{
//		cout << "m_b: " << m_b<<endl;
//	}
//};
//
//class C :public A, public B
//{
//public:
//	int m_c;
//
//	C()
//	{
//		cout << "c." << endl;
//	}
//	C(int a,int a2,int b,int c) :A(a),B(a2,b),m_c(c)
//	{
//		cout << "ccc" << endl;
//	}
//	void showc()
//	{
//		cout << "m_c: " << m_c << endl;
//	}
//};
//
//int main()
//{
//	C c(10,100, 2, 3);
//	c.A::showa();		//���ڶ�����
//	cout << endl;
//	c.B::showa();
//	c.showb();
//	c.showc();
//
//	system("pause");
//	return 0;
//}


//////�������ָĳ�B��̳�A���������ͨ��������
////#include<iostream>
////using namespace std;
////
////class A
////{
////public:
////	int m_a;
////
////	A()
////	{
////		cout << "a." << endl;
////	}
////	A(int a) :m_a(a)
////	{
////		cout << "aaa" << endl;
////	}
////
////	void showa()
////	{
////		cout << "m_a: " << m_a;
////	}
////};
////
////class B :virtual public A
////{
////public:
////	int m_b;
////
////	B()
////	{
////		cout << "b." << endl;
////	}
////	B(int a, int b) :A(a), m_b(b)
////	{
////		cout << "bbb" << endl;
////	}
////	void showb()
////	{
////		cout << "m_b: " << m_b << endl;
////	}
////};
////
////class C :public B
////{
////public:
////	int m_c;
////
////	C()
////	{
////		cout << "c." << endl;
////	}
////	C(int a, int a1,int b, int c) :A(a),B(a1, b), m_c(c)
////	{
////		cout << "ccc" << endl;
////	}
////	void showc()
////	{
////		cout << "m_c: " << m_c << endl;
////	}
////};
////
////int main()
////{
////	C c(10,100, 2, 3);
////	//c.A::showa();		
////	//cout << endl;
////	//c.B::showa();
////	c.showa();
////	c.showb();
////	c.showc();
////
////	system("pause");
////	return 0;
////}