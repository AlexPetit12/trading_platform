/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   EventTest.cpp
 * Author: fredaugermorin
 *
 * Created on 4-Jun-2016, 3:28:45 PM
 */

#include "EventTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION(EventTest);

EventTest::EventTest() {
}

EventTest::~EventTest() {
}

void EventTest::setUp() {
}

void EventTest::tearDown() {
}

void EventTest::testConstructor() 
{
    //getter test
    std::string firstType = "TICK";
    
    Event myE(firstType);
    
    CPPUNIT_ASSERT_EQUAL(firstType,myE.getType());
    
    // setter test
    
    std::string secondType = "ORDER";
    
    myE.setType(secondType);
    
    CPPUNIT_ASSERT_EQUAL(secondType, myE.getType());
         
}


