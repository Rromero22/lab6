//Modified by: Renee Romero
//Lab6
//03/2/18
using namespace std;
#include "fonts.h"
#include <GL/glx.h>

void showName()
{
	Rect r;
	r.bot = 150;
	r.left = 10;
	r.center = 0;
	ggprint16(&r, 16, 0x00ffff00, "Renee Romero! :D ");
}

void drawBox(int x, int y)
{
	static float angle = 0.0;
	glColor3ub(150, 0, 250);
	glPushMatrix();
	glTranslatef(x, y, 0);
	glRotatef( angle, 0.0f, 0.0f, 1.0f);
	glTranslatef(-50, -50, 0);
	angle = angle + 2.5;
	glBegin(GL_QUADS);
	    glVertex2i(   0, 0);
	    glVertex2i(   0, 100);
	    glVertex2i( 100, 100);
	    glVertex2i( 100, 0);
	glEnd();
	Rect r;
	r.bot = 50;
	r.left = 50;
	r.center = 1;
	ggprint8b(&r, 16, 0x00ffff00, "Renee Romero");
	glPopMatrix();
}
