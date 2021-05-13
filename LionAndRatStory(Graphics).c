#include <stdlib.h>
#include <GL/glut.h>
#include<stdio.h>

static float mouseFirstX = 0.0;
static float mouseFirstY = 0.0;
static float lionFirstX = 0.0;
static float lionFirstY = 0.0;
static float netX = 0.0;
static float netY = 0.0;
static float netBreak = 0.0;
static float netExtend = 0.0;
static float walkf = 0.0;
static float walkb = 0.0;
static float exp = 0.0;
static float lionEye = 0.0;
static float lionWhiteEye = 0.0;
static float lionmove = 0.0;
static float lionLegFFX = 0.0;
static float lionLegFFY = 0.0;
static float legSpin = 0.0;
static float roarRadius = 0.0;
static float mouseTalk = 0.0;
static float backmove = 0.0;
static int timer = 0;
static int mouseThink = 0;
static int netDisappear = 0;
static int lionAngry = 0;
static int lionConvinced = 0;
static int lionHelp = 0;
static int lionThanking = 0;
static int mouseTalkingD = 0;
static int mouseThinking = 0;
static int starting = 0;
static int ending = 0;
static int netD = 0;
static int fewDays = 0;

void init()
{

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glShadeModel(GL_SMOOTH);
}


void display()
{
glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
		glColor3f(0.0,0.3,0.0);
		glVertex2f(70,0);
		glColor3f(0,0,0);
		glVertex2f(70,70); 		//background
		glColor3f(0,0,0);
		glVertex2i(-70,70);
		glColor3f(0.0,0.3,0.0);
		glVertex2i(-70,0);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.1,0.1,0.0);
		glVertex2f(-70,0);
		glColor3f(0.0,0.1,0.0);          //ground
		glVertex2f(-70,-70);
		glColor3f(0.0,0.1,0.0);
		glVertex2i(70,-70);
		glColor3f(0.1,0.1,0.0);
		glVertex2i(70,0);
	glEnd();
		
	glPushMatrix();
		glTranslatef(-45.0 + backmove,25.0,0.0);		//trees
		glColor3f(0.2,0.1,0.0);
		glRectf(-6,-30,6,30);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-15.0 + backmove,25.0,0.0);		//trees
		glColor3f(0.2,0.1,0.0);
		glRectf(-3,-30,3,30);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(15.0 + backmove,25.0,0.0);		//trees
		glColor3f(0.2,0.1,0.0);
		glRectf(-5,-30,5,30);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(45.0 + backmove,25.0,0.0);		//trees
		glColor3f(0.2,0.1,0.0);
		glRectf(-3,-30,3,30);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-45 + backmove,45,0);
		glColor3f(0.0,0.2,0.0);
		glutSolidSphere(15,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-35 + backmove,43,0);
		glColor3f(0.0,0.2,0.0);
		glutSolidSphere(10,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-37 + backmove,33,0);
		glColor3f(0.0,0.3,0.0);
		glutSolidSphere(10,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-5 + backmove,33,0);
		glColor3f(0.0,0.3,0.0);
		glutSolidSphere(15,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(45 + backmove,45,0);
		glColor3f(0.0,0.3,0.0);
		glutSolidSphere(15,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-60 + backmove,41,0);
		glColor3f(0.0,0.2,0.0);
		glutSolidSphere(10,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(10 + backmove,30,0);
		glColor3f(0.0,0.2,0.0);
		glutSolidSphere(10,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(33 + backmove,42,0);
		glColor3f(0.0,0.2,0.0);
		glutSolidSphere(15,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(10 + backmove,45,0);
		glColor3f(0.0,0.2,0.0);
		glutSolidSphere(10,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(20 + backmove,45,0);
		glColor3f(0.0,0.2,0.0);
		glutSolidSphere(15,50,10);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-15 + backmove,45,0);
		glColor3f(0.0,0.3,0.0);
		glutSolidSphere(20,50,10);
	glPopMatrix();
	
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(65 + backmove,-10);
		glColor3f(0.0,0.0,0.0);          //den
		glVertex2f(65 + backmove,55);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(50 + backmove,40);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(30 + backmove,30);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(15 + backmove,-10);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(55 + backmove,-10);
		glColor3f(0.3,0.3,0.3);          
		glVertex2f(43 + backmove,20);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(30 + backmove,30);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(24 + backmove,20);
		glColor3f(0.5,0.5,0.5);
		glVertex2i(15 + backmove,-10);	
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(50 + backmove,-10);
		glColor3f(0.2,0.2,0.2);          
		glVertex2f(43 + backmove,15);
		glColor3f(0.2,0.2,0.2);
		glVertex2i(35 + backmove,20);
		glColor3f(0.2,0.2,0.2);
		glVertex2i(28 + backmove,15);
		glColor3f(0.0,0.0,0.0);
		glVertex2i(20 + backmove,-10);	
	glEnd();

	if(mouseThink == 0)
	{
		glPushMatrix();
			glTranslatef(17.0 - lionFirstX + lionmove,-10.0 + lionFirstY,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(22.0 + lionmove,-10.0 + (lionFirstY/2.0),0.0);
			glRotatef(-legSpin + (walkb * 7), 0.0, 0.0, 1.0);
			glColor3f(0.5,0.2,0.0);
			glRectf(-5,-2,5,2);
		glPopMatrix();								//BFLeg
		glPushMatrix();
			glTranslatef(50 + lionFirstX + lionmove,-2.75 + lionFirstY,0);
			glColor3f(0.5,0.2,0.0);
			glRotatef(-85,0.0,0.0,1.0);
			glutSolidSphere(7.5,50,10);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(45.0 + lionFirstX + lionmove,-10.0 + (lionFirstY/2.0),0.0);
			glRotatef(-legSpin + (7 * walkb), 0.0, 0.0, 1.0);
			glColor3f(0.5,0.2,0.0);
			glRectf(-5,-2,5,2);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(40.0 - lionFirstX + lionmove,-10.0 + lionFirstY,0.0);
			glColor3f(0.5,0.2,0.0);						//BBLeg
			glutSolidSphere(2,50,10);
		glPopMatrix();	
		glPushMatrix();
			glTranslatef(48.0 + lionLegFFX + (walkb/2) + lionmove,-10.0,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(49.0 + lionLegFFX + (walkb/2) + lionmove,-10.0,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();

		glBegin(GL_POLYGON);
			glColor3f(0.5,0.2,0.0);
			glVertex2f(57 + lionFirstX + lionmove,0.0 + lionFirstY);
			glColor3f(0.5,0.2,0.0);					//Lion Tail
			glVertex2f(57 + lionFirstX + lionmove,-3.0 + lionFirstY);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(62 + lionFirstX + lionmove,-10.0 + lionFirstY);
		glEnd();
	
		glBegin(GL_QUADS);
			glColor3f(0.5,0.2,0.0);
			glVertex2f(50 + lionFirstX + lionmove,-10 + lionFirstY);
			glColor3f(0.5,0.2,0.0);         			 //Lion Body
			glVertex2f(50 + lionFirstX + lionmove,5 + lionFirstY);
			glColor3f(1.0,0.3,0.0);
			glVertex2i(20 + lionFirstX + lionmove,4 + lionFirstY);
			glColor3f(1.0,0.3,0.0);
			glVertex2i(20 + lionFirstX + lionmove,-10 + lionFirstY);
		glEnd();
		glBegin(GL_POLYGON);
			glColor3f(0.6,0.2,0.0);
			glVertex2f(35 + lionFirstX + lionmove,11 + lionFirstY);
			glColor3f(0.6,0.2,0.0);          
			glVertex2f(35 + lionFirstX + lionmove,17 + lionFirstY);
			glColor3f(0.6,0.2,0.0);
			glVertex2i(30 + lionFirstX + lionmove,11 + lionFirstY);	
		glEnd();
		glPushMatrix();
			glTranslatef(51.0 + lionFirstX + lionmove,-10.0 + (lionFirstY/2.0),0.0);
			glRotatef(-legSpin + (7*walkf), 0.0, 0.0, 1.0);
			glColor3f(0.5,0.2,0.0);
			glRectf(-5,-2,5,2);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(46.0 - lionFirstX + lionmove,-10.0 + lionFirstY,0.0);
			glColor3f(0.5,0.2,0.0);						//FBLeg
			glutSolidSphere(2,50,10);
		glPopMatrix();	
		glPushMatrix();
			glTranslatef(54.0 + lionLegFFX + (walkf/2) + lionmove,-10.0,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(55.0 + lionLegFFX + (walkf/2) + lionmove,-10.0,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();
		glBegin(GL_POLYGON);
			glColor3f(0.6,0.2,0.0);
			glVertex2f(18 + lionFirstX + lionmove,11 + lionFirstY);
			glColor3f(0.6,0.2,0.0);          
			glVertex2f(18 + lionFirstX + lionmove,17 + lionFirstY);
			glColor3f(0.6,0.2,0.0);
			glVertex2i(23 + lionFirstX + lionmove,11 + lionFirstY);	
		glEnd();
		glPushMatrix();
			glTranslatef(27 + lionFirstX + lionmove,0 + lionFirstY,0);
			glColor3f(0.2,0.0,0.0);
			glRotatef(-85,0.0,0.0,1.0);
			glutSolidSphere(15,5,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(27 + lionFirstX + lionmove,0 + lionFirstY,0);
			glColor3f(0.6,0.2,0.0);
			glRotatef(-85,0.0,0.0,1.0);
			glutSolidSphere(10,5,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(27 + lionFirstX + lionmove,-4 + lionFirstY,0);
			glColor3f(0.3,0.1,0.0);
			glRotatef(-85,0.0,0.0,1.0);				//talk mouth
			glutSolidSphere(0.0 + roarRadius,50,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(27 + lionFirstX + lionmove,-2 + lionFirstY,0);
			glColor3f(0.2,0.0,0.0);
			glRotatef(-85,0.0,0.0,1.0);
			glutSolidSphere(4,5,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(23 + lionFirstX + lionmove,4 + lionFirstY,0);
			glColor3f(0.0,0.0,0.0);
			glRotatef(27,0.0,0.0,1.0);
			glutSolidSphere(0.25 + exp,50,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(31 + lionFirstX + lionmove,5 + lionFirstY,0);
			glColor3f(0.0,0.0,0.0);
			glRotatef(27,0.0,0.0,1.0);
			glutSolidSphere(0.25 + exp,50,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(23 + lionFirstX + lionmove,4 + lionFirstY,0);
			glColor3f(0.0+lionEye + lionWhiteEye,0.0 + lionWhiteEye,0.0 + lionWhiteEye);
			glutSolidSphere(0.25,50,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(31 + lionFirstX + lionmove,5 + lionFirstY,0);
			glColor3f(0.0+lionEye + lionWhiteEye,0.0 + lionWhiteEye,0.0 + lionWhiteEye);
			glutSolidSphere(0.25,50,10);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(36.0 + lionFirstX + lionmove,-10.0 + (lionFirstY/2.0),0.0);
			glRotatef(-legSpin + (7*walkf), 0.0, 0.0, 1.0);
			glColor3f(0.5,0.2,0.0);
			glRectf(-5,-2,5,2);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(31.0 - lionFirstX + lionmove,-10.0 + lionFirstY,0.0);
			glColor3f(0.5,0.2,0.0);						//LionFront FLeg
			glutSolidSphere(2,50,10);
		glPopMatrix();	
		glPushMatrix();
			glTranslatef(39.0 + lionLegFFX + (walkf/2) + lionmove,-10.0,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(40.0 + lionLegFFX + (walkf/2) + lionmove,-10.0,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(24.5 + lionFirstX + (walkb/2) + lionmove,-10.0,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();	
		glPushMatrix();
			glTranslatef(23.5 + lionFirstX + (walkb/2) + lionmove,-10.0,0.0);
			glColor3f(0.5,0.2,0.0);
			glutSolidSphere(2,50,10);
		glPopMatrix();

		glPushMatrix();
		glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(29 + lionFirstX + lionmove,0 + lionFirstY);
			glVertex2f(33 + lionFirstX + lionmove,1 + lionFirstY);
		glEnd();
		glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(29 + lionFirstX + lionmove,0 + lionFirstY);
			glVertex2f(33 + lionFirstX + lionmove,0 + lionFirstY);
		glEnd();
		glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(29 + lionFirstX + lionmove,0 + lionFirstY);
			glVertex2f(33 + lionFirstX + lionmove,-1 + lionFirstY);
		glEnd();
		glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(25 + lionFirstX + lionmove,0 + lionFirstY);
			glVertex2f(21 + lionFirstX + lionmove,1 + lionFirstY);
		glEnd();
		glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(25 + lionFirstX + lionmove,0 + lionFirstY);
			glVertex2f(21 + lionFirstX + lionmove,0 + lionFirstY);
		glEnd();
		glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(25 + lionFirstX + lionmove,0 + lionFirstY);
			glVertex2f(21 + lionFirstX + lionmove,-1 + lionFirstY);
		glEnd();
		glPopMatrix();
	}

	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(-15 + backmove,-60);
		glColor3f(0.2,0.0,0.0);          //stones
		glVertex2f(-18 + backmove,-55);
		glColor3f(0.2,0.0,0.0);
		glVertex2i(-24 + backmove,-53);
		glColor3f(0.2,0.0,0.0);
		glVertex2i(-30 + backmove,-58);
		glColor3f(0.0,0.0,0.0);
		glVertex2i(-35 + backmove,-60);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(10 + backmove,-60);
		glColor3f(0.2,0.0,0.0);          //stones
		glVertex2f(15 + backmove,-53);
		glColor3f(0.2,0.0,0.0);
		glVertex2i(23 + backmove,-50);
		glColor3f(0.2,0.0,0.0);
		glVertex2i(32 + backmove,-53);
		glColor3f(0.2,0.0,0.0);
		glVertex2i(30 + backmove,-57);
		glColor3f(0.0,0.0,0.0);
		glVertex2i(25 + backmove,-60);
	glEnd();

	if(mouseThink == 0 && netDisappear == 0)
	{
		glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(0 + lionmove,65 + netY - netBreak);
			glVertex2f(55 + lionmove,65 + netY - netBreak);
			glVertex2f(55 + lionmove,65 + netY - netBreak);			//net
			glVertex2f(55 + netX + lionmove,60 + netY + netExtend);
			glVertex2f(55 + netX + lionmove,60 + netY + netExtend);
			glVertex2f(0 - netX + lionmove,60 + netY + netExtend);
			glVertex2f(0 - netX + lionmove,60 + netY + netExtend);
			glVertex2f(0 + lionmove,65 + netY - netBreak);
			glVertex2f(0 + lionmove,65 + netY - netBreak);
			glVertex2f(55 + lionmove,65 + netY - netBreak);
			glVertex2f(55 + lionmove,65 + netY - netBreak);
			glVertex2f(55 - netX + lionmove,60 + netY + netExtend);
			glVertex2f(55 - netX + lionmove,60 + netY + netExtend);
			glVertex2f(0 + netX + lionmove,60 + netY + netExtend);
			glVertex2f(0 + netX + lionmove,60 + netY + netExtend);
			glVertex2f(0 + lionmove,65 + netY - netBreak);
		glEnd();
		glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(10 + lionmove,65 + netY - netBreak);
			glVertex2f(10 + lionmove + netX,60 + netY + netExtend);
			glVertex2f(20 + lionmove,65 + netY - netBreak);			//net
			glVertex2f(20 + netX + lionmove,60 + netY + netExtend);
			glVertex2f(30 + lionmove,65 + netY - netBreak);
			glVertex2f(30 + netX + lionmove,60 + netY + netExtend);
			glVertex2f(40+ lionmove,65 + netY - netBreak);
			glVertex2f(40 + lionmove + netX,60 + netY + netExtend);
			glVertex2f(47+ lionmove,65 + netY - netBreak);
			glVertex2f(47 + lionmove + netX,60 + netY + netExtend);

			glVertex2f(10 + lionmove,65 + netY - netBreak);
			glVertex2f(10 + lionmove - netX,60 + netY + netExtend);
			glVertex2f(20 + lionmove,65 + netY - netBreak);			//net
			glVertex2f(20 - netX + lionmove,60 + netY + netExtend);
			glVertex2f(30 + lionmove,65 + netY - netBreak);
			glVertex2f(30 - netX + lionmove,60 + netY + netExtend);
			glVertex2f(40+ lionmove,65 + netY - netBreak);
			glVertex2f(40 + lionmove - netX,60 + netY + netExtend);
			glVertex2f(47+ lionmove,65 + netY - netBreak);
			glVertex2f(47 + lionmove - netX,60 + netY + netExtend);
		glEnd();
	}	

	glPushMatrix();
		glTranslatef(-53.0 + mouseFirstX + backmove,-19.5 + mouseFirstY,0.0);
		glColor3f(0.3,0.3,0.3);
		glRectf(-8,-0.25,8,0.25);
	glPopMatrix();
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(-65 + mouseFirstX + backmove,-20 + mouseFirstY);
		glColor3f(0.0,0.0,0.0);          						//mouse
		glVertex2f(-60 + mouseFirstX + backmove,-15 + mouseFirstY);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(-55 + mouseFirstX + backmove,-14 + mouseFirstY);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(-50 + mouseFirstX + backmove,-15 + mouseFirstY);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(-45 + mouseFirstX + backmove,-20 + mouseFirstY + mouseTalk);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(-52 + mouseFirstX + backmove,-17 + mouseFirstY);
		glColor3f(0.0,0.0,0.0);          
		glVertex2f(-54 + mouseFirstX + backmove,-15 + mouseFirstY);
		glColor3f(0.3,0.3,0.3);
		glVertex2i(-54 + mouseFirstX + backmove,-17 + mouseFirstY);
	glEnd();
	glPushMatrix();
		glTranslatef(-67.0 + mouseFirstX + backmove,-19.5 + mouseFirstY,0.0);
		glColor3f(0.2,0.2,0.2);
		glRectf(-4,-0.5,4,0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-50 + mouseFirstX + backmove,-17 + mouseFirstY,0);
		glColor3f(0.0,0.0,0.0);
		glRotatef(27,0.0,0.0,1.0);
		glutSolidSphere(0.5,50,10);
	glPopMatrix();
	glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(-48 + mouseFirstX + backmove,-19 + mouseFirstY);
		glVertex2f(-52 + mouseFirstX + backmove,-19 + mouseFirstY);
	glEnd();
	glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(-48 + mouseFirstX + backmove,-19 + mouseFirstY);
		glVertex2f(-52 + mouseFirstX + backmove,-18 + mouseFirstY);
	glEnd();
	glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(-48 + mouseFirstX + backmove,-19 + mouseFirstY);
		glVertex2f(-52 + mouseFirstX + backmove,-20 + mouseFirstY);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.0,0.1,0.0);
		glVertex2f(-60 + backmove,-60);
		glColor3f(0.0,0.5,0.0);          
		glVertex2f(-60 + backmove,-20);
		glColor3f(0.0,0.2,0.0);		//bushes
		glVertex2i(-54 + backmove,-45);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(-52 + backmove,-35);
		glColor3f(0.0,0.2,0.0);
		glVertex2i(-49 + backmove,-50);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(-45 + backmove,-30);
		glColor3f(0.0,0.2,0.0);
		glVertex2i(-40 + backmove,-47);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(-37 + backmove,-33);	
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.1,0.0);
		glVertex2f(60 + backmove,-60);
		glColor3f(0.0,0.5,0.0);          
		glVertex2f(60 + backmove,-20);
		glColor3f(0.0,0.2,0.0);		//bushes
		glVertex2i(54 + backmove,-45);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(52 + backmove,-35);
		glColor3f(0.0,0.2,0.0);
		glVertex2i(49 + backmove,-50);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(45 + backmove,-30);
		glColor3f(0.0,0.2,0.0);
		glVertex2i(40 + backmove,-47);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(37 + backmove,-33);	
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.1,0.0);
		glVertex2f(-17 + backmove,-60);
		glColor3f(0.0,0.5,0.0);          
		glVertex2f(-19 + backmove,-30);
		glColor3f(0.0,0.2,0.0);		//bushes
		glVertex2i(-15 + backmove,-45);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(-13 + backmove,-35);
		glColor3f(0.0,0.2,0.0);
		glVertex2i(-10 + backmove,-50);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(-8 + backmove,-30);
		glColor3f(0.0,0.2,0.0);
		glVertex2i(-5 + backmove,-47);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(-3 + backmove,-30);	
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.1,0.0);
		glVertex2f(9 + backmove,-60);
		glColor3f(0.0,0.5,0.0);          
		glVertex2f(13 + backmove,-30);
		glColor3f(0.0,0.2,0.0);		//bushes
		glVertex2i(15 + backmove,-45);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(17 + backmove,-35);
		glColor3f(0.0,0.2,0.0);
		glVertex2i(20 + backmove,-50);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(23 + backmove,-30);
		glColor3f(0.0,0.2,0.0);
		glVertex2i(25 + backmove,-47);
		glColor3f(0.0,0.5,0.0);
		glVertex2i(27 + backmove,-30);	
	glEnd();

	//dialoug Boxes

	if(lionAngry == 1 || lionConvinced == 1 || lionHelp == 1 || lionThanking == 1)
	{
		glPushMatrix();
		glColor3f(0.6,0.6,0.6);
		glTranslatef(5,40,0);
		glRectf(-23,-10,23,10);
		glPopMatrix();
		glBegin(GL_POLYGON);					//Lion Dialouges
			glVertex2f(20,30);
			glVertex2f(20,25);
			glVertex2f(15,30);
		glEnd();
		if(lionAngry == 1)
		{
			glPushMatrix();
			glColor3f(1.0,0.0,0.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-15.0, 45.0, 0.0);
		    glutBitmapString(font_style1, "How Dare you wake me up... \n \n I am going to eat you.");
			glPopMatrix();
		}
		if(lionConvinced == 1)
		{
			glPushMatrix();
			glColor3f(0.5,0.2,0.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-15.0, 45.0, 0.0);
		    glutBitmapString(font_style1, "You are too small... how can \n you help me? \n Anyways I am going to \n leave you.");
			glPopMatrix();
		}
		if(lionHelp == 1)
		{
			glPushMatrix();
			glColor3f(0.5,0.2,0.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-5.0, 45.0, 0.0);
		    glutBitmapString(font_style1, "Help!!\nHelp!!\nHelp!!\nHelp");
			glPopMatrix();
		}
		if(lionThanking == 1)
		{
			glPushMatrix();
			glColor3f(0.5,0.2,0.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-15.0, 45.0, 0.0);
		    glutBitmapString(font_style1, "\nThank you. From now we are \n \n friends...");
			glPopMatrix();
		}
	}
	
	if(mouseTalkingD == 1 || mouseThinking == 1)
	{
		glPushMatrix();
		glColor3f(0.6,0.6,0.6);
		glTranslatef(-15,13,0);
		glRectf(-25,-10,24,10);
		glPopMatrix();
		glBegin(GL_POLYGON);					//mouse Dialouges
			glVertex2f(-15,3);
			glVertex2f(-15,-2);
			glVertex2f(-10,3);
		glEnd();

		if(mouseTalkingD == 1)
		{
			glPushMatrix();
			glColor3f(0.0,0.0,1.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-39.0, 15.0, 0.0);
		    glutBitmapString(font_style1, "Oo please lion, don't eat me I will \n \n help you when you are in trouble.");
			glPopMatrix();
		}
		if(mouseThinking == 1)
		{
			glPushMatrix();
			glColor3f(0.0,0.0,1.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-35.0, 15.0, 0.0);
		    glutBitmapString(font_style1, "My friend is in Danger, \n \n Now its my turn to help him.");
			glPopMatrix();
		}
	}
	
	if(starting == 1 || ending == 1 || netD == 1 || fewDays == 1)
	{
		glPushMatrix();
		glColor3f(0.6,0.6,0.6);					//heading
		glTranslatef(0,47,0);
		glRectf(-40,-10,40,10);
		glPopMatrix();
	
		if(starting == 1)
		{
			glPushMatrix();
			glColor3f(0.0,0.0,0.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-27.0, 50.0, 0.0);
		    	glutBitmapString(font_style1, "One day a mouse was playing and \n \n \t\t\t\t\t started disturbing a lion");
			glPopMatrix();
		}
		if(ending == 1)
		{
			glPushMatrix();
			glColor3f(0.0,0.0,0.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-27.0, 50.0, 0.0);
		    	glutBitmapString(font_style1, "Moral of the story : \n \n \t\t\t\t\tMercy never goes unrewarded");
			glPopMatrix();
		}
		if(fewDays == 1)
		{
			glPushMatrix();
			glColor3f(0.0,0.0,0.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-17.0, 50.0, 0.0);
		    	glutBitmapString(font_style1, "\nFew Days Later...");
			glPopMatrix();
		}
		if(netD == 1)
		{
			glPushMatrix();
			glColor3f(0.0,0.0,0.0);
			GLvoid *font_style1 = GLUT_BITMAP_HELVETICA_18;
			glRasterPos3f (-20.0, 50.0, 0.0);
		    	glutBitmapString(font_style1, "\nThe Lion gets trapped in a net.");
			glPopMatrix();
		}
	}

	glutSwapBuffers();
}

void mouseStart(void)
{
	timer++;
	if(timer <= 50)
	{
		starting = 1;
		mouseFirstX = mouseFirstX + 0.25;
		mouseFirstY = mouseFirstY - 0.25;
	}
	else if((timer > 50) && (timer <= 150))
	{
		mouseFirstX = mouseFirstX + 0.25;
		mouseFirstY = mouseFirstY + 0.25;
	}
	else if((timer > 150) && (timer <= 170))
	{
		mouseFirstX = mouseFirstX + 0.25;
		mouseFirstY = mouseFirstY - 0.25;
	}
	else if((timer > 170) && (timer <= 275))
	{
		mouseFirstX = mouseFirstX + 0.25;
		mouseFirstY = mouseFirstY + 0.0;
	}
	else if((timer > 275) && (timer <= 300))
	{
		mouseFirstX = mouseFirstX - 0.25;
		mouseFirstY = mouseFirstY + 0.0;
	}
	else if((timer > 300) && (timer <= 315))
	{
		mouseFirstX = mouseFirstX + 0.25;
		mouseFirstY = mouseFirstY + 0.0;
	}
	else if((timer > 315) && (timer <= 330))
	{
		mouseFirstX = mouseFirstX - 0.25;
		mouseFirstY = mouseFirstY + 0.0;
	}
	else if((timer > 330) && (timer <= 345))
	{
		mouseFirstX = mouseFirstX + 0.25;
		mouseFirstY = mouseFirstY + 0.0;
	}
	else if((timer > 345) && (timer <= 360))
	{
		mouseFirstX = mouseFirstX - 0.25;
		mouseFirstY = mouseFirstY + 0.0;
	}
	else if((timer > 360) && (timer <= 375))
	{
		mouseFirstX = mouseFirstX + 0.25;
		mouseFirstY = mouseFirstY + 0.0;
	}
	else if((timer > 375) && (timer <= 380))
	{
		starting = 0;
		mouseFirstX = mouseFirstX + 0.0;
		mouseFirstY = mouseFirstY + 0.0;
		exp = 0.5;
	}
	else if((timer > 380) && (timer <= 400))
	{
		mouseFirstX = mouseFirstX - 1.25;
		lionFirstX = lionFirstX - 0.15;
		lionFirstY = lionFirstY + 0.5;
		exp = 0.5;
		lionEye = 1.0;
		lionLegFFY = 3.0;
		lionLegFFX = lionFirstX * 2.5;
		if(legSpin <= 90)
			legSpin = legSpin + 13;
	}
	else if(((timer > 400) && (timer <= 430)) || ((timer > 480) && (timer <= 510)) || ((timer > 560) && (timer <= 590)) || ((timer > 640) && (timer <= 670)))
	{
		lionAngry = 1;
		if(roarRadius <= 4.0)
			roarRadius = roarRadius + 0.2;
	}
	else if(((timer > 440) && (timer <= 470)) || ((timer > 520) && (timer <= 550)) || ((timer > 600) && (timer <= 630)) || ((timer > 700) && (timer <= 730)))
	{
		if(roarRadius >= 0.0)
			roarRadius = roarRadius - 0.2;
	}
	
	else if(((timer > 740) && (timer <= 750)) || ((timer > 780) && (timer <= 790)) || ((timer > 820) && (timer <= 830)) || ((timer > 860) && (timer <= 870)) || ((timer > 900) && (timer <= 910)) || ((timer > 940) && (timer <= 950)) || ((timer > 980) && (timer <= 990))|| ((timer > 1020) && (timer <= 1030)))
	{
		lionAngry = 0;
		mouseTalkingD = 1;
		mouseTalk = 1.0;
	}
	else if(((timer > 760) && (timer <= 770)) || ((timer > 800) && (timer <= 810)) || ((timer > 840) && (timer <= 850)) || ((timer > 880) && (timer <= 890)) || ((timer > 920) && (timer <= 930)) || ((timer > 960) && (timer <= 970)) || ((timer > 1000) && (timer <= 1010)) || ((timer > 1040) && (timer <= 1050)))
	{
		mouseTalk = 0.0;
	}

	else if(((timer > 1060) && (timer <= 1090)) || ((timer > 1140) && (timer <= 1170)) || ((timer > 1220) && (timer <= 1250)) || ((timer > 1300) && (timer <= 1330)))
	{
		mouseTalkingD = 0;
		lionConvinced = 1;
		lionEye = 0.0;
		if(roarRadius <= 4.0)
			roarRadius = roarRadius + 0.2;
	}
	else if(((timer > 1100) && (timer <= 1130)) || ((timer > 1180) && (timer <= 1210)) || ((timer > 1260) && (timer <= 1290)) || ((timer > 1340) && (timer <= 1370)))
	{
		if(roarRadius >= 0.0)
			roarRadius = roarRadius - 0.2;
	}
	else if((timer > 1370) && (timer <= 1400))
	{
		lionConvinced = 0;
		mouseFirstX = mouseFirstX + 0.5;
		mouseFirstY = mouseFirstY - 0.5;
	}
	else if((timer > 1400) && (timer <= 1510))
	{
		mouseFirstX = mouseFirstX + 0.5;
		mouseFirstY = mouseFirstY + 0.0;
	}
	else if((timer > 1510) && (timer <= 1980))
	{
		fewDays = 1;
		backmove = backmove + 0.25;
		if(((timer > 1510) && (timer <= 1520)) || ((timer > 1590) && (timer <= 1600)) || ((timer > 1670) && (timer <= 1680)) || ((timer > 1750) && (timer <= 1760)) || ((timer > 1830) && (timer <= 1840)) || ((timer > 1910) && (timer <= 1920)))
		{
			walkf = walkf + 0.5;
			lionmove = lionmove - 0.1;
		}
		else if(((timer > 1530) && (timer <= 1540)) || ((timer > 1610) && (timer <= 1620)) || ((timer > 1690) && (timer <= 1700)) || ((timer > 1770) && (timer <= 1780)) || ((timer > 1850) && (timer <= 1860)) || ((timer > 1930) && (timer <= 1940)))
		{
			walkf = walkf - 0.5;
			lionmove = lionmove - 0.1;
		}
		else if(((timer > 1550) && (timer <= 1560)) || ((timer > 1630) && (timer <= 1640)) || ((timer > 1710) && (timer <= 1720)) || ((timer > 1790) && (timer <= 1800)) || ((timer > 1870) && (timer <= 1880)) || ((timer > 1950) && (timer <= 1960)))
		{
			walkb = walkb + 0.5;
			lionmove = lionmove - 0.1;
		}
		else if(((timer > 1570) && (timer <= 1580)) || ((timer > 1650) && (timer <= 1660)) || ((timer > 1730) && (timer <= 1740)) || ((timer > 1810) && (timer <= 1820)) || ((timer > 1890) && (timer <= 1900)) || ((timer > 1970) && (timer <= 1980)))
		{
			walkb = walkb - 0.5;
			lionmove = lionmove - 0.1;
		}
	}
	else if((timer > 1980) && (timer <= 2060))
	{
		fewDays = 0;
		netD = 1;
		netY = netY - 0.5;
	}
	else if((timer > 2060) && (timer <= 2125))
	{
		netX = netX + 0.1;
		netExtend = netExtend - 0.5;
	}
	else if(((timer > 2125) && (timer <= 2155)) || ((timer > 2205) && (timer <= 2235)) || ((timer > 2285) && (timer <= 2315)) || ((timer > 2365) && (timer <= 2395)))
	{
		netD = 0;
		lionHelp = 1;
		lionWhiteEye = 1.0;
		if(roarRadius <= 4.0)
			roarRadius = roarRadius + 0.2;
	}
	else if(((timer > 2165) && (timer <= 2195)) || ((timer > 2245) && (timer <= 2275)) || ((timer > 2325) && (timer <= 2355)) || ((timer > 2405) && (timer <= 2435)))
	{
		lionWhiteEye = 1.0;
		if(roarRadius >= 0.0)
			roarRadius = roarRadius - 0.2;
	}
	else if((timer > 2445) && (timer <= 2650))
	{
		lionHelp = 0;
		mouseThinking = 1;
		mouseThink = 1;
		mouseFirstX = -90.0;
		mouseFirstY = 5.0;
	}
	else if((timer > 2650) && (timer <= 2660))
	{
		mouseThink = 0;
		mouseThinking = 0;
		mouseFirstX = -130.0;
	}
	else if((timer > 2660) && (timer <= 2780))
	{
		mouseFirstX = mouseFirstX + 0.25;
		mouseFirstY = 7.0;
	}
	else if(((timer > 2780) && (timer <= 2790)) || ((timer > 2800) && (timer <= 2810)))
	{
		mouseTalk = 1.0;
		netBreak = netBreak + 0.12;
	}
	else if(((timer > 2790) && (timer <= 2800)) || ((timer > 2810) && (timer <= 2820)))
	{
		mouseTalk = 0.0;
		netBreak = netBreak + 0.12;
	}
	else if((timer > 2820) && (timer <= 2870))
	{
		mouseFirstX = mouseFirstX + 0.3;
	}
	else if(((timer > 2870) && (timer <= 2780)) || ((timer > 2890) && (timer <= 2900)))
	{
		mouseTalk = 1.0;
		netBreak = netBreak + 0.12;
	}
	else if(((timer > 2880) && (timer <= 2890)) || ((timer > 2900) && (timer <= 2910)))
	{
		mouseTalk = 0.0;
		netBreak = netBreak + 0.12;
	}
	else if((timer > 2910) && (timer <= 2960))
	{
		mouseFirstX = mouseFirstX + 0.3;
	}
	else if(((timer > 2960) && (timer <= 2970)) || ((timer > 2980) && (timer <= 2990)))
	{
		mouseTalk = 1.0;
		netBreak = netBreak + 0.15;
	}
	else if(((timer > 2970) && (timer <= 2980)) || ((timer > 2990) && (timer <= 3000)))
	{
		mouseTalk = 0.0;
		netBreak = netBreak + 0.15;
	}
	else if((timer > 3000) && (timer <= 3050))
	{
		mouseFirstX = mouseFirstX + 0.3;
	}
	else if(((timer > 3050) && (timer <= 3060)) || ((timer > 3070) && (timer <= 3080)))
	{
		mouseTalk = 1.0;
		netBreak = netBreak + 0.15;
	}
	else if(((timer > 3060) && (timer <= 3070)) || ((timer > 3080) && (timer <= 3090)))
	{
		mouseTalk = 0.0;
		netBreak = netBreak + 0.15;
	}
	else if((timer > 3090) && (timer <= 3140))
	{
		mouseFirstX = mouseFirstX + 0.3;
	}
	else if(((timer > 3140) && (timer <= 3150)) || ((timer > 3160) && (timer <= 3180)))
	{
		mouseTalk = 1.0;
		netBreak = netBreak + 0.15;
	}
	else if(((timer > 3150) && (timer <= 3160)) || ((timer > 3190) && (timer <= 3200)))
	{
		mouseTalk = 0.0;
		netBreak = netBreak + 0.15;
	}
	else if((timer > 3200) && (timer <= 3210))
	{
		mouseFirstX = -100;
		netDisappear = 1;
	}
	else if(((timer > 3220) && (timer <= 3250)) || ((timer > 3300) && (timer <= 3330)) || ((timer > 3380) && (timer <= 3410)))
	{
		lionThanking = 1;
		if(roarRadius <= 4.0)
			roarRadius = roarRadius + 0.2;
	}
	else if(((timer > 3260) && (timer <= 3290)) || ((timer > 3340) && (timer <= 3370)) || ((timer > 3420) && (timer <= 3450)))
	{
		if(roarRadius >= 0.0)
			roarRadius = roarRadius - 0.2;
	}
	else if((timer > 3460) && (timer <= 3470))
	{
		lionThanking = 0;
		ending = 1;
	}
	
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y) 
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(mouseStart);
         break;
      default:
         break;
   }
}

void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei)w, (GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-60.0,60.0,-60.0,60.0,-100.0,100.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}

int main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowSize(700,700);
glutInitWindowPosition(0,0);
glutCreateWindow(argv[0]);
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMouseFunc(mouse);
glutMainLoop();
return 0;
}
