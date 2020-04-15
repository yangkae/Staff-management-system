#include<iostream>
#include "workerManager.h"
using namespace std;

int main()
{
	//实例化管理者对象
	WorkerManager wm;

	//调用展示菜单成员函数
	wm.Show_Menu();

	system("pause");
	return 0;
}