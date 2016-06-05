/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrderEventTest.h
 * Author: fredaugermorin
 *
 * Created on June 5, 2016, 10:20 AM
 */

#ifndef ORDEREVENTTEST_H
#define ORDEREVENTTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "OrderEvent.h"

class OrderEventTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(OrderEventTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    OrderEventTest();
    virtual ~OrderEventTest();
    void setUp();
    void tearDown();

private:
    void testConstructor();
};

#endif /* ORDEREVENTTEST_H */

