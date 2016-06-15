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
	//constructor
	BarEvent(const std::string& ticker_ , const std::string& time_,const int& period_,
		const double& openPrice_, const double& highPrice_, const double& lowPrice_,
		const double& closePrice_,const int& volume_,const double& adjClosePrice_);

	virtual ~BarEvent();

	friend std::ostream& operator << (std::ostream& os, const BarEvent& be_ );

	std::string getTicker() const;
	void setTicker(const std::string& ticker_);

	std::string getTime() const;
	void setTime(const std::string& time_);

	int getPeriod() const;
	void setPeriod(const int& period_);
	std::string getReadablePeriod() const;

	double getOpenPrice() const;
	void setOpenPrice(const double& openPrice_);

	double getHighPrice() const;
	void setHighPrice(const double& highPrice_);

	double getLowPrice() const;
	void setLowPrice(const double& lowPrice_);

	double getClosePrice() const;
	void setClosePrice(const double& closePrice_);

	int getVolume() const;
	void setVolume(const int& volume_);

	double getAdjClosePrice() const;
	void setAdjClosePrice(const double& adjClosePrice_);


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
