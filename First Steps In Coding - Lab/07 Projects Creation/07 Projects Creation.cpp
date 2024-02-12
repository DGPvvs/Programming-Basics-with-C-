// 07 Projects Creation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    const int ProjectHours = 3;    

    string name;
    int projectNum;

    cin >> name;
    cin >> projectNum;

    string output = EMPTY;

    output
        .append("The architect ")
        .append(name)
        .append(" will need ")
        .append(to_string(projectNum * ProjectHours))
        .append(" hours to complete ")
        .append(to_string(projectNum))
        .append(" project/s.");

    cout << output << endl;

    return 0;
}

//�������� ��������, ����� ��������� ����� ���� �� �� ���������� �� ���� ��������, �� �� ������� ��������� �� ������� ���������� ������. ����������� �� ���� ������ ������ ��� ����.
//����
//�� ��������� �� ����� 2 ����:
//1.����� �� ��������� - �����
//2.	���� �� ���������, ����� ������ �� ������� - ���� ����� � ��������� [0 � 100]
//�����
//�� ��������� �� ���������:
//�	"The architect {����� �� ���������} will need {���������� ������} hours to complete {���� �� ���������} project/s."

//�������� ��������, ����� ��������� ����� ���� �� �� ���������� �� ���� ��������,
//�� �� ������� ��������� �� ������� ���������� ������. ����������� �� ���� ������ ������ ��� ����.
