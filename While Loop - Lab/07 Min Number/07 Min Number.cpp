// 07 Min Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    const string Stop = "Stop";

    bool isNotFirst = false;
    bool isLoopExit = false;

    int minimum = 0;

    while (!isLoopExit)
    {
        string input;
        getline(cin, input);

        if (input == Stop)
        {
            isLoopExit = true;
        }
        else
        {
            int current = stoi(input);

            if (isNotFirst)
            {
                minimum = min(minimum, current);
            }
            else
            {
                minimum = current;
                isNotFirst = true;
            }
        }
    }

    cout << minimum << endl;
}


//�������� ��������, ����� �� ���������� �� ��������� "Stop", ���� ���� �����, �������� �� ����������� � ������ ���-������� ������� ���. ������� �� �� ���� ����� �� ���. 