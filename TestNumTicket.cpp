#include <iostream>
#include <cassert>
#include <stdexcept>
#include <string>
#include "NumTicket.h"

void TestNumTicket()
{
    NumTicket ticket1(1, 1000, 5);    // ������������ ������������ � ����������
    assert(ticket1.getTicketNumber() == 1);
    assert(ticket1.getSaleTime() == 1000);
    assert(ticket1.getRemainingTrips() == 5);
    ticket1.attemptPass(1200);    // ������������ ������� ������������� ������
    assert(ticket1.getRemainingTrips() == 4);
    try
    {
        NumTicket ticket2(-1, 1000, 5);
        assert(false);  // �� ������ ���� �������� ������� ����� � ������������� �������
    }
    catch (std::invalid_argument& e)
    {
        assert(std::string(e.what()).find("Invalid ticket number") != std::string::npos);
    }

    try
    {
        NumTicket ticket3(1, 1000, -1);
        assert(false);  // �� ������ ���� �������� ������� ����� � �������������� ����������� ���������
    }
    catch (std::invalid_argument& e)
    {
        assert(std::string(e.what()).find("Invalid remaining trips") != std::string::npos);
    }
}

int main()
{
    TestNumTicket();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
