#include "blob.h"
#include <GL/glut.h>
#include <iostream>
void Blob::update()
{
    std::cout << "hello world";
}
void Blob::drawSelf()
{
    glViewport(50, 50, 200, 200);
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.8,0.4);
        glVertex2f(-0.9,-0.9);
        glVertex2f(0.9,-0.9);
        glVertex2f(0.9,0.9);
        glVertex2f(-0.9,0.9);
    glEnd();
}
