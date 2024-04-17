#include <string>

#ifndef EVENT_OBJECTS_H_
#define EVENT_OBJECTS_H_

class EventObject
{
private:
    std::string EventType;
    bool EventStarted;
    bool EventCompleted;
    bool EventInExecution;

public:
    EventObject(std::string event, bool isStarted, bool isCompleted, bool isInExecution);

    std::string getEventType();
    bool getEventStarted();
    bool getEventCompleted();
    bool getEventInExecution();

    void setEventStarted(bool isStarted);
    void setEventCompleted(bool isCompleted);
    void setEventInExecution(bool isInExecution);

    std::string returnName();
};

#endif