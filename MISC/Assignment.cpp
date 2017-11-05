#include<iostream>S
#include<stdio.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
using namespace std;
float f1[4][2]={{30,250},{20,270},{60,270},{55,230}};
float f2[4][2]={{55,230},{45,200},{70,180},{90,215}};
float f3[4][2]={{90,215},{110,240},{100,250},{70,245}};
float f4[4][2]={{70,245},{100,260},{100,280},{90,290}};
float f5[4][2]={{60,280},{65,310},{70,320},{90,290}};
float f6[4][2]={{95,220},{115,190},{120,200},{125,210}};
float f7[4][2]={{125,210},{145,240},{90,260},{111,285}};
float f8[4][2]={{111,285},{140,310},{170,250},{145,215}};
float f9[4][2]={{90,335},{100,300},{140,300},{145,335}};
void plot(float xt,float yt)
{  glPointSize(5);
   glBegin(GL_POINTS);
   glColor3f(1,0,0);
   glVertex2f(xt,yt);
   glEnd();
}

long ncr(int n,int r)
{
   long N=1,D=1;
   for(int i=0;i<r;i++)
        N=N*(n-i);
   for(int i=1;i<=r;i++)
    D=D*i;
   return N/D;
}

void Bezire(float f[][2])
{
    float xt=0,yt=0,t=0;
    while(t<=1)
        { xt=0;yt=0;
         for(long i=0;i<4;i++)
           {
            xt=xt+f[i][0]*pow(t,i)*pow((1-t),(3-i))*ncr(3,i);
            yt=yt+f[i][1]*pow(t,i)*pow((1-t),(3-i))*ncr(3,i);
           }
             plot(xt,yt);
             t=t+0.01;
        }
}
void drawScene()
{    glClearColor(0,0,0,1);
     glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();
     glOrtho(0,700,0,700,-100,100);
     GLfloat a = 2;
     // First Segment
     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f1);
     glPopMatrix();

     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f2);
     glPopMatrix();

     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f3);
     glPopMatrix();

     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f4);
     glPopMatrix();

     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f5);
     glPopMatrix();

     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f6);
     glPopMatrix();

     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f7);
     glPopMatrix();
     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f8);
     glPopMatrix();

     glPushMatrix();
     glScalef(a,a,a);
     Bezire(f9);
     glPopMatrix();

     glPushMatrix();
     float x,y; int j=0;
     glScalef(a,a,a);
     while(j<360)
     {
         plot(3*sin(j)+120,5*cos(j)+320);
         j=j+1;
     }
     glPopMatrix();
     glFlush();
}
int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
  glutInitWindowSize(700,700);
  glutInitWindowPosition(20,20);
  glutCreateWindow("O3M");

  glutDisplayFunc(drawScene);

  glutMainLoop();

}
