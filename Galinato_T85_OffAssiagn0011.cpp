/* Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above notice and this permission notice shall be included in all copies
 * or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *

/* Source code for "Basic Primitives" by Mark Daniel G. Dacer
 * www.github.com/Jaeger47/Learning-OpenGL
 */
#include <iostream>
#include <glut.h>

using namespace std;

void display();
void reshape(int,int);

void init()
{
	//set background to black
	glClearColor(1.0,0.2,0.0,1.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //display modes
	
	glutInitWindowPosition(200,100); //window postion
	glutInitWindowSize(500,500); //window size
	glutCreateWindow ("Basic Primitives - github.com/Jaeger47/Learning-OpenGL"); //create the initialized window with name
	
	glutDisplayFunc(display); //initialize display function
	glutReshapeFunc(reshape); //initialize reshape function
	
	init();
	glutMainLoop();//loop at the functions

}

void display()
{
	
	glClear(GL_COLOR_BUFFER_BIT);//clear color
	
	glLoadIdentity();//clear transforms

	//draw Symbol with total of 36 dots
    glLineWidth(6);

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(0.0f,-11.0f);
		glVertex2f(6.0f, -8.0f);
		glVertex2f(2.0f, -4.0f);
		glVertex2f(3.0f, -3.0f);
		glVertex2f(2.0f, -1.0f);
		glVertex2f(6.0f, -2.0f);
		glVertex2f(5.0f, -3.0f);
		glVertex2f(9.0f, -7.0f);
		glVertex2f(9.0f, -5.0f);
		glVertex2f(12.0f, 1.0f);
		glVertex2f(9.0f, 5.0f);
		glVertex2f(9.0f, 7.0f);
		glVertex2f(5.0f, 4.0f);
		glVertex2f(6.0f, 3.0f);
		glVertex2f(2.0f, 1.0f);
		glVertex2f(4.0f, 3.0f);
		glVertex2f(3.0f, 4.0f);
		glVertex2f(6.0f, 7.0f);
		glVertex2f(0.0f, 10.0f);
		glVertex2f(-5.0f, 7.0f);
		glVertex2f(-3.0f, 4.0f);
		glVertex2f(-4.0f, 3.0f);
		glVertex2f(-2.0f, 1.0f);
		glVertex2f(-6.0f, 3.0f);
		glVertex2f(-5.0f, 4.0f);
		glVertex2f(-8.0f, 7.0f);
		glVertex2f(-8.0f, 5.0f);
		glVertex2f(-11.0f, 1.0f);
		glVertex2f(-8.0f, -4.0f);
		glVertex2f(-8.0f, -6.0f);
		glVertex2f(-5.0f, -4.0f);
		glVertex2f(-6.0f, -3.0f);
		glVertex2f(-2.0f, -1.0f);
		glVertex2f(-3.0f, -3.0f);
		glVertex2f(-2.0f, -4.0f);
		glVertex2f(-5.0f, -8.0f);
		
	glEnd();

	//glBegin(GL_POLYGON);
	//glColor3f(0.0f, .0f, 0.0f);
	 //glVertex2f(0.0f,0.0f);
	//glEnd();

	//COLOR MEASUREMENT
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.6f, 0.0f);
	 glVertex2f(0.0f,-11.0f);
	 glVertex2f(6.0f,-8.0f);
	 glVertex2f(2.0f,-4.0f);
	 glVertex2f(3.0f,-3.0f);
	 glVertex2f(2.0f,-1.0f);
	 glVertex2f(-2.0f,-1.0f);
	 glVertex2f(-3.0f,-3.0f);
	 glVertex2f(-2.0f,-4.0f);
	 glVertex2f(-5.0f,-8.0f);

	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2f(2.0f,1.0f);
	 glVertex2f(4.0f,3.0f);
	 glVertex2f(3.0f,4.0f);
	 glVertex2f(6.0f,7.0f);
	 glVertex2f(0.0f,10.0f);
	 glVertex2f(-5.0f,7.0f);
	 glVertex2f(-3.0f,4.0f);
	 glVertex2f(-4.0f,3.0f);
	 glVertex2f(-2.0f,1.0f);
     glVertex2f(2.0f,1.0f);
	 

	glEnd();

	glBegin(GL_POLYGON);
	 
	 glVertex2f(6.0f,-2.0f);
	 glVertex2f(5.0f,-3.0f);
	 glVertex2f(9.0f,-7.0f);
	 glVertex2f(9.0f,-5.0f);
	 glVertex2f(12.0f,1.0f);
	 glVertex2f(2.0f,1.0f);
	 
	glEnd();

	glBegin(GL_POLYGON);
	 glVertex2f(12.0f,1.0f);
	 glVertex2f(9.0f,5.0f);
	 glVertex2f(9.0f,7.0f);
	 glVertex2f(5.0f,4.0f);
	 glVertex2f(6.0f,3.0f);
	 glVertex2f(2.0f,-1.0f);
	glEnd();

	glBegin(GL_POLYGON);
     glVertex2f(-6.0f,3.0f);
	 glVertex2f(-5.0f,4.0f);
	 glVertex2f(-8.0f,7.0f);
	 glVertex2f(-8.0f,5.0f);
	 glVertex2f(-11.0f,1.0f);
	 glVertex2f(-2.0f,-1.0f);
	 
	 
	glEnd();

	glBegin(GL_POLYGON);
	 
	 glVertex2f(-6.0f,-3.0f);
     glVertex2f(-2.0f,1.0f);
	 glVertex2f(-11.0f,1.0f);
	 glVertex2f(-8.0f,-4.0f);
     glVertex2f(-8.0f,-6.0f);
	 glVertex2f(-5.0f,-4.0f);
	glEnd();

	glBegin(GL_POLYGON);
	 glVertex2f(-6.0f,-3.0f);	 
	 glVertex2f(-2.0f,-1.0f);
	 glVertex2f(-2.0f,1.0f);
	 glVertex2f(-6.0f,3.0f);
	glEnd();

	glBegin(GL_POLYGON);
    
	glVertex2f(2.0f,-1.0f);
    glVertex2f(6.0f,-2.0f);
    glVertex2f(6.0f,3.0f);
	glVertex2f(2.0f,1.0f);
	glEnd();

	glBegin(GL_POLYGON);
    
	glVertex2f(2.0f,-1.0f);
    glVertex2f(2.0f, 1.0f);
    glVertex2f(-2.0f,1.0f);
	glVertex2f(-2.0f,-1.0f);
	glEnd();


	//END
	glutSwapBuffers(); //Send the scene to the screen
}

void reshape(int w, int h)
{
	glViewport(0,0,(GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	//size of the world
	gluOrtho2D(-10,10,-10,10);
	glMatrixMode(GL_MODELVIEW);
}
