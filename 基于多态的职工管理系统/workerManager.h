#pragma once //��ֹͷ�ļ��ظ�����
#include <iostream> //��������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�����ռ�

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ�������ָ��
	Worker ** m_EmpArray;

	//���ְ��
	void Add_Emp();


	//��������
	~WorkerManager();
};