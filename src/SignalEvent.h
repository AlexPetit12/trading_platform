/*
 * SignalEvent.h
 *
 *  Created on: 2016-05-31
 *      Author: fredaugermorin
 */

#ifndef SIGNALEVENT_H_
#define SIGNALEVENT_H_
#include "Event.h"

class SignalEvent : public Event
{
public:
	SignalEvent(std::string ticker_, std::string action_); //constructor

	virtual ~SignalEvent(); //Destructor

	std::string getTicker() const;
	void setTicker(std::string ticker_);

	std::string getAction() const;
	void setAction(std::string action_);

private:
	std::string m_ticker;
	std::string m_action;
};

#endif /* SIGNALEVENT_H_ */
