#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "identity.h"
#include "orderFile.h"
#include <vector>

class Teacher :public Identity {
public:
	// Ĭ�Ϲ���
	Teacher();

	// �вι���
	Teacher(int empId, string name, string pwd);

	// �˵�����
	virtual void operMenu();

	// �鿴����ԤԼ
	void showAllorder();

	// ���ԤԼ
	void validOrder();

	int m_EmpId;  // ��ʦ���
};