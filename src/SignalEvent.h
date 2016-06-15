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
	SignalEvent(const std::string& ticker_,const std::string& action_); //constructor

	virtual ~SignalEvent(); //Destructor

	std::string getTicker() const;
	void setTicker(const std::string& ticker_);

	std::string getAction() const;
	void setAction(const std::string& action_);

private:
	std::string m_ticker;
	std::string m_action;
};

#endif /* SIGNALEVENT_H_ */
