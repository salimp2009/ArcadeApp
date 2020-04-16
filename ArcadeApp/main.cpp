#include <iostream>
//#include "Util/Vec2d.h"
#include "Util/Vec2d.h"
#include "Util/Utils.h"

int main()
{
	std::cout << "main is ready....." << '\n';
	Vec2D vec2{ 20, 20.01 };
	std::cout<<std::boolalpha<<IsEqual(20, 25)<<'\n';

	std::cout << vec2 << '\n';

	return 0;
}   