/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FillEventTest.h
 * Author: fredaugermorin
 *
 * Created on June 5, 2016, 12:20 PM
 */

#ifndef FILLEVENTTEST_H
#define FILLEVENTTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "FillEvent.h" 

class FillEventTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(FillEventTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    FillEventTest();
    virtual ~FillEventTest();
    void setUp();
    void tearDown();

private:
    void testConstructor();
};

#endif /* FILLEVENTTEST_H */

