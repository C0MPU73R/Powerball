#include "ticket.h"

ticket::ticket(vector<ball*> ball_numbers)
{
	for (int index = 0; index < ball_numbers.size(); index++)
	{
		numbers.push_back(*ball_numbers[index]);
	}
}

vector<ball> ticket::getTicketNumbers()
{
	return this->numbers;
}
