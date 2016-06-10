/*
 * Main.cpp
 *
 *  Created on: 2016-05-17
 *      Author: fredaugermorin
 */

#include "TickEvent.h"
#include "BarEvent.h"
#include "SignalEvent.h"
#include "OrderEvent.h"
#include "FillEvent.h"
#include <iostream>


int main(void)
{
	std::string type = "TICK";
	Event myEvent(type);
	std::cout << myEvent.getType() << std::endl;

	//Event myEventDefault; //default constructor
	//myEventDefault.setType("FILL");
	//std::cout<<myEventDefault.getType()<<std::endl;

	myEvent.setType("ORDER");
	std::cout << myEvent.getType() <<std::endl;

	//TickEvent myDefTickEvent; //default constructor
	//myDefTickEvent.setType("TICK"); //inherited methods
	//std::cout<< myDefTickEvent.getType()<<std::endl;

	TickEvent myTickEvent("AAPL","2016-05-17-16:00",193.56,193.59); //constructor
	myTickEvent.getTicker(); //class specific methods
	myTickEvent.getTime();
	myTickEvent.getBid();
	myTickEvent.getAsk();

	std::cout <<myTickEvent.getTicker() <<std::endl<< myTickEvent.getTime()<< std::endl << myTickEvent.getBid() << std::endl << myTickEvent.getAsk()<<std::endl;

	//myTickEvent.setType("MARKET"); //inherited methods
	std::cout << myTickEvent.getType() <<std::endl;

	std::cout << myTickEvent; //overloaded operator <<

	// BAREVENT CLASS BASIC TEST

	//BarEvent myEmptyBarEvent;
	//std::cout<<myEmptyBarEvent.getType()<<std::endl;

	BarEvent myFilledBe("GOOG","27-05-2016",1,150.01,155.76,145.88,150.15,102148235,150.15);

	std::cout <<myFilledBe<<std::endl; //verifies operator overload and all accessors as well a getReadablePeriod method.

	myFilledBe.setTicker("IBM");
	myFilledBe.setTime("28-05-2016");
	myFilledBe.setPeriod(3600);
	myFilledBe.setOpenPrice(160);
	myFilledBe.setHighPrice(200);
	myFilledBe.setLowPrice(0);
	myFilledBe.setClosePrice(165);
	myFilledBe.setAdjClosePrice(165);
	myFilledBe.setVolume(9999999);

	std::cout<<myFilledBe;

	// Signal Event
	SignalEvent mySE("BBRY.TO","BOT");
	mySE.setTicker("BBRY.US");
	mySE.setAction("LONG");
	std::cout<<"TICKER: "<<mySE.getTicker()<<" | ACTION: "<<mySE.getAction()<< std::endl;

	//OrderEvent
	OrderEvent myOrder("SLW.TO","LONG",3342);
	myOrder.setTicker("ATD/B.TO");
	myOrder.setAction("SHORT");
	myOrder.setQty(-884);

	myOrder.printOrder();
	//calling all getters:
	std::cout<<"Order: Ticker="<<myOrder.getTicker()<<" Action="<<myOrder.getAction()<<" Qty="<<myOrder.getQty()<<std::endl;

	//FillEvent
	FillEvent myFE("5-5-2016-16:01:22","AMZ","BOT",8867,"NYSE",88.65,0.0056);
	myFE.setDateTime("8-5-2016-14:01:22");
	myFE.setTicker("AMZN");
	myFE.setAction("BUY");
	myFE.setQty(22);
	myFE.setExchange("NASDAQ");
	myFE.setPrice(722.79);
	myFE.setCommission(0.0005*myFE.getQty()*myFE.getPrice());

	myFE.printFill();
}