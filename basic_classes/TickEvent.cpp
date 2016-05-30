/*
 * TickerEvent.cpp
 *
 *  Created on: 2016-05-17
 *      Author: fredaugermorin
 */

#include "TickEvent.h"
#include "Event.h"

/**
 * \brief default Constructor
 */
TickEvent::TickEvent():
	Event::Event("TICK")
{
}

/**
 * @param ticker_
 * @param time_
 * @param bid_
 * @param ask_
 */
TickEvent::TickEvent(std::string ticker_, std::string time_, double bid_, double ask_):
		m_ticker(ticker_),m_time(time_),m_bid(bid_),m_ask(ask_),Event::Event("TICK")
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
void TickEvent::setTicker(std::string ticker_)
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
void TickEvent::setTime(std::string time_)
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
void TickEvent::setBid(double bid_)
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
void TickEvent::setAsk(double ask_)
{
	m_ask = ask_;
}
