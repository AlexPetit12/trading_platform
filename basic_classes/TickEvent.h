/*
 * TickEvent.h
 *
 *  Created on: 2016-05-17
 *      Author: fredaugermorin
 */

#ifndef TICKEVENT_H_
#define TICKEVENT_H_

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
	TickEvent();
	TickEvent(std::string ticker_, std::string time_, double bid_, double ask_);

	virtual ~TickEvent();

	std::string getTicker() const;
	void setTicker(std::string ticker_);

	std::string getTime() const;
	void setTime(std::string time_);

	double getBid() const;
	void setBid(double bid_);

	double getAsk() const;
	void setAsk(double ask_);

private:
	std::string m_ticker;
	std::string m_time;
	double m_bid;
	double m_ask;
};

#endif /* TICKEVENT_H_ */
