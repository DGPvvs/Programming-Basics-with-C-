// 10 Weather Forecast - Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

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


int main()
{
    const string HOT = "Hot";
    const string WARM = "Warm";
    const string MILD = "Mild";
    const string COOL = "Cool";
    const string COLD = "Cold";
    const string UNKNOWN = "unknown";

    string input;
    getline(cin, input);
    double weather = stod(input);

    string output = myString().Empty();

    if (weather >= 5.0 && weather <= 11.9)
    {
        output = COLD;
    }
    else if (weather <= 14.9)
    {
        output = COOL;
    }
    else if (weather <= 20.0)
    {
        output = MILD;
    }
    else if (weather <= 25.9)
    {
        output = WARM;
    }
    else if (weather <= 35.0)
    {
        output = HOT;
    }
    else
    {
        output = UNKNOWN;
    }

    cout << output << endl;
}

//Напишете програма, която при въведени градуси (реално число) принтира какво е времето, като имате предвид следната таблица:
//Градуси Време
//26.00 - 35.00	Hot
//20.1 - 25.9	Warm
//15.00 - 20.00	Mild
//12.00 - 14.9	Cool
//5.00 - 11.9	Cold
//Ако се въведат градуси, различни от посочените в таблицата, да се отпечата "unknown".