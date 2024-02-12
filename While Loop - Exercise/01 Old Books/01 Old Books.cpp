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

//Ани отива до родния си град след много дълъг период извън страната. Прибирайки се вкъщи тя вижда старата библиотека на баба си и си спомня за любимата си книга. Помогнете на Ани, като напишете програма в която тя въвежда търсената от нея книга(текст). Докато Ани не намери любимата си книга или не провери всички в библиотеката, програмата трябва да чете всеки път на нов ред името на всяка следваща книга (текст). Книгите в библиотеката са свършили щом получите текст "No More Books".
//•	Ако не открие търсената книгата да се отпечата на два реда: 
//o "The book you search is not here!"
//o "You checked {брой} books."
//•	Ако открие книгата си се отпечатва един ред:
//o "You checked {брой} books and found it."