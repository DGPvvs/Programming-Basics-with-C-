// 06 Vowels Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string Vowels = " aeiou";

    string word;
    getline(cin, word);

    int sum = 0;

    for (int i = 0; i < word.length(); i++)
    {
        int index = Vowels.find(word[i]);

        if (index > -1)
        {
            sum += index;
        }
    }

    cout << sum << endl;
}

//�� �� ������ ��������, ����� ���� ����� (������), ������� �� �����������, � ��������� � ��������� ������ �� ����������� �� �������� ����� ������ ��������� ��-����:
//�����	    a	e	i	o	u
//��������	1	2	3	4	5
