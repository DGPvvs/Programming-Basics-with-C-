// 08 Cinema Ticket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> prices = {
				{ "Monday", 12 },
				{ "Tuesday", 12 },
				{ "Wednesday", 14 },
				{ "Thursday", 14 },
				{ "Friday", 12 },
				{ "Saturday", 16 },
				{ "Sunday", 16 },
	};

	string day;
	cin >> day;

	cout << prices[day];
}

//�� �� ������ �������� ����� ���� ��� �� ���������(�����) � ������� �� ����������� � �������� �� ��������� ������ �� ����� �� ���� ������ ���� �� ��������� :
//Monday	Tuesday 	Wednesday	Thursday	Friday	Saturday	Sunday
//12	    12	        14	        14	        12	    16	        16