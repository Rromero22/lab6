//Modified by: Renee Romero
//Lab6
//03/2/18
using namespace std;
#include "fonts.h"
void showName()
{
	Rect r;
	r.bot = 40;
	r.left = 10;
	r.center = 0;
	ggprint16(&r, 16, 0x00ffff00, "Renee Romero! :D ");
}
