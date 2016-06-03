/*
 * TestEvent.cpp
 *
 *  Created on: 2016-06-02
 *      Author: fredaugermorin
 */

#include <iostream>
#include <cppunit/TestSuite.h>
#include <cppunit/ui/text/TestRunner.h>
#include "TestEvent.h"

int main()
{
	CppUnit::TextUi::TestRunner runner;
	runner.addTest(new TestEvent());
	runner.run();

	return 0;
}


