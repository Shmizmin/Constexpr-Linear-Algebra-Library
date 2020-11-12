//#define PGE_APPLICATION
//#include "GameEngine.hpp"

import stdex;
import core;
import vector;
import matrix;
import trig;

constexpr auto screenWidth = 2560.0f;
constexpr auto screenHeight = 1440.0f;

constexpr auto fov = 90.0f;
constexpr auto aspectRatio = (screenHeight / screenWidth);
constexpr auto near = 0.1f;
constexpr auto far = 10.0f;


int main(void)
{
	auto matProj = cla::projection(fov, aspectRatio, near, far);

	return 0;
}