// 03 Stream Of Letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string END = "End";

    bool isLoopExit, isC, isO, isN;

    isLoopExit = isC = isO = isN = false;

    string output = string();

    while (!isLoopExit)
    {
        string s;
        getline(cin, s);

        if ( s== END)
        {
            isLoopExit = true;
        }
        else
        {
            if ((s == "c") && (!isC))
            {
                isC = true;
            }
            else if ((s == "o") && (!isO))
            {
                isO = true;
            }
            else if ((s == "n") && (!isN))
            {
                isN = true;
            }
            else
            {
                char key = s[0];
                if (((key >= 'A') && (key <= 'Z')) || ((key >= 'a') && (key <= 'z')))
                {
                    output.append(s);
                }
            }
            
            if (isC && isO && isN)
            {
                output.append(" ");
                cout << output;
                output = "";
                isC = isO = isN = false;
            }            
        }
    }    
}

//�������� ��������, ����� ������� ������ ��������� � �������� �� �������.
//�� �� ��������� �� ���� �� ��� �� ���������� �� ��������� "End".
//������ �� ��������� �� ������� � ���� �� �������� ��.
//���������, ����� �� �� �������� ����� ������ �� ����� ����������.
//������ ������ � ������ �� ��������� �� ����� ������� �� ��� ����� � "c", "o" � "n".
//��� ������� ���������� �� ���� �� ���� �����, �� �� ������� ���� ��������, �� �� �� ������� � ������.
//��� ����� �������� ����� ������� �� ������� �������� � ������.
//���� ���� �� ������� � ����� ������� �� ���������, �� ������ ������ � �������� " ".
//������� �� ���� ����, ����� �� ����� ����� ���� ������� �������, �� �� ���� ����������.
//����
//�� ��������� �� ���� �������� �� ������ � ���� ������ �� ����� �� ���������� �� ��������� "End".
//�����
//�� ��������� �� ������ �� ���� ��� ����� ���� ���� ������� �������, �������� �� ��������.