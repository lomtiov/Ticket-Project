#ifndef NUMTICKET_H
#define NUMTICKET_H

#include <stdexcept>

class NumTicket
{
private:
    int ticketNumber;
    int saleTime;
    int remainingTrips;

public:
    NumTicket(int ticketNumber, int saleTime, int remainingTrips);
    int getTicketNumber() const;
    int getSaleTime() const;
    int getRemainingTrips() const;
    bool attemptPass(int currentTime);
    bool operator==(const NumTicket& other) const;
    bool operator<(const NumTicket& other) const;
};

#endif // NUMTICKET_H
