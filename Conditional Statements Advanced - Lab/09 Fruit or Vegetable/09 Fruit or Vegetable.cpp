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

//�� �� ������ ��������, ����� ���� ��� �� �������, �������� �� ����������� � ��������� ���� � ���� ��� ��������.
//�	��������� "fruit"��: banana, apple, kiwi, cherry, lemon � grapes
//�	����������� "vegetable" �� : tomato, cucumber, pepper � carrot
//�	������ �������� �� : "unknown"
//�� �� ������ "fruit", "vegetable" ��� "unknown" ������ ��������� �������.