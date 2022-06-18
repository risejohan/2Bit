555 Watchdog Timer Demo

This code demonstrates usage of the 555 watchdog timer described at http://upperbound.com/projects/555-watchdog-timer/

The Serial output helps confirm that the Arduino is sending the heartbeat and being reset when appropriate.

There are two configuration variables:

// The Arduino will send the heartbeat at this output pin.
int heartbeatPin = 10; 

// Heartbeat will be sent to the 555 timer at this interval, in milliseconds.
int heartbeatInterval = 4000; 