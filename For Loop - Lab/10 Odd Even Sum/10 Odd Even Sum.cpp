// 10 Odd Even Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        evenSum += num * (1 - (i % 2));
        oddSum += num * (i % 2);
    }
    string output = EMPTY;

    if (evenSum == oddSum)
    {
        output.append("Yes")
              .append(NEW_LINE)
              .append("Sum = ")
              .append(to_string(evenSum));
    }
    else
    {
        output.append("No")
              .append(NEW_LINE)
              .append("Diff = ")
              .append(to_string(abs(evenSum - oddSum)));
    }

    cout << output << endl;
}

//Да се напише програма, която чете n-на брой цели числа, подадени от потребителя и проверява дали сумата от числата на четни позиции е равна на сумата на числата на нечетни позиции. 
//•	Ако сумите са равни да се отпечатат два реда: "Yes" и на нов ред "Sum = " + сумата; 
//•	Ако сумите не са равни да се отпечат два реда: "No" и на нов ред "Diff = " + разликата. 
//Разликата се изчислява по абсолютна стойност. 