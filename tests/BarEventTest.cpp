/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BarEventTest.cpp
 * Author: fredaugermorin
 * 
 * Created on June 4, 2016, 3:50 PM
 */

#include "BarEventTest.h"
#include "BarEvent.h"

CPPUNIT_TEST_SUITE_REGISTRATION(BarEventTest);

BarEventTest::BarEventTest() {
}

BarEventTest::~BarEventTest() {
}

void BarEventTest::setUp() {
}

void BarEventTest::tearDown() {
}

void BarEventTest::testConstructor()
{
    //getter tests
    std::string type = "BAR";
    std::string firstTicker = "AAPL";
    std::string firstTime = "2016-05-27";
    
    int firstPeriod = 60;
    std::string readablePeriod = "1min";
    
    double firstOpenPrice = 122.36;
    double firstHighPrice = 132.56;
    double firstLowPrice = 120.20;
    double firstClosePrice = 130.59;
    int firstVolume = 12256478;
    double firstAdjClosePrice = 130.59;
    
    BarEvent myB(firstTicker,firstTime,firstPeriod,firstOpenPrice,firstHighPrice,
            firstLowPrice, firstClosePrice, firstVolume, firstAdjClosePrice);
    
    CPPUNIT_ASSERT_EQUAL(type, myB.getType());
    CPPUNIT_ASSERT_EQUAL(firstTicker, myB.getTicker());
    CPPUNIT_ASSERT_EQUAL(firstTime, myB.getTime());
    CPPUNIT_ASSERT_EQUAL(firstPeriod, myB.getPeriod());
    CPPUNIT_ASSERT_EQUAL(readablePeriod, myB.getReadablePeriod());
    CPPUNIT_ASSERT_EQUAL(firstOpenPrice, myB.getOpenPrice());
    CPPUNIT_ASSERT_EQUAL(firstHighPrice, myB.getHighPrice());
    CPPUNIT_ASSERT_EQUAL(firstLowPrice, myB.getLowPrice());
    CPPUNIT_ASSERT_EQUAL(firstVolume, myB.getVolume());
    CPPUNIT_ASSERT_EQUAL(firstAdjClosePrice, myB.getAdjClosePrice());
    
    // setter tests
    std::string secondTicker = "IBM";
    std::string secondTime = "2015-05-27";
    
    int secondPeriod = 300;
    std::string sReadablePeriod = "5min";
    
    double secondOpenPrice = 122.89;
    double secondHighPrice = 135.56;
    double secondLowPrice = 118.20;
    double secondClosePrice = 133.59;
    int secondVolume = 12;
    double secondAdjClosePrice = 132.50;
    
    myB.setTicker(secondTicker);
    myB.setTime(secondTime);
    myB.setPeriod(secondPeriod);
    myB.setOpenPrice(secondOpenPrice);
    myB.setHighPrice(secondHighPrice);
    myB.setLowPrice(secondLowPrice);
    myB.setVolume(secondVolume);
    myB.setAdjClosePrice(secondAdjClosePrice);
    
    CPPUNIT_ASSERT_EQUAL(type, myB.getType());
    CPPUNIT_ASSERT_EQUAL(secondTicker, myB.getTicker());
    CPPUNIT_ASSERT_EQUAL(secondTime, myB.getTime());
    CPPUNIT_ASSERT_EQUAL(secondPeriod, myB.getPeriod());
    CPPUNIT_ASSERT_EQUAL(sReadablePeriod, myB.getReadablePeriod());
    CPPUNIT_ASSERT_EQUAL(secondOpenPrice, myB.getOpenPrice());
    CPPUNIT_ASSERT_EQUAL(secondHighPrice, myB.getHighPrice());
    CPPUNIT_ASSERT_EQUAL(secondLowPrice, myB.getLowPrice());
    CPPUNIT_ASSERT_EQUAL(secondVolume, myB.getVolume());
    CPPUNIT_ASSERT_EQUAL(secondAdjClosePrice, myB.getAdjClosePrice());
       
}