/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TickEventTest.cpp
 * Author: fredaugermorin
 * 
 * Created on June 5, 2016, 12:02 PM
 */

#include "TickEventTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(TickEventTest);

TickEventTest::TickEventTest() {
}

TickEventTest::~TickEventTest() {
}

void TickEventTest::setUp() {
}

void TickEventTest::tearDown() {
}

void TickEventTest::testConstructor()
{
    //getter tests
    std::string type = "TICK";
    std::string fticker = "MRU.TO";
    std::string ftime = "2016-05-27 14:05:23";
    double fbid = 55.23;
    double fask = 55.25;
    
    TickEvent TE(fticker, ftime, fbid, fask);
    
    CPPUNIT_ASSERT_EQUAL(type, TE.getType());
    CPPUNIT_ASSERT_EQUAL(fticker, TE.getTicker());
    CPPUNIT_ASSERT_EQUAL(ftime, TE.getTime()); 
    CPPUNIT_ASSERT_EQUAL(fbid, TE.getBid());
    CPPUNIT_ASSERT_EQUAL(fask, TE.getAsk());
    
    std::string sticker = "BB.TO";
    std::string stime = "2016-04-27 14:05:23";
    double sbid = 56.23;
    double sask = 56.25;
    
    // setters test
    TE.setTicker(sticker);
    TE.setTime(stime);
    TE.setBid(sbid);
    TE.setAsk(sask);
    
    CPPUNIT_ASSERT_EQUAL(type, TE.getType());
    CPPUNIT_ASSERT_EQUAL(sticker, TE.getTicker());
    CPPUNIT_ASSERT_EQUAL(stime, TE.getTime()); 
    CPPUNIT_ASSERT_EQUAL(sbid, TE.getBid());
    CPPUNIT_ASSERT_EQUAL(sask, TE.getAsk());
}
