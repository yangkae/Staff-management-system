#include<iostream>
#include "workerManager.h"
using namespace std;

#include "employee.h"
#include "worker.h"

int main()
{

	Worker * worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();

	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0; //�û�ѡ��

	while (true)
	{
		//����չʾ�˵���Ա����
		wm.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1: //���ְ��
			break;
		case 2: //��ʾְ��
			break;
		case 3: //ɾ��ְ��
			break;
		case 4: //�޸�ְ��
			break;
		case 5: //����ְ��
			break;
		case 6: //����ְ��
			break;
		case 7: //����ļ�
			break;
		default:
			system("cls"); //����
			break;
		}
	}




	system("pause");
	return 0;
}