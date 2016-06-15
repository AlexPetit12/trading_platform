/*
 * TickerEvent.cpp
 *
 *  Created on: 2016-05-17
 *      Author: fredaugermorin
 */

#include "TickEvent.h"
#include "Event.h"

/**
 * \brief constructor
 * @param ticker_
 * @param time_
 * @param bid_
 * @param ask_
 */
TickEvent::TickEvent(const std::string& ticker_,const std::string& time_, 
                const double& bid_,const double& ask_):
		Event::Event("TICK"),m_ticker(ticker_),m_time(time_),
                m_bid(bid_),m_ask(ask_)
{
}

/**
 * \brief default Destructor
 */
TickEvent::~TickEvent()
{
}

/**
 * @return m_type
 */
std::string TickEvent::getTicker() const
{
	return m_ticker;
}

/**
 * @param ticker_
 */
void TickEvent::setTicker(const std::string& ticker_)
{
	m_ticker = ticker_;
}

/**
 * @return m_time
 */
std::string TickEvent::getTime() const
{
	return m_time;
}

/**
 * @param time_
 */
void TickEvent::setTime(const std::string& time_)
{
	m_time = time_;
}

/**
 * @return m_bid
 */
double TickEvent::getBid() const
{
	return m_bid;
}

/**
 * @param bid_
 */
void TickEvent::setBid(const double& bid_)
{
	m_bid = bid_;
}

/**
 * @return m_ask
 */
double TickEvent::getAsk() const
{
	return m_ask;
}

/**
 * @param ask_
 */
void TickEvent::setAsk(const double& ask_)
{
	m_ask = ask_;
}

std::ostream& operator<<(std::ostream& os,const TickEvent& te)
{
	os <<"TYPE: "<<te.getType()<<", TICKER: "<<te.getTicker()<<", TIME: "<<te.getTime()<<", BID: "<<te.getBid()<<", ASK: "<<te.getAsk()<<std::endl;
	return os;
}
