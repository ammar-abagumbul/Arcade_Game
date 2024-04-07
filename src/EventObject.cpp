#include "EventObject.h"

EventObject::EventObject(std::string event, bool isStarted, bool isCompleted, bool isInExecution)
{
    EventType = event;
    EventStarted = isStarted;
    EventCompleted = isCompleted;
    EventInExecution = isInExecution;
}

std::string EventObject::getEventType()
{
    return EventType;
}

bool EventObject::getEventStarted()
{
    return EventStarted;
}

bool EventObject::getEventCompleted()
{
    return EventCompleted;
}

bool EventObject::getEventInExecution()
{
    return EventInExecution;
}

void EventObject::setEventStarted(bool isStarted)
{
    EventStarted = isStarted;
}

void EventObject::setEventCompleted(bool isCompleted)
{
    EventCompleted = isCompleted;
}

void EventObject::setEventInExecution(bool isInExecution)
{
    EventInExecution = isInExecution;
}

std::string returnName()
{
    return "EventObject";
}