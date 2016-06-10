/*
 * BarEvent.cpp
 *
 *  Created on: 2016-05-30
 *      Author: fredaugermorin
 */
#include "BarEvent.h"
#include "Event.h"

/**
 * @param ticker_
 * @param time_
 * @param period_
 * @param openPrice_
 * @param highPrice_
 * @param lowPrice_
 * @param closePrice_
 * @param volume_
 * @param adjClosePrice_
 */
BarEvent::BarEvent(const std::string& ticker_, const std::string& time_,const int& period_,
                    const double& openPrice_,const double& highPrice_,const double& lowPrice_,
                    const double& closePrice_,const int& volume_,const double& adjClosePrice_):
                        Event::Event("BAR"), m_ticker(ticker_), m_time(time_),
                        m_period(period_), m_openPrice(openPrice_), m_highPrice(highPrice_),
                        m_lowPrice(lowPrice_), m_closePrice(closePrice_), m_volume(volume_),
                        m_adjClosePrice(adjClosePrice_)
{
}

/**
 * \brief default Destructor
 */
BarEvent::~BarEvent()
{
}

std::string BarEvent::getTicker() const
{
	return m_ticker;
}

void BarEvent::setTicker(std::string ticker_)
{
	m_ticker = ticker_;
}

std::string BarEvent::getTime() const
{
	return m_time;
}

void BarEvent::setTime(std::string time_)
{
	m_time = time_;
}

int BarEvent::getPeriod() const
{
	return m_period;
}

void BarEvent::setPeriod(int period_)
{
	m_period = period_;
}

std::string BarEvent::getReadablePeriod() const
{
	std::map<int,std::string> periods;
	periods[1] = "1sec";
	periods[5] = "5sec";
	periods[10] = "10sec";
	periods[15] = "15sec";
	periods[30] = "30sec";
	periods[60] = "1min";
	periods[300] = "5min";
	periods[600] = "10min";
	periods[900] = "15min";
	periods[1800] = "30min";
	periods[3600] = "1hr";
	periods[86400] = "1day";
	periods[604800] = "1wk";

	std::map<int,std::string>::iterator it;
	it = periods.find(m_period);
	std::stringstream ss;

	if (it != periods.end())
		ss << it->second ;
	else
		ss << m_period << "sec";
	return ss.str();
}

double BarEvent::getOpenPrice() const
{
	return m_openPrice;
}

void BarEvent::setOpenPrice(double openPrice_)
{
	m_openPrice = openPrice_;
}

double BarEvent::getHighPrice() const
{
	return m_highPrice;
}
void BarEvent::setHighPrice(double highPrice_)
{
	m_highPrice = highPrice_;
}

double BarEvent::getLowPrice() const
{
	return m_lowPrice;
}

void BarEvent::setLowPrice(double lowPrice_)
{
	m_lowPrice = lowPrice_;
}

double BarEvent::getClosePrice() const
{
	return m_closePrice;
}

void BarEvent::setClosePrice(double closePrice_)
{
	m_closePrice = closePrice_;
}

int BarEvent::getVolume() const
{
	return m_volume;
}

void BarEvent::setVolume(int volume_)
{
	m_volume = volume_;
}

double BarEvent::getAdjClosePrice() const
{
	return m_adjClosePrice;
}

void BarEvent::setAdjClosePrice(double adjClosePrice_)
{
	m_adjClosePrice = adjClosePrice_;
}

std::ostream& operator << (std::ostream& os,const BarEvent& be_)
{
	os<<"TYPE: "<<be_.getType()<<", TICKER: "<<be_.getTicker()<<", TIME: "<<be_.getTime()<<", PERIOD: "<<be_.getReadablePeriod()<<std::endl;
	os<<"OPEN: "<<be_.getOpenPrice()<<", HIGH: "<<be_.getHighPrice();
	os<<", LOW: "<<be_.getLowPrice()<<", CLOSE: "<<be_.getClosePrice()<<", AdjCLOSE: "<<be_.getAdjClosePrice()<<std::endl;
	os<<"VOLUME: "<<be_.getVolume()<<std::endl;

	return os;
}



