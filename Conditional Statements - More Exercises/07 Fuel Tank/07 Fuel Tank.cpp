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

//Напишете програма, която познава дали резервоара на едно превозно средство има нужда от презареждане на горивото или не. От конзолата се четат два реда – текст и реално число, на първия ред се чете типа на горивото – текст с възможности: "Diesel", "Gasoline" или "Gas", а на втория литрите гориво, които има в резервоара. Ако литрите гориво са повече или равни на 25, на конзолата да се отпечата "You have enough {вида на горивото}.", ако са по-малко от 25, да се отпечата "Fill your tank with {вида на горивото}!". В случай, че бъде въведено гориво, различно от посоченото, да се отпечата "Invalid fuel!".