#include "Vec2d.h"

std::ostream& operator<<(std::ostream& os, const Vec2D& vec){
	return os <<vec.x<<","<<vec.y<<'\n';
}
