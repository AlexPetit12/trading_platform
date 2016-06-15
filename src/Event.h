/*
 * event.h
 *
 *  Created on: 2016-05-17
 *      Author: fredaugermorin
 */

#ifndef EVENT_H_
#define EVENT_H_

#include <string>

/**
 * \class Event
 * \brief Generates an Event object
 */
class Event {
public:
	Event(const std::string& type_);
	virtual ~Event();

	std::string getType() const;
	void setType(const std::string& type_);

protected:
	std::string m_type;
};
#endif /* EVENT_H_ */
