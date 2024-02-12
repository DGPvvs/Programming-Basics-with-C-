// 07 Fuel Tank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class myString :public string
{
public:
    myString(const char* s) :string(s)
    {

    }

    myString() :string()
    {

    }

    bool Contains(string f)
    {
        int idx = this->find(f);
        return idx > -1;
    }

    string ToLower()
    {
        string s = string("");

        string::iterator it;
        for (it = this->begin(); it != this->end(); it++)
        {
            s.append(1, tolower(*it));
        }

        return s;
    }

    string ToUpper()
    {
        string s = string("");

        string::iterator it;
        for (it = this->begin(); it != this->end(); it++)
        {
            s.append(1, toupper(*it));
        }

        return s;
    }

    ~myString()
    {

    }
};

int main()
{
    const string Diesel = "Diesel";
    const string Gasoline = "Gasoline";
    const string Gas = "Gas";

    myString gas;
    getline(cin, gas);

    string input;
    getline(cin, input);
    double volume = stod(input);

    bool isGas = gas == Gasoline || gas == Diesel || gas == Gas;

    string output = string();

    if (isGas)
    {
        if (volume >= 25)
        {
            output.append("You have enough ")
                  .append(gas.ToLower())
                  .append(".");
        }
        else
        {
            output.append("Fill your tank with ")
                  .append(gas.ToLower())
                  .append("!");
        }
    }
    else
    {
        output.append("Invalid fuel!");
    }

    cout << output << endl;
}

//�������� ��������, ����� ������� ���� ���������� �� ���� �������� �������� ��� ����� �� ������������ �� �������� ��� ��. �� ��������� �� ����� ��� ���� � ����� � ������ �����, �� ������ ��� �� ���� ���� �� �������� � ����� � �����������: "Diesel", "Gasoline" ��� "Gas", � �� ������ ������� ������, ����� ��� � ����������. ��� ������� ������ �� ������ ��� ����� �� 25, �� ��������� �� �� �������� "You have enough {���� �� ��������}.", ��� �� ��-����� �� 25, �� �� �������� "Fill your tank with {���� �� ��������}!". � ������, �� ���� �������� ������, �������� �� ����������, �� �� �������� "Invalid fuel!".