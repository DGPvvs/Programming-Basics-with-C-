// 09 Fruit or Vegetable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool contains(string s, string f)
{
    int idx = s.find(f);
    return idx > -1;
}

int main()
{
    const string Fruit = "fruit";
    const string Fruits = "bananaapplekiwicherrylemongrapes";
    const string Vegetable = "vegetable";
    const string Vegetables = "tomatocucumberpeppercarrot";
    const string Unknown = "unknown";

    string input;
    cin >> input;

    string output = contains(Fruits, input) 
        ? Fruit
        : contains(Vegetables, input)
        ? Vegetable
        : Unknown;

    cout << output << endl;
}

//Да се напише програма, която чете име на продукт, въведено от потребителя и проверява дали е плод или зеленчук.
//•	Плодовете "fruit"са: banana, apple, kiwi, cherry, lemon и grapes
//•	Зеленчуците "vegetable" са : tomato, cucumber, pepper и carrot
//•	Всички останали са : "unknown"
//Да се изведе "fruit", "vegetable" или "unknown" според въведения продукт.