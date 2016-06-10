/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BarEventTest.h
 * Author: fredaugermorin
 *
 * Created on June 4, 2016, 3:50 PM
 */

#ifndef BAREVENTTEST_H
#define BAREVENTTEST_H

#include <cppunit/extensions/HelperMacros.h>


class BarEventTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(BarEventTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    BarEventTest();
    virtual ~BarEventTest();
    void setUp();
    void tearDown();

private:
    void testConstructor();
};

#endif /* BAREVENTTEST_H */

