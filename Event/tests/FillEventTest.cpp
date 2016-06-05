/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FillEventTest.cpp
 * Author: fredaugermorin
 * 
 * Created on June 5, 2016, 12:20 PM
 */

#include "FillEventTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(FillEventTest);


FillEventTest::FillEventTest() {
}

FillEventTest::~FillEventTest() {
}

void FillEventTest::setUp() {
}

void FillEventTest::tearDown() {
}

void FillEventTest::testConstructor()
{
    // getters test
    std::string type = "FILL";
    std::string ftime = "2016-05-25 14:26:23";
    std::string fticker = "IBM";
    std::string faction = "BOT";
    int fqty = 23;
    std::string fexchange = "NASDAQ";
    double fprice = 55.63;
    double fcommission = fqty* 0.005;
    
    FillEvent FE(ftime, fticker, faction, fqty,fexchange, fprice, fcommission);
    
    CPPUNIT_ASSERT_EQUAL(type, FE.getType());
    CPPUNIT_ASSERT_EQUAL(ftime, FE.getDateTime());
    CPPUNIT_ASSERT_EQUAL(fticker, FE.getTicker());
    CPPUNIT_ASSERT_EQUAL(faction, FE.getAction()); 
    CPPUNIT_ASSERT_EQUAL(fqty, FE.getQty());
    CPPUNIT_ASSERT_EQUAL(fexchange, FE.getExchange());
    CPPUNIT_ASSERT_EQUAL(fprice, FE.getPrice());
    CPPUNIT_ASSERT_EQUAL(fcommission, FE.getCommission());
    
    //settters test
    std::string stime = "2014-05-25 14:26:23";
    std::string sticker = "AMZN";
    std::string saction = "SLD";
    int sqty = 25;
    std::string sexchange = "NASDAQ";
    double sprice = 88.98;
    double scommission = fqty* 0.005;
    
    FE.setDateTime(stime);
    FE.setTicker(sticker);
    FE.setAction(saction);
    FE.setQty(sqty);
    FE.setExchange(sexchange);
    FE.setPrice(sprice);
    FE.setCommission(scommission);
    
    
    CPPUNIT_ASSERT_EQUAL(type, FE.getType());
    CPPUNIT_ASSERT_EQUAL(stime, FE.getDateTime());
    CPPUNIT_ASSERT_EQUAL(sticker, FE.getTicker());
    CPPUNIT_ASSERT_EQUAL(saction, FE.getAction()); 
    CPPUNIT_ASSERT_EQUAL(sqty, FE.getQty());
    CPPUNIT_ASSERT_EQUAL(sexchange, FE.getExchange());
    CPPUNIT_ASSERT_EQUAL(sprice, FE.getPrice());
    CPPUNIT_ASSERT_EQUAL(scommission, FE.getCommission());
    
}