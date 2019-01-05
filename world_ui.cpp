#include <GL/glut.h>
#include "blob.h"
/*
 *  This file is a graphical interface used to interact with a blob world.
 */
Blob blob;

void display(void)
{
    glClearColor(0.084,0.563,.98,0);
	glClear(GL_COLOR_BUFFER_BIT);
    blob.drawSelf();
    glFlush();
}

int main(int argc, char** argv)
{
    blob.update();

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1300, 1300);
    glutInitWindowPosition(500, 500);
    glutCreateWindow("Blob World");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
