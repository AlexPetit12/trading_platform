/*
 * SignalEvent.cpp
 *
 *  Created on: 2016-05-31
 *      Author: fredaugermorin
 */

#include "Event.h"
#include "SignalEvent.h"

/**
 * \brief constructor
 * @param ticker_
 * @param action_
 */
SignalEvent::SignalEvent(const std::string& ticker_,const std::string& action_):
                    Event::Event("SIGNAL"),m_ticker(ticker_),m_action(action_)
{
}

SignalEvent::~SignalEvent()
{
}

std::string SignalEvent::getTicker() const
{
	return m_ticker;
}

void SignalEvent::setTicker(const std::string& ticker_)
{
	m_ticker = ticker_;
}

std::string SignalEvent::getAction() const
{
	return m_action;
}

void SignalEvent::setAction(const std::string& action_)
{
	m_action = action_;
}

