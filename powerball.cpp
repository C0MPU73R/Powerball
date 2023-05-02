#pragma once
#include "powerball.h"

powerball::powerball()
{
}

void powerball::collectTickets(vector<ticket*> tickets)
{
	this->tickets = tickets;
}

void powerball::setWinningTicket(ticket winner)
{
	//this->winningTicket = winner;
}
