//虚继承中虚基类必须由最后派生类构造，其调用直接基类构造函数初始化直接基类部分
//不会再调用虚基类构造函数

//普通继承派生类构造函数只调用直接父类构造函数，虚继承自上而下全调用

//只有当出现直接基类一个虚继承虚基类一个普通继承时，最后派生类才不能构造虚基类

//虚继承只在多继承中才有用，如果是一层继承或单继承都不起作用，虚继承保证子类中
//只有一个间接父类，虚继承只能在隔代继承中起作用


////1. 全部普通继承
 ////二义性解决方法：使用作用域规则
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
 //    d.B::show();                             //在构造B和C时候分别用不同的值初始化了A
 //    d.C::show();
 //    cout<<"使用作用域规则解决路径二义性时，派生类对象所占空间大小为："<<sizeof(d)<<endl;

 //    system("pause");
 //    return 0;
 //}



////2. 使用虚继承方式解决路径二义性
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
//    //仅由对A的构造函数将A初始化，BC的不起作用，但必须有
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
//    system("pause");
//    return 0;
//}



////3. 之前的直接父类不再虚继承原来虚基类，派生类虚继承两个原来的两个直接父类
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



////4. 原来的直接父类只有一边虚继承虚基类，另一边普通继承
// //注意添加默认无参构造函数
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
//    //不可对A构造，会产生二义性
//};
//
//
//int main()
//{
//    D d(98, 'b', "bs", 99, 'c', "cs");
//    d.B::show();
//    d.C::show();//最后结果是B路径的A无参构造，C路径A有参构造
//    cout << "使用单边虚继承，派生类对象所占空间大小为：" << sizeof(d) << endl;
//    system("pause");
//    return 0;
//}



////5. 直接父类是虚继承虚基类的，派生类是普通继承直接父类
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
//        cout << "调用了a的无参构造函数" << endl;
//    }
//    a(int tempi, char tempc, string temps) :i(tempi), c(tempc), s(temps)
//    {
//        cout << "调用了a的有参构造函数" << endl;
//    }
//    ~a()
//    {
//        cout << "调用了a的析构函数" << endl;
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
//        cout << "调用了b的无参构造函数" << endl;
//    }
//    b(int tempi, char tempc, string temps,int b) :a(tempi, tempc, temps),m_b(b) 
//    {
//        cout << "调用了b的有参构造函数" << endl;
//    }
//    ~b()
//    {
//        cout << "调用了b的析构函数" << endl;
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
//        cout << "调用了c的无参构造函数" << endl;
//    }
//    c(int tempi, char tempc, string temps) :a(tempi, tempc, temps) 
//    {
//        cout << "调用了c的有参构造函数" << endl;
//    }
//    ~c()
//    {
//        cout << "调用了c的析构函数" << endl;
//    }
//};
//
//
//class d :public b, public c
//{
//public:
//    d()
//    {
//        cout << "调用了d的无参构造函数" << endl;
//    }
//    d(int tbi, char tbc, string tbs, int tci, char tcc, string tcs,int b) :a(tbi, tbc, tbs), b(tbi, tbc, tbs,b), c(tci, tcc, tcs)
//    {
//        cout << "调用了d的有参构造函数" << endl;
//    }
//    ~d()
//    {
//        cout << "调用了d的析构函数" << endl;
//    }
//    //仅由对a的构造函数将a初始化，bc的不起作用，但必须有，类似于占位
//    //自上而下将派生类所有继承来的类全部初始化
//    //对虚基类的初始化只能由最后一个派生类单独调用虚基类的构造构造，其他直接父类对虚基类的构造不会实现
//};
//
//
//int main()
//{
//    d d(98, 'b', "bs", 99, 'c', "cs",100);
//    d.b::show();
//    d.b::showb();
//    d.c::show();
//    cout << "使用虚继承方式解决路径二义性时，派生类对象所占空间大小为：" << sizeof(d) << endl;
//
//    system("pause");
//    return 0;
//}


////两条路只有间接父类虚继承虚基类
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
// //不能直接构造A
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
// A<----C都是普通继承
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
//	c.A::showa();		//存在二义性
//	cout << endl;
//	c.B::showa();
//	c.showb();
//	c.showc();
//
//	system("pause");
//	return 0;
//}


//////上面那种改成B虚继承A，这种情况通不过编译
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