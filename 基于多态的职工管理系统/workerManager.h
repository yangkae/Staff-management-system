#pragma once //防止头文件重复包含
#include <iostream> //包含输入输入流头文件
using namespace std; //使用标准命名空间

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组的指针
	Worker ** m_EmpArray;

	//添加职工
	void Add_Emp();


	//析构函数
	~WorkerManager();
};