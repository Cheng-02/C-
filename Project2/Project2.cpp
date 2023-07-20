#include <iostream>
#include<string>
using namespace std;
int main()
{

	//一.string：可变长字符串的处理，vector一种集合或容器的概念

	//二.string类型简介：C++标准库的类型；

	
	string name = "dsd";
	cout << name << endl;

	string ss = name;//拷贝初始化
	int yy = 6;
	string s6(yy, 'a');//把a初始化成n个由a组成的字符串，但是不太推荐
	cout << s6 << endl;
	//三.string对象上的操作
	//a）判断string是否为空：empty(),返回布尔值
	/*if (ss.empty())
	{
		cout <<"kong" << endl;

	}*/
	//b) 返回长度：size()/lenth(), 返回字节或长度
	/*cout << ss.size() << endl;
	cout << ss.length() << endl;*/

	//c)s[n]:返回s中的第n个字符,若超过范围，则访问不了，会产生不可预测的结果


	//string s2 = "l love china";
	//if (s2.size() > 7) {

	//
	//cout << ss[1] << endl;
	//s2[4] = 's';
	//cout << s2 << endl; //l lose china

	//}
	////c)s4+s5：字符串的连接，连接后得到一个新的string对象
	//string s4 = "abcd";
	//string s5 = "hjkl";
	//string s7 = s4 + s5;
	//cout << s7 << endl;
	//.e)s8=s9:字符赋值对象，将s9赋给s8，并取代他；
	/*string s8 = "dsddsd";
		string s9 = "dsafasfa";
		cout << s8 << endl;
		s8 =s9;
		cout << s8 << endl;*/
	//.f)s10==s11:判断字符是否相等。大小写敏感：大小写不相等
	//长度相同，字符全相同
	//string s10="abc";
	//string s11{"abc"};

	//if (s10==s11)
	//{
	//	cout << "buxiangtong" << endl; //无法输出

	//}
	//.f)s10!=s11:判断字符是否不相等。大小写敏感：大小写不相等


	//string s10="ABC";
	//string s11{"abc"};

	//if (s10!=s11)
	//{
	//	cout << "buxiangtong" << endl;//输出成功

	//}


	g）s.c_str():返回一个字符串s中的内容指针。返回一个指向c字符串的指针常量，也就是以\0结尾。
		//这个函数的引入是为了与C语言兼容，在c语言中没有string类型，所以引入string类对象的c_str()成员变量函数





}