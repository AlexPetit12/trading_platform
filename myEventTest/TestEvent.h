/*
 * TestEvent.h
 *
 *  Created on: 2016-06-02
 *      Author: fredaugermorin
 */

#ifndef TESTEVENT_H_
#define TESTEVENT_H_

#include <cppunit/TestCase.h>
#include <Event.h>

class TestEvent : public CppUnit::TestCase
{
public:
	TestEvent();
	virtual ~TestEvent ();

	void runTest()
	{
		Event myEvent("TICK");

		CPPUNIT_ASSERT(myEvent.getType() == "TICK");

	}
};


#endif /* TESTEVENT_H_ */
