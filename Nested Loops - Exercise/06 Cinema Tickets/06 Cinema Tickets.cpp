// 06 Cinema Tickets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

int main()
{
    const string STUDENT = "student";
    const string STANDARD = "standard";
    const string KID = "kid";
    const string FINISH = "Finish";
    const string END = "End";

    string output = EMPTY;

    map<string, int> tickets = 
    {
        { STUDENT, 0 },
        { STANDARD, 0 },
        { KID, 0 }
    };

    bool isFinish = false;

    while (!isFinish)
    {
        string movie;
        getline(cin, movie);

        if (movie == FINISH)
        {
            isFinish = true;
        }
        else
        {
            string input;
            getline(cin, input);
            int seats = stoi(input);

            bool isEnd = false;
            int currentSeats = 0;

            while (!isEnd)
            {
                string typeTicket;
                getline(cin, typeTicket);

                if (typeTicket == END)
                {
                    isEnd = true;
                }
                else
                {
                    currentSeats++;
                    tickets[typeTicket]++;
                }

                if (isEnd || currentSeats == seats)
                {
                    isEnd = true;
                    output.append(movie)
                          .append(" - ")
                          .append(formatDoubleNum((currentSeats * 100.0 / seats), 2))
                          .append("% full.")
                          .append(NEW_LINE);
                }
            }
        }
    }

    int tottalTickets = 0;

    map<string, int>::iterator it;

    for (it = tickets.begin(); it != tickets.end(); it++)
    {
        tottalTickets += it->second;
    }

    
    output.append("Total tickets: ")
          .append(to_string(tottalTickets))
          .append(NEW_LINE)
          .append(formatDoubleNum((tickets[STUDENT] * 100.0 / tottalTickets), 2))
          .append("% student tickets.")
          .append(NEW_LINE)
          .append(formatDoubleNum((tickets[STANDARD] * 100.0 / tottalTickets), 2))
          .append("% standard tickets.")
          .append(NEW_LINE)
          .append(formatDoubleNum((tickets[KID] * 100.0 / tottalTickets), 2))
          .append("% kids tickets.")
          .append(NEW_LINE);

    cout << output;
}

//������ ������ � �� �������� ��������, ����� �� ��������� �������� �� �������� �� ����� ��� �� ����������� ������: ����������(student), ����������(standard) � ������(kid), �� ������ ���������. ������ �� ��������� � ����� �������� �� ������ � ��������� �� ����� ���� ���������.
//����
//������ � �������� �� ���� ����� � �����:
//�	�� ������ ��� �� ���������� �� ��������� "Finish" - ��� �� ����� � �����
//�	�� ����� ��� � ���������� ����� � ������ �� ����� ��������� � ���� ����� [1 � 100]
//�	�� ����� ����, �� ���� �� ���� ��� �� ���������� �� ���������� ����� � ������ ��� �� ���������� �� ��������� "End":
//o ���� �� ��������� ����� - ����� ("student", "standard", "kid")
//�����
//�� ��������� ������ �� �� ������� �������� ������:
//�	���� ����� ���� �� �� ��������, ����� �������� �� ���� ������ � �����
//"{����� �� �����} - {������� ����������� �� ������}% full."
//�	��� ���������� �� ��������� "Finish" �� �� ��������� ������ ����:
//o "Total tickets: {������ ���� �������� ������ �� ������ �����}"
//o "{������� �� ������������ ������}% student tickets."
//o "{������� �� ������������ ������}% standard tickets."
//o "{������� �� �������� ������}% kids tickets."