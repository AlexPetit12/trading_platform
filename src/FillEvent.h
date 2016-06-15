/*
 * FillEvent.h
 *
 *  Created on: 2016-05-31
 *      Author: fredaugermorin
 */

#ifndef FILLEVENT_H_
#define FILLEVENT_H_

#include "Event.h"
//#include "Poco/DateTime.h" would be nice to actually use DateTime objects
#include <string>


class FillEvent : public Event
{
public:
	FillEvent(const std::string& time_,const std::string& ticker_ , 
                const std::string& action_,const int& quantity_ , 
                const std::string& exchange_,const double& price_,
                const double& commission_);

	std::string getDateTime()const;
	void setDateTime(const std::string& time_);

	std::string getTicker() const;
	void setTicker(const std::string& ticker_);

	std::string getAction()const;
	void setAction(const std::string& action_);

	int getQty()const;
	void setQty(const int& quantity_);

	std::string getExchange()const;
	void setExchange(const std::string& exchange_);

	double getPrice()const;
	void setPrice(const double& price_);

	double getCommission()const;
	void setCommission(const double& commission_);

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
