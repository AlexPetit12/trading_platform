/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   EventTest.h
 * Author: fredaugermorin
 *
 * Created on 4-Jun-2016, 3:28:45 PM
 */

#ifndef EVENTTEST_H
#define EVENTTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Event.h" 

class EventTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(EventTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    EventTest();
    virtual ~EventTest();
    void setUp();
    void tearDown();

private:
    void testConstructor();
};

#endif /* EVENTTEST_H */

