// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

＃包括 “ stdafx.h中”
＃包括< iostream的>
使用 namespace  std;
class  CFeet
{
	保护：
		int feet;
	诠释英寸;
	上市：
		CFeet（）;
	CFeet（int fi，int ti）;
	〜CFeet（）;
	void  display（）;
	int  getfeet（）;
	int  getinches（）;
};
CFeet::CFeet（）
{
	英尺 = 0;
英寸 = 0;
COUT << “基类默认构造函数” << 脚 << “英尺” << 英寸 << “英寸” << ENDL;
}
CFeet::CFeet（int fi，int ti）
{
	脚 = fi;
英寸 = ti;
COUT << “基类构造函数” << 脚 << “英尺” << 英寸 << “英寸” << ENDL;
}
void  CFeet::display（）
{
	COUT << “显示” << 脚 << “英尺” << 英寸 << “英寸” << ENDL;
}
CFeet::〜CFeet（）
{
	COUT << “基类析构函数” << 脚 << “英尺” << 英寸 << “英寸” << ENDL;
}
int  CFeet::getfeet（）
{
	返回脚;
}
int  CFeet::getinches（）
{
	返回英寸;
}
class  CMyfeet：public  CFeet
{
	上市：
		CMyfeet（）;
	CMyfeet（int t，int i）;
	〜CMyfeet（）;
};
CMyfeet::CMyfeet（）
{
	COUT << “派生类默认构造函数” << 脚 << “英尺” << 英寸 << “英寸” << ENDL;
}
CMyfeet::CMyfeet（int t，int i）
{
	英尺 = t;
英寸 = 我;
COUT << “派生类构造函数” << 脚 << “英尺” << 英寸 << “英寸” << ENDL;
}
CMyfeet::〜CMyfeet（）
{
	COUT << “派生类析构函数” << 脚 << “英尺” << 英寸 << “英寸” << ENDL;
}

int  main（）
{
	CMyfeet of1;
OF1。display（）;
返回 0;
}