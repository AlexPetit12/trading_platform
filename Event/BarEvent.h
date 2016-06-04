/*
 * BarEvent.h
 *
 *  Created on: 2016-05-30
 *      Author: fredaugermorin
 */

#ifndef BAREVENT_H_
#define BAREVENT_H_

#include "Event.h"
#include <iostream>
#include <string>
#include <sstream>
#include <map>

class BarEvent : public Event
{
public:
	//constructors
	BarEvent(std::string ticker_, std::string time_, int period_,
			double openPrice_, double highPrice_, double lowPrice_,
			double closePrice_, int volume_, double adjClosePrice_);

	virtual ~BarEvent();

	friend std::ostream& operator << (std::ostream& os, const BarEvent& be_ );

	std::string getTicker() const;
	void setTicker(std::string ticker_);

	std::string getTime() const;
	void setTime(std::string time_);

	int getPeriod() const;
	void setPeriod(int period_);
	std::string getReadablePeriod() const;

	double getOpenPrice() const;
	void setOpenPrice(double openPrice_);

	double getHighPrice() const;
	void setHighPrice(double highPrice_);

	double getLowPrice() const;
	void setLowPrice(double lowPrice_);

	double getClosePrice() const;
	void setClosePrice(double closePrice_);

	int getVolume() const;
	void setVolume(int volume_);

	double getAdjClosePrice() const;
	void setAdjClosePrice(double adjClosesPrice_);


private:

	std::string m_ticker;
	std::string m_time;
	int m_period;
	double m_openPrice;
	double m_highPrice;
	double m_lowPrice;
	double m_closePrice;
	int m_volume;
	double m_adjClosePrice;

};



#endif /* BAREVENT_H_ */
