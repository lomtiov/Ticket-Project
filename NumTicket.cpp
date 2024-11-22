#include "NumTicket.h"

NumTicket::NumTicket(int ticketNumber, int saleTime, int remainingTrips)
    : ticketNumber(ticketNumber), saleTime(saleTime), remainingTrips(remainingTrips)
{
    if (ticketNumber <= 0) throw std::invalid_argument("Invalid ticket number");
    if (remainingTrips < 0) throw std::invalid_argument("Invalid remaining trips");
}

int NumTicket::getTicketNumber() const
{
    return ticketNumber;
}
int NumTicket::getSaleTime() const
{
    return saleTime;
}
int NumTicket::getRemainingTrips() const
{
    return remainingTrips;
}

bool NumTicket::attemptPass(int currentTime)
{
    if (remainingTrips <= 0) return false;
    remainingTrips--;
    return true;
}

bool NumTicket::operator==(const NumTicket& other) const
{
    return ticketNumber == other.ticketNumber;
}

bool NumTicket::operator<(const NumTicket& other) const
{
    return ticketNumber < other.ticketNumber;
}
