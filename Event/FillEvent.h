/*
 * FillEvent.h
 *
 *  Created on: 2016-05-31
 *      Author: fredaugermorin
 */

#ifndef FILLEVENT_H_
#define FILLEVENT_H_

#include "Event.h"
//#include "Poco/DateTime.h" would be nice tu actually use DateTime object
#include <string>


class FillEvent : public Event
{
public:
	FillEvent(std::string time_,std::string ticker_ , std::string action_, int quantity_ , std::string exchange_, double price_,double commission_);

	std::string getDateTime()const;
	void setDateTime(std::string time_);

	std::string getTicker() const;
	void setTicker(std::string ticker_);

	std::string getAction()const;
	void setAction(std::string);

	int getQty()const;
	void setQty(int quantity_);

	std::string getExchange()const;
	void setExchange(std::string exchange_);

	double getPrice()const;
	void setPrice(double price_);

	double getCommission()const;
	void setCommission(double commission_);

	void printFill();
private:
	std::string m_time;
	std::string m_ticker;
	std::string m_action;
	int m_quantity;
	std::string m_exchange;
	double m_price;
	double m_commission;
};



#endif /* FILLEVENT_H_ */
