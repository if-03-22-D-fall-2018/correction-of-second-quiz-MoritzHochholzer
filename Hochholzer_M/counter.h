/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#ifndef ___COUNTER_H
#define ___COUNTER_H
#define COUNTER_COUNT 8

typedef struct CounterImplementation* Counter;
enum Direction{DOWN, UP, UNDEFINED};

void init();
int get_increment_value(Counter c);
void set_increment_value(Counter c, int increment_value);
int get_value(Counter c);
bool set_value(Counter c, int value);
void increment(Counter c);
void set_direction(Counter c, Direction d);
Direction get_direction(Counter c);
Counter new_counter(Direction d);

#endif
