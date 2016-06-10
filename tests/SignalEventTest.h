/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SignalEventTest.h
 * Author: fredaugermorin
 *
 * Created on June 5, 2016, 12:34 PM
 */

#ifndef SIGNALEVENTTEST_H
#define SIGNALEVENTTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "SignalEvent.h" 

class SignalEventTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(SignalEventTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    SignalEventTest();
    virtual ~SignalEventTest();
    void setUp();
    void tearDown();

private:
    void testConstructor();
};

#endif /* SIGNALEVENTTEST_H */

