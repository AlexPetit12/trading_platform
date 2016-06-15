/*
 * FillEvent.cpp
 *
 *  Created on: 2016-05-31
 *      Author: fredaugermorin
 */
#include "FillEvent.h"
#include <iostream>
#include <sstream>

FillEvent::FillEvent(const std::string& time_,const std::string& ticker_ ,
        const std::string& action_,const int& quantity_ , 
        const std::string& exchange_,const double& price_,
        const double& commission_):
            Event::Event("FILL"),m_time(time_),m_ticker(ticker_),
            m_action(action_),m_quantity(quantity_),m_exchange(exchange_),
            m_price(price_),m_commission(commission_)
{
}

std::string FillEvent::getDateTime()const
{
	return m_time;
}

void FillEvent::setDateTime(const std::string& time_)
{
	m_time = time_;
}

std::string FillEvent::getTicker()const
{
	return m_ticker;
}

void FillEvent::setTicker(const std::string& ticker_)
{
	m_ticker = ticker_;
}

std::string FillEvent::getAction()const
{
	return m_action;
}

void FillEvent::setAction(const std::string& action_)
{
	m_action = action_;
}

int FillEvent::getQty()const
{
	return m_quantity;
}

void FillEvent::setQty(const int& quantity_)
{
	m_quantity = quantity_;
}

std::string FillEvent::getExchange()const
{
	return m_exchange;
}

void FillEvent::setExchange(const std::string& exchange_)
{
	m_exchange = exchange_;
}

double FillEvent::getPrice()const
{
	return m_price;
}

void FillEvent::setPrice(const double& price_)
{
	m_price = price_;
}

double FillEvent::getCommission()const
{
	return m_commission;
}

void FillEvent::setCommission(const double& commission_)
{
	m_commission = commission_;
}

void FillEvent::printFill()
{
	std::ostringstream os;

	os<<"*** FILLED ***"<<std::endl;
	os<<"TIME: "<< m_time << std::endl;
	os<<"TICKER: "<<m_ticker<<std::endl;
	os<<"ACTION: "<<m_action<<std::endl;
	os<<"QTY: "<<m_quantity<<std::endl;
	os<<"EXCH: "<<m_exchange<<std::endl;
	os<<"PRICE: "<<m_price<<std::endl;
	os<<"COMM: "<<m_commission<<std::endl;
	os<<"**************"<<std::endl;

	std::cout<<os.str();
}


