#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include <fstream>
#include "globalFile.h"
#include "computerRoom.h"
#include <vector>
#include "orderFile.h"

// ѧ����
class Student :public Identity
{
public:
	// Ĭ�Ϲ���
	Student();

	// �вι��죨ѧ�š����������룩
	Student(int id, string name, string pwd);

	// �˵�����
	virtual void operMenu();

	// ����ԤԼ
	void applyOrder();

	// �鿴�ҵ�ԤԼ
	void showMyOrder();

	// �鿴����ԤԼ
	void showAllorder();

	// ȡ��ԤԼ
	void cancelOrder();

	// ѧ��ѧ��
	int m_Id;

	// ��������
	vector<ComputerRoom> vCom;
};