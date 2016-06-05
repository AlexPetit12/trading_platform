/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SignalEventTest.cpp
 * Author: fredaugermorin
 * 
 * Created on June 5, 2016, 12:34 PM
 */

#include "SignalEventTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(SignalEventTest);

SignalEventTest::SignalEventTest() {
}

SignalEventTest::~SignalEventTest() {
}

void SignalEventTest::setUp() {
}

void SignalEventTest::tearDown() {
}

void SignalEventTest::testConstructor()
{
    //getters test
    std::string type = "SIGNAL";
    std::string fticker = "AAPL";
    std::string faction = "SLD";
    
    SignalEvent SE(fticker, faction);
    
    CPPUNIT_ASSERT_EQUAL(type, SE.getType());
    CPPUNIT_ASSERT_EQUAL(fticker, SE.getTicker());
    CPPUNIT_ASSERT_EQUAL(faction, SE.getAction());
   
    //settters test
    std::string sticker = "VRX.TO";
    std::string saction = "BOT";
    
    SE.setTicker(sticker);
    SE.setAction(saction);
    
    CPPUNIT_ASSERT_EQUAL(type, SE.getType());
    CPPUNIT_ASSERT_EQUAL(sticker, SE.getTicker());
    CPPUNIT_ASSERT_EQUAL(saction, SE.getAction());
}