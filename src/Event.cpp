/*
 * File: Event.cpp
 *
 *  Created on: 2016-05-17
 *      Author: fredaugermorin
 */

#include "Event.h"


/**
 * @param type_
 */
Event::Event(const std::string& type_):
		m_type(type_)
{
}

/**
 * \brief Destructor
 */
Event::~Event()
{
}

/**
 * @return m_type
 */
std::string Event::getType() const
{
	return m_type;
}

/**
 * @param type_
 */
void Event::setType(const std::string& type_)
{
	m_type = type_;
}
