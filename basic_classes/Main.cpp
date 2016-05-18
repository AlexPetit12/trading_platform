/*
 * Main.cpp
 *
 *  Created on: 2016-05-17
 *      Author: fredaugermorin
 */

#include "TickEvent.h"
#include <iostream>

int main(void)
{
	std::string type = "TICK";
	Event myEvent(type);
	std::cout << myEvent.getType() << std::endl;

	myEvent.setType("ORDER");
	std::cout << myEvent.getType() <<std::endl;

	TickEvent myTickEvent("AAPL","2016-05-17-16:00",193.56,193.59);
	myTickEvent.getTicker();
	myTickEvent.getTime();
	myTickEvent.getBid();
	myTickEvent.getAsk();

	std::cout <<myTickEvent.getTicker() <<std::endl<< myTickEvent.getTime()<< std::endl << myTickEvent.getBid() << std::endl << myTickEvent.getAsk()<<std::endl;

	myTickEvent.setType("MARKET");
	std::cout << myTickEvent.getType() <<std::endl;
}
