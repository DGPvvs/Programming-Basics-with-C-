// 05 Coins.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    int monney[] = {200, 100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < sizeof(monney) / sizeof(monney[0]); i++)
    {

        int n = resultValue / monney[i];
        resultValue -= n * monney[i];
        counter += n;
    }

    cout << counter << endl;
}

//Производителите на вендинг машини искали да направят машините си да връщат възможно най-малко монети ресто. Напишете програма, която приема сума - рестото, което трябва да се върне и изчислява с колко най-малко монети може да стане това.