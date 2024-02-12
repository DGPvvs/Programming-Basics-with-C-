// 01 Old Books.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    const string NoMoreBooks = "No More Books";

    string book;
    getline(cin, book);

    bool isLoopExit = false;
    bool isBookFound = false;

    int booksCount = 0;

    while (!isLoopExit)
    {
        string inputBook;
        getline(cin, inputBook);

        if (inputBook == NoMoreBooks)
        {
            isLoopExit = true;
        }
        else
        {
            if (book == inputBook)
            {
                isBookFound = true;
                isLoopExit = true;
            }

            booksCount++;
        }
    }

    string output = EMPTY;

    if (isBookFound)
    {
        output.append("You checked ")
            .append(to_string(booksCount - 1))
            .append(" books and found it.");
    }
    else
    {
        output.append("The book you search is not here!")
            .append(NEW_LINE)
            .append("You checked ")
            .append(to_string(booksCount))
            .append(" books.");
    }

    cout << output << endl;
}

//��� ����� �� ������ �� ���� ���� ����� ����� ������ ����� ��������. ���������� �� ����� �� ����� ������� ���������� �� ���� �� � �� ������ �� �������� �� �����. ��������� �� ���, ���� �������� �������� � ����� �� ������� ��������� �� ��� �����(�����). ������ ��� �� ������ �������� �� ����� ��� �� ������� ������ � ������������, ���������� ������ �� ���� ����� ��� �� ��� ��� ����� �� ����� �������� ����� (�����). ������� � ������������ �� �������� ��� �������� ����� "No More Books".
//�	��� �� ������ ��������� ������� �� �� �������� �� ��� ����: 
//o "The book you search is not here!"
//o "You checked {����} books."
//�	��� ������ ������� �� �� ��������� ���� ���:
//o "You checked {����} books and found it."