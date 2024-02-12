// 04 Walking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    const int GoalWalk = 10000;
    const string GoingHome = "Going home";

    int tottalWalk = 0;

    bool isLoopExit = false;

    while (!isLoopExit)
    {
        string input;
        getline(cin, input);

        if (input == GoingHome)
        {
            getline(cin, input);
            isLoopExit = true;
        }

        tottalWalk += stoi(input);

        if (tottalWalk - GoalWalk >= 0)
        {
            isLoopExit = true;
        }
    }

    string output = EMPTY;

    int diff = tottalWalk - GoalWalk;

    if (diff >= 0)
    {
        output.append("Goal reached! Good job!");
    }
    else
    {
        output.append(to_string(-1 * diff))
              .append(" more steps to reach goal.");
    }

    cout << output << endl;
}
//���� ���� �� ������� ������������ ����� �� ����� � �� � ��������� �� ��� �� ����� 10 000 ������ ����� ���.����� ��� ����� � ����� ������� �� ������ � �� ���� �� �� ������� ����� �� �������� ����� ��.�������� ��������, ����� ���� �� ��������� �� ����� ������ �������� �� ����� ��� ���� ������ ���� ���� � ������ �������� ����� �� �� �� ������� "Goal reached! Good job!"  � ����� ������ ������ � ��������� "{��������� ����� ��������} steps over the goal!".
//��� ���� �� �� ������� ����� ����, �� �� ������ ��������� "Going home" � �� ������ ��������, ����� � ��������� ������ �� �������.���� �����, ��� �� � ������ �� �������� ����� ��, �� ��������� ������ �� �� ������ : "{��������� ����� ��������} more steps to reach goal."