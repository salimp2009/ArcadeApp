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

	std::cout <<"unit vector of vec3= "<<vec3.GetUnitVec() << '\n';

	vec3.Normalize();
	std::cout <<"Normalized vec3= "<<vec3<< '\n';

	std::cout << "vec2= " << vec2 << "\nvec1= " << vec1 << '\n';
	std::cout << vec2.ProjectOnto(vec1) << '\n';

	std::cout <<"angle between vec1 & vec2= "<< vec1.AngleBetween(vec2)<< '\n';

	Vec2D::printname();

	return 0;
}   