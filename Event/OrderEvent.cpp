/*
 * OrderEvent.cpp
 *
 *  Created on: 2016-05-31
 *      Author: fredaugermorin
 */

#include "OrderEvent.h"

/**
 * \brief constructor
 * @param ticker_
 * @param action
 * @param quantity
 */
OrderEvent::OrderEvent(std::string ticker_, std::string action_, int quantity_):
	Event::Event("ORDER"),m_ticker(ticker_),m_action(action_),m_quantity(quantity_)
{
}

OrderEvent::~OrderEvent()
{
}

std::string OrderEvent::getTicker()const
{
	return m_ticker;
}

void OrderEvent::setTicker(std::string ticker_)
{
	m_ticker = ticker_;
}


std::string OrderEvent::getAction()const
{
	return m_action;
}

void OrderEvent::setAction(std::string action_)
{
	m_action = action_;
}

int OrderEvent::getQty()const
{
	return m_quantity;
}

void OrderEvent::setQty(int quantity_)
{
	m_quantity = quantity_;
}

void OrderEvent::printOrder()const
{
	std::cout<<"Order: Ticker="<<m_ticker<<" Action="<<m_action<<" Qty="<<m_quantity<<std::endl;
}
