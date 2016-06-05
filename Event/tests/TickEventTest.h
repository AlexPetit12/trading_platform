/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TickEventTest.h
 * Author: fredaugermorin
 *
 * Created on June 5, 2016, 12:02 PM
 */

#ifndef TICKEVENTTEST_H
#define TICKEVENTTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "TickEvent.h"

class TickEventTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TickEventTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    TickEventTest();
    virtual ~TickEventTest();
    void setUp();
    void tearDown();

private:
    void testConstructor();
};

#endif /* TICKEVENTTEST_H */

