#include<iostream>
#include "workerManager.h"
using namespace std;

#include "employee.h"
#include "worker.h"

int main()
{

	Worker * worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showInfo();

	//实例化管理者对象
	WorkerManager wm;

	int choice = 0; //用户选项

	while (true)
	{
		//调用展示菜单成员函数
		wm.Show_Menu();
		cout << "请输入您的选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //退出系统
			wm.ExitSystem();
			break;
		case 1: //添加职工
			break;
		case 2: //显示职工
			break;
		case 3: //删除职工
			break;
		case 4: //修改职工
			break;
		case 5: //查找职工
			break;
		case 6: //排序职工
			break;
		case 7: //清空文件
			break;
		default:
			system("cls"); //清零
			break;
		}
	}




	system("pause");
	return 0;
}