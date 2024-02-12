// 02 Password.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    getline(cin, name);

    string password;
    getline(cin, password);

    bool isLoopExit = false;

    while (!isLoopExit)
    {
        string inputPassword;
        getline(cin, inputPassword);

        if (inputPassword == password)
        {
            isLoopExit = true;
        }
    }

    string output = "Welcome ";
    output.append(name)
          .append("!");

    cout << output << endl;
}

//Напишете програма, която първоначално прочита име и парола на потребителски профил. След това чете парола за вход.
//•	при въвеждане на грешна парола: потребителя да се подкани да въведе нова парола.
//•	при въвеждане на правилна парола: отпечатваме "Welcome {username}!".