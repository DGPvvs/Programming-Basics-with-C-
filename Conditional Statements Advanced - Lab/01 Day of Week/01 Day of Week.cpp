// 01 Day of Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string data[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Error"};
    string numOfWeek = "1234567";

    int dayOfWeek;
    cin >> dayOfWeek;

    string result;
    int idx = numOfWeek.find(to_string(dayOfWeek));

    if (idx == -1)
    {
        result = data[7];
    }
    else
    {
        result = data[dayOfWeek - 1];
    }

    cout << result <<endl;
}

//Напишете програма, която чете цяло число, въведено от потребителя, и отпечатва ден от седмицата(на английски език), в граници[1...7] или отпечатва "Error" в случай, че въведеното число е невалидно.