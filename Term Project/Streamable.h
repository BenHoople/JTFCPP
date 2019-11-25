#ifndef CS_STREAMABLE_
#define CS_STREAMABLE_

#include <iostream>

namespace cs
{
	class Streamable  //interface of only pure virtual functions
	{
	public:                             
      virtual std::ostream& write(std::ostream& os, bool linear) const = 0; //example line for what goes here later
		

	};
}

#endif