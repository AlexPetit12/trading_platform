/*
 * OrderEvent.h
 *
 *  Created on: 2016-05-31
 *      Author: fredaugermorin
 */

#ifndef ORDEREVENT_H_
#define ORDEREVENT_H_

#include "Event.h"

#include <iostream>

class OrderEvent : public Event
{
public:

	OrderEvent(const std::string& ticker_,const std::string& action_,
                const int& quantity_); //constructor

	virtual ~OrderEvent(); //Destructor

	std::string getTicker()const;
	void setTicker(const std::string& ticker_);

	std::string getAction()const;
	void setAction(const std::string& action_);

	int getQty()const;
	void setQty(const int& quantity_);

	void printOrder()const;

private:
	std::string m_ticker;
	std::string m_action;
	int m_quantity;
};


#endif /* ORDEREVENT_H_ */
