// 04 Personal Titles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double ageRange = 16.0;
    const char male = 'm';

    double age;
    char sex;
    cin >> age >> sex;

    string output;

    if (sex == male)
    {
        if (age < ageRange)
        {
            output = "Master";
        }
        else
        {
            output = "Mr.";
        }
    }
    else
    {
        if (age < ageRange)
        {
            output = "Miss";
        }
        else
        {
            output = "Ms.";
        }
    }

    cout << output << endl;
}

//Да се напише конзолна програма, която прочита възраст(реално число) и пол('m' или 'f'), въведени от потребителя и отпечатва обръщение измежду следните :
//•	"Mr." – мъж(пол 'm') на 16 или повече години
//•	"Master" – момче(пол 'm') под 16 години
//•	"Ms." – жена(пол 'f') на 16 или повече години
//•	"Miss" – момиче(пол 'f') под 16 години