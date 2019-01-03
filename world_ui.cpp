#include <GL/glut.h>
/*
 *  This class is a graphical interface used to interact with a blob world.
 */

void drawSquare(void)
{
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
    glEnd();
}

void displayMe(void)
{
    glClearColor(0.084,0.563,.98,0);
	glClear(GL_COLOR_BUFFER_BIT);
    drawSquare();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1300, 1300);
    glutInitWindowPosition(500, 500);
    glutCreateWindow("Hello world :D");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
