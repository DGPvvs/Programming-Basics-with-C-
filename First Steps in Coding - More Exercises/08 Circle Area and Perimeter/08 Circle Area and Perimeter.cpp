// 08 Circle Area and Perimeter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

class myString :public string
{
private:
    const string EMPTY = "";
    const string NEW_LINE = "\r\n";

public:

    myString(const char* s) :string(s)
    {

    }

    myString() :string()
    {

    }

    string Empty()
    {
        return this->EMPTY;
    }
    string NewLine()
    {
        return this->NEW_LINE;
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

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    double r = stod(input);

    string output = myString().append(FormatDoubleNum(M_PI * r * r, 2)).append(myString().NewLine());
    output.append(FormatDoubleNum(2 * M_PI * r, 2));

    cout << output << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//Напишете програма, която чете от конзолата число r и пресмята и отпечатва лицето и периметъра на кръг / окръжност с радиус r, като форматирате изхода в следния вид: "<calculated area>"
//"<calculated parameter>".Форматирайте изходните данни до втория знак след десетичната запетая.