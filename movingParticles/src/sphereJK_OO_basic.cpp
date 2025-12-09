// sphereJK_OO.cpp
// draw a single sphere in the middle of the screen
// OO basic

#include <gl/glut.h>// OpenGL toolkit
#include <app.h>// OpenGL toolkit

class SphereDemo : public Application
{
public:
    virtual void display();
};

void SphereDemo::display(void)
{
	Application::display();
	glColor3ub(255, 0, 0);
	glutSolidSphere(10, 30, 30);
	glutSwapBuffers();
}

Application* getApplication()
{
    return new SphereDemo();
}






