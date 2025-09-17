#pragma once
#pragma warning(disable:4996)

#include <iostream>
#include <iomanip>
#include <string>

#include <queue>
using namespace std;

class clsQueueLine
{
	string _Pre_Fix="";
	int _TimePerClient=0;
	int _TotalNumberOfClients=0;
	int _NumberOfWaitingClients=0;

	struct _stTicket {

		string TicketNumber;
		string Date_Time;
		int WaitingClient;
		int TimeToServeInMinutes;


	};

	string GetSystemDateAndTimeString()
	{
		//system date
		time_t t = time(0);
		tm* now = localtime(&t);

		short Day, Month, Year, Hour, Minute, Second;

		Year = now->tm_year + 1900;
		Month = now->tm_mon + 1;
		Day = now->tm_mday;
		Hour = now->tm_hour;
		Minute = now->tm_min;
		Second = now->tm_sec;

		return (to_string(Day) + ":" + to_string(Month) + ":" + to_string(Year) + " - " + to_string(Hour) + ":" + to_string(Minute)
			+ ":" + to_string(Second));
	}

	_stTicket _FillTicketInfo() {

		_stTicket Ticket;
		Ticket.TicketNumber = _Pre_Fix + to_string(_TotalNumberOfClients);
		Ticket.Date_Time = GetSystemDateAndTimeString();
		Ticket.WaitingClient = _NumberOfWaitingClients;
		Ticket.TimeToServeInMinutes = _NumberOfWaitingClients * _TimePerClient;
		return Ticket;
	}

	queue<_stTicket>_qClients;
	queue<_stTicket>_temp;

	void _ClearTempQueue() {
		for (int i = 0; i < _TotalNumberOfClients; i++)
		{
			_qClients.push(_temp.front());
			_temp.pop();
		}
	
	}

public:

	clsQueueLine(string Prefix, int TimeRequiredToServeOneClient) {
	
		_Pre_Fix = Prefix;
		_TimePerClient = TimeRequiredToServeOneClient;
	
	
	}

	void IssueTicket() {

		_TotalNumberOfClients++;
		_stTicket ClientTicket;
		ClientTicket = _FillTicketInfo();
		_qClients.push(ClientTicket);
		_NumberOfWaitingClients++;


	}
	void PrintInfo() {
	
		cout << "\n\t\t\t\t\t\t-----------------------------\n";
		cout << "\t\t\t\t\t\t        Queue Info\n";
		cout << "\n\t\t\t\t\t\t-----------------------------\n";
		cout << "\t\t\t\t\t\t\t  Prefix = " << _Pre_Fix << endl;
		cout << "\t\t\t\t\t\t\tTotal Tickets = " << _TotalNumberOfClients << endl;
		cout << "\t\t\t\t\t\t\tServed Clients = " << _TotalNumberOfClients-_NumberOfWaitingClients << endl;
		cout << "\t\t\t\t\t\t\tWaiting Clients = " << _NumberOfWaitingClients << endl;
		cout << "\n\t\t\t\t\t\t-----------------------------\n";

	
	}

	void PrintTicketsLineRTL() {
	
	
		cout << "\n\n\t\t\t\t\tTickets: "; 
	
		for (int i = 1; i <= _TotalNumberOfClients; i++) {

			cout << _qClients.front().TicketNumber<<" <-- ";

			_temp.push(_qClients.front());
			_qClients.pop();
		}
		_ClearTempQueue();
		

	}
	void PrintTicketsLineLTR() {


		cout << "\n\n\t\t\t\t\tTickets: ";

		for (int i = _TotalNumberOfClients; i >= 1; i--) {

			cout << _qClients.front().TicketNumber << " --> ";

			_temp.push(_qClients.front());
			_qClients.pop();
		}
		_ClearTempQueue();

	}

	void PrintAllTickets() {
	
		cout << "\n\n\t\t\t\t\t\t-----------Tickets-----------\n";

		for (int i = 0; i < _TotalNumberOfClients; i++)
		{

			cout << "\n\t\t\t\t\t\t-----------------------------\n";
			cout << "\t\t\t\t\t\t\t\t  " << _qClients.front().TicketNumber << endl;
			cout << "\t\t\t\t\t\t\t" << _qClients.front().Date_Time << endl;
			cout << "\t\t\t\t\t\t\tWaiting Clients: " << _qClients.front().WaitingClient << endl;
			cout << "\t\t\t\t\t\t\t  Serve Time In ";
			cout << "\n\t\t\t\t\t\t\t" << _qClients.front().TimeToServeInMinutes << " Minutes" << endl;
			cout << "\t\t\t\t\t\t-----------------------------\n";

			_temp.push(_qClients.front());
			_qClients.pop();
		}
		_ClearTempQueue();
	
	}
	void ServeNextClient() {
	
	
		_NumberOfWaitingClients--;
		_qClients.pop();
	
	}

};

