/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrderEventTest.cpp
 * Author: fredaugermorin
 * 
 * Created on June 5, 2016, 10:20 AM
 */

#include "OrderEventTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(OrderEventTest);

OrderEventTest::OrderEventTest() {
}

OrderEventTest::~OrderEventTest() {
}

void OrderEventTest::setUp() {
}

void OrderEventTest::tearDown() {
}

void OrderEventTest::testConstructor()
{
    std::string type = "ORDER";
    std::string fTicker = "GOOG";
    std::string fAction = "BOT";
    int fQty = 152;
    OrderEvent myOe(fTicker, fAction, fQty);
    
    // getter tests
    CPPUNIT_ASSERT_EQUAL(type, myOe.getType()); 
    CPPUNIT_ASSERT_EQUAL(fTicker, myOe.getTicker());
    CPPUNIT_ASSERT_EQUAL(fAction, myOe.getAction()); 
    CPPUNIT_ASSERT_EQUAL(fQty, myOe.getQty()); 
    
    std::string sTicker = "SLW.TO";
    std::string sAction = "SLD";
    int sQty = 23;
    
    myOe.setTicker(sTicker);
    myOe.setAction(sAction);
    myOe.setQty(sQty);
    
    // setters test
    CPPUNIT_ASSERT_EQUAL(type, myOe.getType());
    CPPUNIT_ASSERT_EQUAL(sTicker, myOe.getTicker());
    CPPUNIT_ASSERT_EQUAL(sAction, myOe.getAction()); 
    CPPUNIT_ASSERT_EQUAL(sQty, myOe.getQty());
    
    
    
}