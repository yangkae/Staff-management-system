#include "workerManager.h"


WorkerManager::WorkerManager()
{
	this->m_EmpNum = 0;

	this->m_EmpArray = NULL;

}
// չʾ�˵�
void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//���ְ��
void WorkerManager::Add_Emp()
{
	cout << "���������ְ�������� " << endl;

	int addNum = 0; //�����û���������
	cin >> addNum;

	if (addNum > 0) {
		//���
		//��������¿ռ��С
		int newsize = this->m_EmpNum + addNum; //�¿ռ�����=ԭ����¼����+��������

		//�����¿ռ�
		Worker ** newSpace =new Worker*[newsize];

		//��ԭ���ռ�����ݿ������¿ռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect; //����

			cout << "������� " << i + 1 << "����ְ����ţ� " << endl;
			cin >> id;

			cout << "������� " << i + 1 << "����ְ�������� " << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ�� " << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
			case 2:
				worker = new Manager(id, name, 2);
			case 3:
				worker = new Boss(id, name, 3);
			default:
				break;
			}
			//������ְ��ְ�𣬱��浽����
			newSpace[this->m_EmpNum + i] = worker;

		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ�ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newsize;

		//��ʾ�ɹ����
		cout << "�ɹ����" << addNum << "����ְ��" << endl;
	}
	else
	{
		cout << "������������" << endl;
	}
}

WorkerManager::~WorkerManager()
{

}