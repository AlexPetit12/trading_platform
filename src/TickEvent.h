/*
 * TickEvent.h
 *
 *  Created on: 2016-05-17
 *      Author: fredaugermorin
 */

#ifndef TICKEVENT_H_
#define TICKEVENT_H_

#include <iostream>
#include "Event.h"
/**
 * \class TickEvent
 * \brief Handles the event of receiving a new market update tick,
    which is defined as a ticker symbol and associated best
    bid and ask from the top of the order book.
 */
class TickEvent : public Event
{
public:
	TickEvent(const std::string& ticker_,const std::string& time_, 
                const double& bid_,const double& ask_);

	virtual ~TickEvent();

	std::string getTicker() const;
	void setTicker(const std::string& ticker_);

	std::string getTime() const;
	void setTime(const std::string& time_);

	double getBid() const;
	void setBid(const double& bid_);

	double getAsk() const;
	void setAsk(const double& ask_);

	friend std::ostream& operator << (std::ostream& os, const TickEvent& te);
private:
	std::string m_ticker;
	std::string m_time;
	double m_bid;
	double m_ask;
};

#endif /* TICKEVENT_H_ */
