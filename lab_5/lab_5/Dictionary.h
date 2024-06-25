#pragma 
#include <cstring>
#include "stdafx.h"
#define DICTNAMEMAXSIZE 20 // ������������ ������ ����� �������
#define DICTMAXSIZE 100 // ������������ ������� �������
#define ENTRYNAMEMAXSIZE 30 // ������������ ����� ����� � �������
#define THROW01 "Create: �������� ������ ����� �������\n"
#define THROW02 "Create: �������� ������ ������������ ������� �������\n"
#define THROW03 "AddEntry: ������������ �������\n"
#define THROW04 "AddEntry: ������������ ��������������\n"
#define THROW05 "GetEntry: �� ������ �������\n"
#define THROW06 "DelEntry: �� ������ �������\n"
#define THROW07 "UpdEntry: �� ������ �������\n"
#define THROW08 "UpdEntry: ������������ ��������������\n"

namespace MyDictionary
{
	struct Entry
	{
		int id; // �������������(����������)
		char name[ENTRYNAMEMAXSIZE]; // ���������� ����������
	};
	struct Instance // ��������� �������
	{
		char name[DICTNAMEMAXSIZE]; // ������������ �������
		int maxsize; // ������������ ������� �������
		int size; // ������� ������ �������
		Entry* dictionary; // ������ �������� �������
	};
	Instance Create( // ������� �������
		const char name[DICTNAMEMAXSIZE], // ��� �������
		int size // ������� ������� < DICTNAMEMAXSIZE
	);
	void AddEntry( // �������� ������� �������
		Instance& inst, // ��������� �������
		Entry ed // ������� �������
	);
	void DelEntry( // ������� ������� �������
		Instance& inst, // ��������� �������
		int id // ������������� ���������� �������� (����������)
	);
	void UpdEntry( // �������� ������� �������
		Instance& inst, // ��������� �������
		int id, // ������������� ���������� �������� (����������)
		Entry new_ed // ����� ������� �������
	);
	Entry GetEntry(
		Instance& inst, // ��������� �������
		int id // ������������� ���������� �������� (����������)
	);
	void Print(Instance d); // ������ �������
	void Delete(Instance& d); // ������� �������
}