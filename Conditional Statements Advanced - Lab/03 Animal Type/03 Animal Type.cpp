// 03 Animal Type.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool contains(string s, string f)
{
    int idx = s.find(f);
    return idx > -1;
}

int main()
{
    const string MammalsString = "dog";
    const string ReptilesString = "crocodiletortoisesnake";

    const string MammalsOutput = "mammal";
    const string ReptilesOutput = "reptile";
    const string OthersOutput = "unknown";

    string input;
    cin >> input;

    string output = OthersOutput;
    

    if (contains(MammalsString, input))
    {
        output = MammalsOutput;
    }
    else if (contains(ReptilesString, input))
    {
        output = ReptilesOutput;
    }

    cout << output << endl;
}

//Напишете програма, която отпечатва класа на животното според неговото име, въведено от потребителя.
//1.	dog->mammal
//2.	crocodile, tortoise, snake->reptile
//3.	others->unknown