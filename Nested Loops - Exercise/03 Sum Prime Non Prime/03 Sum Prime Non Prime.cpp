// 03 Sum Prime Non Prime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <climits>

using namespace std;

enum StrFlags
{
    TOLOWER = 0b00000000000000000000000000000001,
    TOUPPER = 0b00000000000000000000000000000010,
    LOWEROROPPER = TOLOWER | TOUPPER,
    ALLFLAGS = 0b11111111111111111111111111111111
};

#define EMPTY ""
#define NEW_LINE "\r\n"

bool tryparsedouble(string num)
{
    try
    {
        double n = stod(num);
    }

    catch (exception& e)
    {
        return false;
    }

    return true;
}

string convertstring(string str, StrFlags flag)
{
    string s = EMPTY;

    const StrFlags LU = LOWEROROPPER;
    const StrFlags LOW = TOLOWER;
    const StrFlags UPP = TOUPPER;

    bool caseConvert = ((flag & LOWEROROPPER) == TOLOWER) || ((flag & LOWEROROPPER) == TOUPPER);

    if (caseConvert)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if ((flag & TOLOWER) == LOW)
            {
                s.append(1, tolower(str[i]));
            }

            if ((flag & TOUPPER) == UPP)
            {
                s.append(1, toupper(str[i]));
            }
        }

        return s;
    }

    return EMPTY;
}

int main()
{
    const string stop = "stop";

    bool isLoopExit = false;

    int primeSum = 0;
    int nonPrimeSum = 0;
    string s = EMPTY;    

    while (!isLoopExit)
    {
        string input;
        getline(cin, input);

        string inputLower = convertstring(input, TOLOWER);

        if (inputLower == stop)
        {
            isLoopExit = true;
        }
        else
        {
            int n = stoi(input);

            if (n < 0)
            {
                s.append("Number is negative.")
                 .append(NEW_LINE);
            }
            else
            {
                int num = 0;

                if (n == 2 || n == 3)
                {
                    num = n;
                }
                else if (n > 3)
                {
                    bool isNotPrime = false;
                    for (int i = 2; i * i <= n && !isNotPrime; i++)
                    {
                        if (n % i == 0)
                        {
                            num = 0;
                            isNotPrime = true;
                        }
                        else
                        {
                            num = n;
                        }
                    }
                }

                primeSum += num;
                nonPrimeSum += n - num;
            }
        }
    }

    s.append("Sum of all prime numbers is: ")
     .append(to_string(primeSum))
     .append(NEW_LINE)
     .append("Sum of all non prime numbers is: ")
     .append(to_string(nonPrimeSum));

    cout << s << endl;
}

//�������� ��������, ����� ���� �� ��������� ���� ����� � ���������, ������ �� �� ������ ������� "stop". �� �� ������ ������ �� ������ �������� ������ � ������ �� ������ �������� �������� �����. ��� ���� �� ��������� �� ������������ ������������� ����� �� ����� �� ����� ������, ��� �� ����� �� ������ ����������� ����� �� �� ������ �������� ��������� "Number is negative.". � ���� ������ �������� ����� �� �������� � �� �� ������� ��� ���� ���� �� ����� ����, � ���������� ���������� ������ ����������, ��������� ��������� �� �������� �����. 
//�� ������ �� �� ��������� �� ��� ���� ����� �������� ���� � ������� ������:
//�	"Sum of all prime numbers is: {prime numbers sum}"
//�	"Sum of all non prime numbers is: {nonprime numbers sum}"