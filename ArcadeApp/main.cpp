#include <iostream>
//#include "Util/Vec2d.h"
#include "Util/Vec2d.h"
#include "Util/Utils.h"
#include <cstdio>




int main()
{
	std::cout << "main is ready....." << '\n';
	Vec2D vec2{ 20.f, 20.01f };
	Vec2D vec1{ 15.f, 20.01f };
	std::cout<<std::boolalpha<<IsEqual(20, 25)<<'\n';
	
	std::cout << std::boolalpha<<(vec1==vec2)<< '\n';
	std::cout << std::boolalpha << (vec2 == vec2) << '\n';
	auto vec3 = -vec2;
	std::cout << "vec3= " << vec3<< '\n';
	std::cout <<"-vec3/2= "<<-vec3/2.0F << '\n';
	std::cout <<"-vec3+vec2= "<< -vec3 + vec2 << '\n';
	
	printf("x=%.03f , y=%.03f\n", (vec3/2.0f).GetX(), (vec3/2.234f).GetY());
	std::cout << vec3*2 << '\n';

	vec3 *=2.2f;
	printf("x=%.03f , y=%.03f\n", -vec3.GetX(), -vec3.GetY());

	std::cout << 2 * vec3 << '\n';

	return 0;
}   