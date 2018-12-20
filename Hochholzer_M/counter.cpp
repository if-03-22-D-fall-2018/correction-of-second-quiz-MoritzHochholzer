/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include "counter.h"

struct CounterImplementation{
  enum Direction d;
  int increment_value;
  int value;
  bool is_used;
};

struct CounterImplementation c1={UNDEFINED,0,0,false};
struct CounterImplementation c2={UNDEFINED,0,0,false};
struct CounterImplementation c3={UNDEFINED,0,0,false};
struct CounterImplementation c4={UNDEFINED,0,0,false};
struct CounterImplementation c5={UNDEFINED,0,0,false};
struct CounterImplementation c6={UNDEFINED,0,0,false};
struct CounterImplementation c7={UNDEFINED,0,0,false};
struct CounterImplementation c8={UNDEFINED,0,0,false};

static Counter available_counters[COUNTER_COUNT]={&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8};

void init()
{
  for (int i = 0; i < COUNTER_COUNT; i++)
  {
  available_counters[i]->is_used=false;
  available_counters[i]->increment_value=1;
  available_counters[i]->value=0;
  available_counters[i]->d=UNDEFINED;
  }
}

int get_increment_value(Counter c)
{
  return 0;
}

void set_increment_value(Counter c, int increment_value)
{

}

int get_value(Counter c)
{
  return 0;
}

bool set_value(Counter c, int value)
{
  return 0;
}

void increment(Counter c)
{

}

void set_direction(Counter c, Direction d)
{

}

Direction get_direction(Counter c)
{
  return UP;
}

Counter new_counter(Direction d)
{
  for (int i = 0; i < COUNTER_COUNT; i++) {
    if (!available_counters[i]->is_used){
      available_counters[i]->is_used=true;
      available_counters[i]->d=d;
      return available_counters[i];
    }
  }
  return 0;
}
