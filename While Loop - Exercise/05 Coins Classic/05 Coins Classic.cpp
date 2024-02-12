// 05 Coins Classic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    double inputValue = stod(input);

    int counter = 0;
    inputValue *= 100;
    int resultValue = (int)inputValue;

    for (int i = 1; i <= 8; i++)
    {
        int a = 0;
        switch (i)
        {
        case 1:
            a = 200;
            break;
        case 2:
            a = 100;
            break;
        case 3:
            a = 50;
            break;
        case 4:
            a = 20;
            break;
        case 5:
            a = 10;
            break;
        case 6:
            a = 5;
            break;
        case 7:
            a = 2;
            break;
        case 8:
            a = 1;
            break;
        }

        int n = resultValue / a;
        resultValue -= n * a;
        counter += n;
    }

    cout << counter << endl;
}

//Производителите на вендинг машини искали да направят машините си да връщат възможно най-малко монети ресто. Напишете програма, която приема сума - рестото, което трябва да се върне и изчислява с колко най-малко монети може да стане това.