// 08 On Time for the Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

#define EMPTY "";
#define NEW_LINE "\n\r"

using namespace std;

int main()
{
    int examHour, examMinutes;
    cin >> examHour >> examMinutes;

    int arrivalHour, arrivalMinutes;
        
    cin >> arrivalHour >> arrivalMinutes;

    int examTime = examHour * 60 + examMinutes;
    int arrivalTime = arrivalHour * 60 + arrivalMinutes;

    int difftime = examTime - arrivalTime;

    int hours = abs(difftime) / 60;
    int minutes = abs(difftime) % 60;

    string time = EMPTY;

    if (hours > 0)
    {
        string min = EMPTY;

        if (minutes < 10)
        {
            min.append("0");
        }

        min.append(to_string(minutes));
        time.append(to_string(hours))
            .append(":")
            .append(min)
            .append(" hours");
    }
    else
    {
        time.append(to_string(minutes))
            .append(" minutes");
    }

    string s = EMPTY;

    if (difftime >= 0)
    {
        if (difftime == 0)
        {
            s = "On time";
        }
        else if (difftime <= 30)
        {
            s.append("On time")
             .append(NEW_LINE)
             .append(time)
             .append(" before the start");
        }
        else
        {
            s.append("Early")
             .append(NEW_LINE)
             .append(time)
             .append(" before the start");
        }
    }
    else
    {
        s.append("Late")
         .append(NEW_LINE)
         .append(time)
         .append(" after the start");
    }

    cout << s << endl;
}

//������� ������ �� ����� �� ����� � ��������� ��� (�������� � 9:30 ����). ��� ���� � ��������� ���� � ����� ��� �� ���������� (�������� 9:40). ����� ��, �� ��������� � ����� �������, ��� � ���������� � ���� �� ������ ��� �� ������� ��� ����� ����. ��� � ���������� ��-���� ������ �� 30 ������, ��� � ��������. ��� � ����� ���� ���� �� ������, ��� � ��������. �������� ��������, ����� ������� ����� �� ����� � ����� �� ���������� � ��������� ���� ��������� � ����� �������, ���� � �������� ��� � �������� � � ����� ���� ��� ������ � �������� ��� ��������.
//����
//�� ��������� �� ����� 4 ���� ����� (�� ���� �� ���), �������� �� �����������:
//�	������� ��� ������� ��� �� ������ � ���� ����� �� 0 �� 23.
//�	������� ��� ������� ������ �� ������ � ���� ����� �� 0 �� 59.
//�	������� ��� ������� ��� �� ���������� � ���� ����� �� 0 �� 23.
//�	���������� ��� ������� ������ �� ���������� � ���� ����� �� 0 �� 59.
//�����
//�� ������� ��� �����������:
//�	�Late�, ��� ��������� �������� ��-����� �� ���� �� ������.
//�	�On time�, ��� ��������� �������� ����� � ���� �� ������ ��� �� 30 ������ ��-����.
//�	�Early�, ��� ��������� �������� ������ �� 30 ������ ����� ���� �� ������.
//��� ��������� �������� � ���� ������ ������� �� ���� �� ������, ����������� �� ��������� ���:
//�	
//�mm minutes after the start� �� ���������� ��� ���.
//�	�hh:mm hours after the start� �� ���������� �� 1 ��� ��� ������. �������� ������ ��������� � 2 �����, �������� �1:03�.