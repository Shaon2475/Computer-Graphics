#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
//s1
void drawCircleHelper(float x,float y,float r)
{
    glBegin(GL_POLYGON);
    for(int i = 0;i<200;i++)
    {float A = (i*2*3.1416)/200;
    glVertex2f(x+r*cos(A),y+r*sin(A));
    }
    glEnd();
}
//s2
void drawSky(bool night) {
    glColor3f(night ? 0.04 : 0.55, night ? 0.05 : 0.82, night ? 0.16 : 0.96);
        glBegin(GL_QUADS);
    glVertex2f(0,50);glVertex2f(100,50);
    glVertex2f(100,80);glVertex2f(0,80);
    glEnd();
}
//s3
void drawSun() {
    glLineWidth(1.0f);
    glColor3f(1.0f,0.85f,0.0f);
    drawCircleHelper(83.0f,74.0f,2.7f);
    glColor3f(1.0f,0.95f,0.5f);
    drawCircleHelper(83.0f,74.0f,1.62f);
}
//s4
float cloudX1 = 0, cloudX2 = 0, cloudX3 = 0;
void drawCloud1(float x,bool night) {
    glPushMatrix();
    glTranslatef(x,0.0f,0.0f);
   glColor3f(night ? 0.26 : 1, night ? 0.28 : 1, night ? 0.38 : 1);
    drawCircleHelper(10.0f,73.0f,3.4f);
    drawCircleHelper(12.55f,73.85f,3.825f);
    drawCircleHelper(15.1f,73.0f,3.4f);
    drawCircleHelper(12.55f,71.725f,3.4f);
    glPopMatrix() ;
}
//s5
void drawCloud2(float x) {
    glPushMatrix();
    glTranslatef(x,0.0f,0.0f);
    glColor3f(0.96f,0.96f,0.96f);
    drawCircleHelper(80.0f,69.0f,4.2f);
    drawCircleHelper(83.15f,70.05f,4.725f);
    drawCircleHelper(86.3f,69.0f,4.2f);
    drawCircleHelper(83.15f,67.425f,4.2f);
    glPopMatrix();
}
//s6
void drawCloud3(float x,bool night) {
    glPushMatrix();
   glTranslatef(x, 0.0f, 0.0f);
   glColor3f(night ? 0.26 : 1, night ? 0.28 : 1, night ? 0.38 : 1);
    drawCircleHelper(50.0f,76.0f,3.0f);
    drawCircleHelper(52.25f,76.75f,3.375f);
    drawCircleHelper(54.5f,76.0f,3.0f);
    drawCircleHelper(52.25f,74.875f,3.0f);
    glPopMatrix();
}

//s7
float Px =0.0f;
float Py = 25.0f;
void drawPlane(float Px,float Py,float scale) {
    glPushMatrix();
    glTranslatef(Px,Py,0);
    glColor3f(0.88f,0.88f,0.90f);
glBegin(GL_POLYGON);
glVertex2f(8.56f,49.64f);
glVertex2f(21.88f,49.64f);
glVertex2f(24.04f,50.45f);
glVertex2f(21.88f,51.46f);
glVertex2f(8.56f,51.46f);
glVertex2f(7.30f,50.45f);
glEnd();
glColor3f(0.78f,0.12f,0.12f);
glBegin(GL_TRIANGLES);
glVertex2f(8.56f,51.26f);
glVertex2f(8.56f,53.42f);
glVertex2f(11.08f,51.26f);
glEnd();
glColor3f(0.70f, 0.72f, 0.76f);
glBegin(GL_TRIANGLES);
glVertex2f(14.68f, 50.45f);
glVertex2f(16.84f, 54.32f);
glVertex2f(18.64f, 50.45f);
glEnd();
glColor3f(0.20f,0.55f,0.85f);
drawCircleHelper(20.44f,50.72f,0.63f);
glPopMatrix();
}
//s8
void drawCarRoad() {
    glColor3f(0.26f,0.27f,0.29f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,25.0f);glVertex2f(100.0f,25.0f);
    glVertex2f(100.0f,38.0f);glVertex2f(0.0f,38.0f);
    glEnd();
    glColor3f(0.16f,0.17f,0.18f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,37.2f);glVertex2f(100.0f,37.2f);
    glVertex2f(100.0f,38.0f);glVertex2f(0.0f,38.0f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.0f,25.0f);glVertex2f(100.0f,25.0f);
    glVertex2f(100.0f,25.8f);glVertex2f(0.0f,25.8f);
    glEnd();
    glColor3f(1.0f, 0.93f, 0.55f);
    glBegin(GL_QUADS);
    glVertex2f(2.0f, 31.2f);glVertex2f(8.0f, 31.2f);
    glVertex2f(8.0f, 31.65f);glVertex2f(2.0f, 31.65f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(15.0f, 31.2f);glVertex2f(21.0f, 31.2f);
    glVertex2f(21.0f, 31.65f);glVertex2f(15.0f, 31.65f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(28.0f, 31.2f);glVertex2f(34.0f, 31.2f);
    glVertex2f(34.0f, 31.65f);glVertex2f(28.0f, 31.65f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(41.0f, 31.2f);glVertex2f(47.0f, 31.2f);
    glVertex2f(47.0f, 31.65f);glVertex2f(41.0f, 31.65f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(54.0f, 31.2f);glVertex2f(60.0f, 31.2f);
    glVertex2f(60.0f, 31.65f);glVertex2f(54.0f, 31.65f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(67.0f, 31.2f);glVertex2f(73.0f, 31.2f);
    glVertex2f(73.0f, 31.65f);glVertex2f(67.0f, 31.65f);
glEnd();
    glBegin(GL_QUADS);
glVertex2f(80.0f, 31.2f);glVertex2f(86.0f, 31.2f);
    glVertex2f(86.0f, 31.65f);glVertex2f(80.0f, 31.65f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(93.0f, 31.2f);glVertex2f(99.0f, 31.2f);
    glVertex2f(99.0f, 31.65f);glVertex2f(93.0f, 31.65f);
    glEnd();
    glColor3f(0.72f, 0.70f, 0.65f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 20.5f);glVertex2f(100.0f, 20.5f);
    glVertex2f(100.0f, 25.0f);glVertex2f(0.0f, 25.0f);
    glEnd();
    glBegin(GL_QUADS);
glVertex2f(0.0f, 38.0f);glVertex2f(100.0f, 38.0f);
    glVertex2f(100.0f, 41.0f);glVertex2f(0.0f, 41.0f);
    glEnd();
    glColor3f(0.57f,0.55f,0.52f);
    glBegin(GL_LINES);
    glVertex2f(0.0f,20.5f);glVertex2f(0.0f,25.0f);
    glVertex2f(0.0f,38.0f);glVertex2f(0.0f,41.0f);
    glEnd();
   glBegin(GL_LINES);
    glVertex2f(10.0f,20.5f);glVertex2f(10.0f,25.0f);
    glVertex2f(10.0f,38.0f);glVertex2f(10.0f,41.0f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(20.0f,20.5f);
    glVertex2f(20.0f,25.0f);glVertex2f(20.0f,38.0f);
    glVertex2f(20.0f,41.0f);
    glEnd();
   glBegin(GL_LINES);
    glVertex2f(30.0f,20.5f);glVertex2f(30.0f,25.0f);
    glVertex2f(30.0f,38.0f);glVertex2f(30.0f,41.0f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(40.0f,20.5f);glVertex2f(40.0f,25.0f);
    glVertex2f(40.0f,38.0f);glVertex2f(40.0f,41.0f);
    glEnd();
   glBegin(GL_LINES);
    glVertex2f(50.0f,20.5f);glVertex2f(50.0f,25.0f);
    glVertex2f(50.0f,38.0f);glVertex2f(50.0f,41.0f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(60.0f,20.5f);glVertex2f(60.0f,25.0f);
    glVertex2f(60.0f,38.0f);glVertex2f(60.0f,41.0f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(70.0f,20.5f);glVertex2f(70.0f,25.0f);
    glVertex2f(70.0f,38.0f);glVertex2f(70.0f,41.0f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(80.0f,20.5f);glVertex2f(80.0f,25.0f);
    glVertex2f(80.0f,38.0f);glVertex2f(80.0f,41.0f);
    glEnd();
  glBegin(GL_LINES);
    glVertex2f(90.0f,20.5f);
  glVertex2f(90.0f,25.0f);glVertex2f(90.0f,38.0f);
    glVertex2f(90.0f,41.0f);
    glEnd();
}
float ambulanceX =-20.0f;
//s9
void drawAmbulance() {
    glPushMatrix();
    glTranslatef(ambulanceX,0,0.0f);
    glColor3f(0.96f,0.96f,0.96f);
    glBegin(GL_QUADS);
    glVertex2f(20.0f,36.0f);glVertex2f(28.1f,36.0f);
    glVertex2f(28.1f,39.6f);glVertex2f(20.0f,39.6f);
    glEnd();
    glColor3f(0.90f,0.10f,0.10f);
    glBegin(GL_QUADS);
    glVertex2f(20.0f,37.44f);glVertex2f(28.1f,37.44f);
    glVertex2f(28.1f,38.16f);glVertex2f(20.0f,38.16f);
    glEnd();
    glColor3f(1.0f,0,0);
    glBegin(GL_QUADS);
    glVertex2f(23.42f,36.9f);glVertex2f(24.68f,36.9f);
    glVertex2f(24.68f,38.7f);glVertex2f(23.42f,38.7f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(22.52f,37.53f);glVertex2f(25.58f,37.53f);
    glVertex2f(25.58f,38.07f);glVertex2f(22.52f,38.07f);
    glEnd();
    glColor3f(0.88f, 0.88f, 0.88f);
    glBegin(GL_QUADS);
    glVertex2f(26.3f,36.0f);glVertex2f(28.1f,36.0f);
    glVertex2f(28.1f,39.6f);glVertex2f(26.3f,39.6f);
    glEnd();
    glColor3f(0.55f, 0.80f, 0.95f);
    glBegin(GL_QUADS);
    glVertex2f(26.57f,37.35f);glVertex2f(27.92f,37.35f);
    glVertex2f(27.92f,39.24f);glVertex2f(26.57f,39.24f);
    glEnd();
    glColor3f(0.15f,0.15f,0.15f);
    drawCircleHelper(21.35f,36.0f,0.81f);
    drawCircleHelper(26.3f,36.0f,0.81f);
    glColor3f(0.55f,0.55f,0.55f);
    drawCircleHelper(21.35f,36.0f,0.405f);
    drawCircleHelper(26.3f,36.0f,0.405f);
    glColor3f(0.95f,0.05f,0.05f);
    glBegin(GL_QUADS);
    glVertex2f(23.15f,39.6f);glVertex2f(24.95f,39.6f);
    glVertex2f(24.95f,40.05f);glVertex2f(23.15f,40.05f);
    glEnd();
    glColor3f(0.10f,0.45f,0.95f);
    glBegin(GL_QUADS);
    glVertex2f(24.95f,39.6f);glVertex2f(25.85f,39.6f);
    glVertex2f(25.85f,40.05f);glVertex2f(24.95f,40.05f);
    glEnd();
    glPopMatrix();
}
//s10
void drawRailRoad() {
    glColor3f(0.34f,0.34f,0.34f);
    glBegin(GL_QUADS);
    glVertex2f(0,41.0f);
    glVertex2f(100,41.0f);
    glVertex2f(100,45.0f);
    glVertex2f(0,45.0f);
    glEnd();
   glColor3f(0.10f,0.10f,0.10f);
    glBegin(GL_QUADS);
    glVertex2f(0,42.0f);glVertex2f(100,42.0f);
    glVertex2f(100,42.35f);glVertex2f(0,42.35f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0,44.0f);glVertex2f(100,44.0f);
    glVertex2f(100,44.35f);glVertex2f(0,44.35f);
    glEnd();
    glColor3f(0.48f,0.30f,0.16f);
    glBegin(GL_QUADS);
    glVertex2f(0.0f,41.3f);glVertex2f(0.8f,41.3f);
    glVertex2f(0.8f,44.8f);glVertex2f(0.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(6.0f,41.3f);glVertex2f(6.8f,41.3f);
    glVertex2f(6.8f,44.8f);glVertex2f(6.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(12.0f,41.3f);glVertex2f(12.8f,41.3f);
    glVertex2f(12.8f,44.8f);glVertex2f(12.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(18.0f,41.3f);glVertex2f(18.8f,41.3f);
    glVertex2f(18.8f,44.8f);glVertex2f(18.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(24.0f,41.3f);glVertex2f(24.8f,41.3f);
    glVertex2f(24.8f,44.8f);glVertex2f(24.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(30.0f,41.3f);glVertex2f(30.8f,41.3f);
    glVertex2f(30.8f,44.8f);glVertex2f(30.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(36.0f,41.3f);
    glVertex2f(36.8f,41.3f);glVertex2f(36.8f,44.8f);
    glVertex2f(36.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(42.0f,41.3f);glVertex2f(42.8f,41.3f);
    glVertex2f(42.8f,44.8f);glVertex2f(42.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(48.0f,41.3f);glVertex2f(48.8f,41.3f);
    glVertex2f(48.8f,44.8f);glVertex2f(48.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(54.0f,41.3f);glVertex2f(54.8f,41.3f);
    glVertex2f(54.8f,44.8f);glVertex2f(54.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(60.0f,41.3f);glVertex2f(60.8f,41.3f);
    glVertex2f(60.8f,44.8f);glVertex2f(60.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(66.0f,41.3f);glVertex2f(66.8f,41.3f);
    glVertex2f(66.8f,44.8f);glVertex2f(66.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(72.0f,41.3f);glVertex2f(72.8f,41.3f);
    glVertex2f(72.8f,44.8f);glVertex2f(72.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(78.0f,41.3f);glVertex2f(78.8f,41.3f);
    glVertex2f(78.8f,44.8f);glVertex2f(78.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(84.0f,41.3f);glVertex2f(84.8f,41.3f);
    glVertex2f(84.8f,44.8f);glVertex2f(84.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(90.0f,41.3f);glVertex2f(90.8f,41.3f);
    glVertex2f(90.8f,44.8f);glVertex2f(90.0f,44.8f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(96.0f,41.3f);glVertex2f(96.8f,41.3f);
    glVertex2f(96.8f,44.8f);glVertex2f(96.0f,44.8f);
    glEnd();
}
//s11
void drawMountains(bool night){
    glColor3f(night ? 0.10 : 0.22, night ? 0.22 : 0.44, night ? 0.18 : 0.28);
    glBegin(GL_TRIANGLES);
    glVertex2f(-8,48);
    glVertex2f(15,70);
    glVertex2f(38,48);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(20,48);
    glVertex2f(48,76);
    glVertex2f(77,48);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(58,48);
    glVertex2f(82,69);
    glVertex2f(108,48);
    glEnd();
   glColor3f(night ? 0.08 : 0.14, night ? 0.18 : 0.36, night ? 0.14 : 0.18);
    glBegin(GL_TRIANGLES);
glVertex2f(-2,48);
glVertex2f(15,63);
    glVertex2f(32,48);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(26,48);
    glVertex2f(48,68);
    glVertex2f(70,48);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(62,48);
    glVertex2f(82,62);
    glVertex2f(102,48);
    glEnd();
    glColor3f(night ? 0.08 : 0.22, night ? 0.18 : 0.44, night ? 0.18 : 0.28);
    glBegin(GL_QUADS);
    glVertex2f(0,45);
    glVertex2f(100,45);
    glVertex2f(100,50);
    glVertex2f(0,50);
    glEnd();
}
//s12
void drawBigPineTree(float x, float y,bool night) {
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(night ? 0.28f : 0.42f,night ? 0.16f : 0.24f,night ? 0.08f : 0.10f);
    glBegin(GL_QUADS);
    glVertex2f(-0.5f,0.0f);glVertex2f(0.5f,0.0f);
    glVertex2f(0.5f,5.0f);glVertex2f(-0.5f,5.0f);
    glEnd();
    glColor3f(night ? 0.18f : 0.12f,night ? 0.32f : 0.52f,night ? 0.10f : 0.08f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.0f,3.5f);glVertex2f(4.0f,3.5f);
    glVertex2f(0.0f,9.5f);
    glEnd();
    glColor3f(night ? 0.18f : 0.126f,night ? 0.32f : 0.532f,night ? 0.10f : 0.08f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.0f,5.8f);glVertex2f(3.0f,5.8f);
    glVertex2f(0.0f,11.0f);
    glEnd();
    glColor3f(night ? 0.18f*1.1f : 0.12f*1.1f,night ? 0.32f*0.9f : 0.52f*0.9f,night ? 0.10f : 0.08f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.0f,7.8f);glVertex2f(2.0f,7.8f);
    glVertex2f(0.0f,12.5f);
    glEnd();
    glColor3f(0.96f,0.97f,1.0f);
    glColor3f(night ? 0.18f*1.1f : 0.12f*1.1f,night ? 0.32f*0.9f: 0.52f*0.9f,night ? 0.10f : 0.08f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.7f,11.0f);glVertex2f(0.7f,11.0f);
    glVertex2f(0.0f,12.5f);
    glEnd();
    glPopMatrix();
}
//s13
void drawProTree(float x, float y,bool night) {
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(night ? 0.23f : 0.46f,night ? 0.16f : 0.27f,night ? 0.10f : 0.09f);
    glBegin(GL_QUADS);
    glVertex2f(-0.28f,0.0f);glVertex2f(0.28f,0.0f);
    glVertex2f(0.28f,3.36f);glVertex2f(-0.28f,3.36f);
    glEnd();
    glColor3f(night ? 0.10f : 0.06f,night ? 0.28f : 0.48f,night ? 0.16f : 0.13f);
    drawCircleHelper(-0.96f,4.08f,1.36f);drawCircleHelper(0.96f,4.08f,1.36f);
    drawCircleHelper(0.0f,5.12f,1.60f);drawCircleHelper(0.0f,3.52f,1.44f);
    glPopMatrix();
}
//s14
void drawPalmTree(float x, float y) {
    glPushMatrix();
    glTranslatef(x,y,0.0f);
    glColor3f(0.60f,0.40f,0.15f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(38.000f,39.000f);
    glVertex2f(38.430f,43.000f);
    glVertex2f(38.559f,45.000f);
    glEnd();
    glColor3f(0.08f,0.55f,0.12f);
    glLineWidth(3.0f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(38.559f,45.0f); glVertex2f(38.85f,45.315f);
     glVertex2f(39.135f,45.56f);glVertex2f(40.288f,45.901f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(38.55f,45.0f); glVertex2f(38.73f,45.39f);
     glVertex2f(38.902f,45.729f);glVertex2f(39.588f,46.38f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(38.559f,45.000f); glVertex2f(38.42f,45.41f);
     glVertex2f(38.2f,45.419f);glVertex2f(38.150f,45.99f);
     glVertex2f(37.69f,46.69f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(38.559f,45.0f); glVertex2f(38.230f,44.95f);
     glVertex2f(37.900f,44.85f);glVertex2f(36.583f,44.2f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(38.56f,45.0f); glVertex2f(38.61f,44.41f);
    glVertex2f(38.65f,43.7f);glVertex2f(38.93f,41.06f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(38.56f,45.000f);glVertex2f(38.86f,44.63f);
    glVertex2f(40.42f,42.16f);
    glEnd();
    glColor3f(0.55f,0.30f,0.05f);
    drawCircleHelper(38.259f,44.775f,0.300f);
    drawCircleHelper(38.784f,44.625f,0.2625f);
    glPopMatrix();
}
//s15
void drawCherryTree(float x,float y) {
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.38f,0.20f,0.08f);
    glBegin(GL_QUADS);
    glVertex2f(4.790f,39.000f);
    glVertex2f(5.210f,39.000f);
    glVertex2f(5.210f,42.500f);
    glVertex2f(4.790f,42.500f);
    glEnd();
    glColor3f(0.45f,0.22f,0.08f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2f(5.000f,42.150f); glVertex2f(3.250f,43.550f);
    glVertex2f(5.000f,42.150f); glVertex2f(6.750f,43.550f);
    glVertex2f(5.000f,41.450f); glVertex2f(3.950f,42.850f);
    glVertex2f(5.000f,41.450f); glVertex2f(6.050f,42.850f);
    glEnd();
    glColor3f(1.00f,0.65f,0.75f);
    drawCircleHelper(5.000f,43.900f,0.910f);
    glColor3f(1.00f,0.72f,0.80f);
    drawCircleHelper(3.460f,43.760f,0.910f);
    glColor3f(0.98f,0.78f,0.84f);
    drawCircleHelper(6.540f,43.760f,0.910f);
    glColor3f(1.00f,0.65f,0.75f);
    drawCircleHelper(4.300f,44.740f,0.910f);
    glColor3f(1.00f,0.72f,0.80f);
    drawCircleHelper(5.700f,44.740f,0.910f);
    glColor3f(0.98f,0.78f,0.84f);
    drawCircleHelper(5.000f,43.200f,0.910f);
    glColor3f(1.00f,0.65f,0.75f);
    drawCircleHelper(2.900f,43.200f,0.910f);
    glColor3f(1.00f,0.72f,0.80f);
    drawCircleHelper(7.100f,43.200f,0.910f);
    glPopMatrix();
}
//s16
void Trees(bool night) {
    drawProTree(14.0f,39.0f,night);
    drawProTree(35.0f,39.0f,night);
    drawProTree(55.0f,39.0f,night);
    drawProTree(80.0f,39.0f,night);
    drawBigPineTree(17.0f,45,night);
    drawBigPineTree(28.0f,45,night);
    drawBigPineTree(45.5f,45,night);
    drawBigPineTree(58.0f,45,night);
     drawPalmTree(0.0f,0.0f);
    drawPalmTree(-18.0f,0.0f);
    drawPalmTree(24.0f,0.0f);
    drawCherryTree(0.0f,0.0f);
    drawCherryTree(70.0f,0.0f);
    drawCherryTree(85.0f,0.0f);
}
//s17
void window1(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(4.2,48.4);glVertex2f(5.7,48.4);
   glVertex2f(5.7,49.9);glVertex2f(4.2,49.9);
    glEnd();
    glColor3f(0.15,0.18,0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(4.2,48.4);glVertex2f(5.7,48.4);
    glVertex2f(5.7,49.9);glVertex2f(4.2,49.9);
    glEnd();
}
//s18
void window2(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(4.2,51.4);glVertex2f(5.7,51.4);
    glVertex2f(5.7,52.9);glVertex2f(4.2,52.9);
    glEnd();
    glColor3f(0.15,0.18,0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(4.2,51.4); glVertex2f(5.7,51.4);
     glVertex2f(5.7,52.9); glVertex2f(4.2,52.9);
    glEnd();
}
//s19
void window3(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(4.2,54.4);glVertex2f(5.7,54.4);
    glVertex2f(5.7,55.9);glVertex2f(4.2,55.9);
    glEnd();
    glColor3f(0.15,0.18,0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(4.2,54.4); glVertex2f(5.7,54.4);
     glVertex2f(5.7,55.9); glVertex2f(4.2,55.9);
    glEnd();
}
//s20
void window4(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(7.4,48.4);glVertex2f(8.9,48.4);
    glVertex2f(8.9,49.9);glVertex2f(7.4,49.9);
    glEnd();
    glColor3f(0.15,0.18,0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(7.4,48.4); glVertex2f(8.9,48.4);
     glVertex2f(8.9,49.9); glVertex2f(7.4,49.9);
    glEnd();
}
//s21
void window5(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(7.4, 51.4);glVertex2f(8.9, 51.4);
    glVertex2f(8.9, 52.9);glVertex2f(7.4, 52.9);
    glEnd();
    glColor3f(0.15, 0.18, 0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(7.4,51.4); glVertex2f(8.9,51.4);
    glVertex2f(8.9,52.9); glVertex2f(7.4,52.9);
    glEnd();
}
//s22
void window6(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(7.4,54.4);glVertex2f(8.9,54.4);
    glVertex2f(8.9,55.9);glVertex2f(7.4,55.9);
    glEnd();
    glColor3f(0.15, 0.18, 0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(7.4,54.4); glVertex2f(8.9,54.4);
     glVertex2f(8.9,55.9); glVertex2f(7.4,55.9);
    glEnd();
}
//s23
void window7(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(10.6, 48.4);glVertex2f(12.1, 48.4);
    glVertex2f(12.1, 49.9);glVertex2f(10.6, 49.9);
    glEnd();
    glColor3f(0.15, 0.18, 0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.6,48.4); glVertex2f(12.1,48.4);
    glVertex2f(12.1,49.9); glVertex2f(10.6,49.9);
    glEnd();
}
//s24
void window8(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(10.6,51.4);glVertex2f(12.1,51.4);
    glVertex2f(12.1,52.9);glVertex2f(10.6,52.9);
    glEnd();
    glColor3f(0.15, 0.18, 0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.6,51.4); glVertex2f(12.1,51.4);
    glVertex2f(12.1,52.9); glVertex2f(10.6,52.9);
    glEnd();
}
//s25
void window9(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(10.6,54.4);glVertex2f(12.1,54.4);
    glVertex2f(12.1,55.9);glVertex2f(10.6,55.9);
    glEnd();
    glColor3f(0.15, 0.18, 0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10.6,54.4); glVertex2f(12.1,54.4);
     glVertex2f(12.1,55.9); glVertex2f(10.6,55.9);
    glEnd();
}
//s26
void window10(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(13.8, 48.4);glVertex2f(15.3, 48.4);
    glVertex2f(15.3, 49.9);glVertex2f(13.8, 49.9);
    glEnd();
    glColor3f(0.15, 0.18, 0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(13.8,48.4);glVertex2f(15.3,48.4);
    glVertex2f(15.3,49.9);glVertex2f(13.8,49.9);
    glEnd();
}
//s27
void window11(bool night) {
    glColor3f(night ? 1.0 : 0.55,night ? 0.78 : 0.82,night ? 0.25 : 0.95);
    glBegin(GL_QUADS);
    glVertex2f(13.8,51.4);glVertex2f(15.3,51.4);
    glVertex2f(15.3,52.9);glVertex2f(13.8,52.9);
    glEnd();
    glColor3f(0.15,0.18,0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(13.8,51.4);glVertex2f(15.3,51.4);
     glVertex2f(15.3,52.9);glVertex2f(13.8,52.9);
    glEnd();
}
//s28
void window12(bool night) {
    glColor3f(night ? 1.0 : 0.55, night ? 0.78 : 0.82, night ? 0.25 : 0.95);
    glBegin(GL_QUADS);glVertex2f(13.8,54.4);
    glVertex2f(15.3,54.4);glVertex2f(15.3,55.9);
    glVertex2f(13.8,55.9);
    glEnd();
    glColor3f(0.15, 0.18, 0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(13.8,54.4); glVertex2f(15.3,54.4);
    glVertex2f(15.3,55.9); glVertex2f(13.8,55.9);
    glEnd();
}
//s29
void drawHospital(bool night) {
    glColor3f(night ? 0.74f : 0.92f, night ? 0.76f : 0.94f, night ? 0.80f : 0.96f);
    glBegin(GL_QUADS);
    glVertex2f(3.0f, 45.0f);
    glVertex2f(16.0f, 45.0f);
    glVertex2f(16.0f, 57.0f);
    glVertex2f(3.0f, 57.0f);
    glEnd();
    glColor3f(night ? 0.38f : 0.60f, night ? 0.38f : 0.60f,night ? 0.42f : 0.65f);
    glBegin(GL_TRIANGLES);
    glVertex2f(2.4f, 57.0f);
    glVertex2f(16.6f, 57.0f);
    glVertex2f(9.5f, 62.0f);
    glEnd();
    glPushMatrix();
    glTranslatef(0,0,0);
    window1(night);
    window2(night);
    window3(night);
    window4(night);
    window5(night);
    window6(night);
    window7(night);
    window8(night);
    window9(night);
    window10(night);
    window11(night);
    window12(night);
    glPopMatrix();
    glColor3f(0.15f, 0.45f, 0.85f);
    glBegin(GL_QUADS);
    glVertex2f(8.0f,45.0f);glVertex2f(11.0f,45.0f);
    glVertex2f(11.0f,48.0f);glVertex2f(8.0f,48.0f);
    glEnd();
    glColor3f(0.90f,0.05f,0.05f);
    glBegin(GL_QUADS);
    glVertex2f(9.0f,55.8f);glVertex2f(10.0f,55.8f);
    glVertex2f(10.0f,57.5f);glVertex2f(9.0f,57.5f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(8.3f,56.5f);glVertex2f(10.7f,56.5f);
    glVertex2f(10.7f,57.0f);glVertex2f(8.3f,57.0f);
    glEnd();
}
//s30
void drawSchool(bool night) {
    glColor3f(night ? 0.64f : 0.88f,night ? 0.50f : 0.70f,night ? 0.35f : 0.46f);
    glBegin(GL_QUADS);
    glVertex2f(29.0f,45.0f);glVertex2f(44.0f,45.0f);
    glVertex2f(44.0f,56.0f);glVertex2f(29.0f,56.0f);
    glEnd();
    glColor3f(night ? 0.32f : 0.55f,night ? 0.22f : 0.32f,night ? 0.14f : 0.18f);
    glBegin(GL_TRIANGLES);
    glVertex2f(28.4f,56.0f);glVertex2f(44.6f,56.0f);
    glVertex2f(36.5f,61.5f);
    glEnd();
    glColor3f(night ? 0.32f*0.82f : 0.55f*0.82f,night ? 0.22f*0.82f : 0.32f*0.82f,night ? 0.14f*0.82f : 0.18f*0.82f);
    glLineWidth(1.5f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(28.4f,56.0f);glVertex2f(36.5f,61.5f);
    glVertex2f(44.6f,56.0f);
    glEnd();
    glLineWidth(1.0f);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(27.0f,-2.1f,0);
    window1(night);
    window2(night);
    window3(night);
    window5(night);
    window6(night);
    window8(night);
    window9(night);
    window10(night);
    window11(night);
    window12(night);
    glPopMatrix();
    glColor3f(0.35f,0.16f,0.06f);
    glBegin(GL_QUADS);
    glVertex2f(35.2f,45.0f);glVertex2f(37.8f,45.0f);
    glVertex2f(37.8f,48.1f);glVertex2f(35.2f,48.1f);
    glEnd();
}
//s31
void drawChurch(bool night) {
     glColor3f(night ? 0.70f : 0.92f, night ? 0.72f : 0.90f, night ? 0.78f : 0.82f);;
    glBegin(GL_QUADS);
    glVertex2f(59.0f,45.0f);glVertex2f(72.0f,45.0f);
    glVertex2f(72.0f,58.0f);glVertex2f(59.0f,58.0f);
    glEnd();

    glColor3f(night ? 0.28f : 0.46f, night ? 0.22f : 0.36f, night ? 0.35f : 0.52f);
    glBegin(GL_TRIANGLES);
    glVertex2f(58.4f,58.0f);glVertex2f(72.6f,58.0f);
    glVertex2f(65.5f,63.5f);
    glEnd();
    glColor3f(night ? 0.28f* 0.90f : 0.46f* 0.90f, night ? 0.22f* 0.88f : 0.36f* 0.88f, night ? 0.35f* 0.90f : 0.52f* 0.90f);
    glBegin(GL_TRIANGLES);
    glVertex2f(58.7f,58.0f);glVertex2f(61.5f,58.0f);
    glVertex2f(60.1f,61.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(69.5f,58.0f);glVertex2f(72.3f,58.0f);
    glVertex2f(70.9f,61.0f);
    glEnd();
    glColor3f(0.506f, 0.378f, 0.572f);
    glBegin(GL_TRIANGLES);
    glVertex2f(63.8f,61.5f);glVertex2f(67.2f,61.5f);
    glVertex2f(65.5f,63.5f);
    glEnd();
    glColor3f(0.331f, 0.259f, 0.374f);
    glLineWidth(1.5f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(58.4f,58.0f);glVertex2f(65.5f,63.5f);
    glVertex2f(72.6f,58.0f);
    glEnd();
    glLineWidth(1.0f);
    glColor3f(night ? 0.24f : 0.42f, night ? 0.28f : 0.34f, night ? 0.38f : 0.48f);
    glBegin(GL_QUADS);
    glVertex2f(64.2f,58.0f);glVertex2f(66.8f,58.0f);
    glVertex2f(66.8f,68.5f);
    glVertex2f(64.2f,68.5f);
    glEnd();
    glColor3f(night ? 1.0f : 0.58f, night ? 0.82f : 0.82f, night ? 0.28f : 0.95f);
    drawCircleHelper(65.5f,65.0f,0.75f);
    drawCircleHelper(65.5f,67.0f,0.65f);
    glColor3f(night ? 0.28f : 0.46f, night ? 0.22f : 0.36f, night ? 0.35f : 0.52f);
    glBegin(GL_TRIANGLES);
    glVertex2f(62.8f,68.5f);glVertex2f(68.2f,68.5f);
    glVertex2f(65.5f,72.0f);
    glEnd();
    glColor3f(night ? 0.28f* 0.88f : 0.46f* 0.90f, night ? 0.22f* 0.88f : 0.36f* 0.88f, night ? 0.35f* 0.90f : 0.52f* 0.90f);
    glBegin(GL_TRIANGLES);
    glVertex2f(63.8f,71.5f);glVertex2f(67.2f,71.5f);
    glVertex2f(65.5f,75.0f);
    glEnd();
    glColor3f(0.95f, 0.78f, 0.18f);
    glBegin(GL_QUADS);
    glVertex2f(65.25f,74.7f);
    glVertex2f(65.75f,74.7f);glVertex2f(65.75f,77.0f);
    glVertex2f(65.25f,77.0f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(64.5f,75.6f);glVertex2f(66.5f,75.6f);
    glVertex2f(66.5f,76.1f);glVertex2f(64.5f,76.1f);
    glEnd();
    glColor3f(night ? 1.0f : 0.58f, night ? 0.82f : 0.82f, night ? 0.28f : 0.95f);
    drawCircleHelper(65.5f,61.0f,1.2f);
    glColor3f(night ? 0.24f : 0.42f, night ? 0.28f : 0.34f, night ? 0.38f : 0.48f);
    drawCircleHelper(65.5f,61.0f,0.7f);
    glColor3f(night ? 1.0f : 0.58f, night ? 0.82f : 0.82f, night ? 0.28f : 0.95f);
    drawCircleHelper(65.5f,61.0f,0.35f);
    glPushMatrix();
     glTranslatef(56.3f,-0.4f,0);
    window1(night);
    window2(night);
    window3(night);
    window5(night);
    window6(night);
    window8(night);
    window9(night);
    window10(night);
    window11(night);
    window12(night);
    glPopMatrix();
    glColor3f(0.24f,0.12f,0.06f);
    glBegin(GL_QUADS);
    glVertex2f(64.3f,43.3f);
    glVertex2f(67.3f,45.3f);
    glVertex2f(67.3f,49.3f);
    glVertex2f(64.3f,48.3f);
    glEnd();
    glColor3f(0.38f,0.20f,0.10f);
    drawCircleHelper(65.7f,49.0f,1.5f);
}
//s32
void drawSmallTownHouse(float x,float y,bool night){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(night ? 0.64f : 0.88f,night ? 0.50f : 0.70f,night ? 0.35f : 0.46f);
    glBegin(GL_QUADS);
    glVertex2f(18.0f,45.0f);glVertex2f(26.0f,45.0f);
    glVertex2f(26.0f,55.0f);glVertex2f(18.0f,55.0f);
    glEnd();
    glColor3f(night ? 0.32f : 0.55f,night ? 0.22f : 0.32f,night ? 0.14f : 0.18f);
    glBegin(GL_TRIANGLES);
    glVertex2f(17.4f,55.0f);glVertex2f(26.6f,55.0f);
    glVertex2f(22.0f,59.5f);
    glEnd();
    glColor3f(0.4572f,0.2644f,0.1660f);
    glLineWidth(1.5f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(17.4f,55.0f);glVertex2f(22.0f,59.5f);
    glVertex2f(26.6f,55.0f);
    glEnd();
    glColor3f(night ? 1.0f : 0.55f,night ? 0.78f : 0.82f,night ? 0.25f : 0.95f);
    glBegin(GL_QUADS);
    glVertex2f(19.55f,47.75f);glVertex2f(21.65f,47.75f);
    glVertex2f(21.65f,50.25f);glVertex2f(19.55f,50.25f);
    glEnd();
    glColor3f(0.15,0.18,0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(19.55f,47.75f);glVertex2f(21.65f,47.75f);
    glVertex2f(21.65f,50.25f);glVertex2f(19.55f,50.25f);
    glEnd();

    glColor3f(night ? 1.0f : 0.55f,night ? 0.78f : 0.82f,night ? 0.25f : 0.95f);
    glBegin(GL_QUADS);
    glVertex2f(22.35f,47.75f);glVertex2f(24.45f,47.75f);
    glVertex2f(24.45f,50.25f);glVertex2f(22.35f,50.25f);
    glEnd();
    glColor3f(0.15,0.18,0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(22.35f,47.75f);glVertex2f(24.45f,47.75f);
    glVertex2f(24.45f,50.25f);glVertex2f(22.35f,50.25f);
    glEnd();

    glColor3f(night ? 1.0f : 0.55f,night ? 0.78f : 0.82f,night ? 0.25f : 0.95f);
    glBegin(GL_QUADS);
    glVertex2f(19.55f,50.95f);glVertex2f(21.65f,50.95f);
    glVertex2f(21.65f,53.45f);glVertex2f(19.55f,53.45f);
    glEnd();
    glColor3f(0.15,0.18,0.20);
    glBegin(GL_LINE_LOOP);
    glVertex2f(19.55f,50.95f);glVertex2f(21.65f,50.95f);
    glVertex2f(21.65f,53.45f);glVertex2f(19.55f,53.45f);
    glEnd();

    glColor3f(night ? 1.0f : 0.55f,night ? 0.78f : 0.82f,night ? 0.25f : 0.95f);
    glBegin(GL_QUADS);
    glVertex2f(22.35f,50.95f);glVertex2f(24.45f,50.95f);
    glVertex2f(24.45f,53.45f);glVertex2f(22.35f,53.45f);
    glEnd();
    glColor3f(0.15,0.18,0.20);
 glBegin(GL_LINE_LOOP);
    glVertex2f(22.35f,50.95f);glVertex2f(24.45f,50.95f);
    glVertex2f(24.45f,53.45f);glVertex2f(22.35f,53.45f);
    glEnd();

    glColor3f(0.34f,0.18f,0.09f);
    glBegin(GL_QUADS);
    glVertex2f(21.44f,45.0f);glVertex2f(22.56f,45.0f);
    glVertex2f(22.56f,47.6f);glVertex2f(21.44f,47.6f);
    glEnd();


    glPopMatrix();
}
//s33
void Buildings(bool night) {
    drawHospital(night);
    drawSchool(night);
    drawChurch(night);
    drawSmallTownHouse(0,0,night);
    drawSmallTownHouse(29,0,night);
    drawSmallTownHouse(63,0,night);
}
float by=0.0f;
//s34
void drawHotAirBalloonDay() {
    glPushMatrix();
    glTranslatef(0,by,0);
    glColor3f(0.95f,0.18f,0.15f);
    drawCircleHelper(28.005f, 62.0f, 3.04f);
    glColor3f(1.0f, 0.78f, 0.15f);
    drawCircleHelper(27.0075f,62.0f,2.6125f);
    glColor3f(0.20f, 0.55f, 0.95f);
    drawCircleHelper(29.0975f,62.0f,2.4225f);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(27.72f,59.15f);
    glVertex2f(28.29f,59.15f);glVertex2f(28.29f,61.715f);
    glVertex2f(27.72f,61.715f);
    glEnd();
    glColor3f(1.0f,0.96f,0.84f);
    drawCircleHelper(28.005f,62.855f,0.7125f);
    glColor3f(0.28f,0.18f,0.10f);
    glLineWidth(1.3f);
    glBegin(GL_LINES);
    glVertex2f(26.39f,59.625f);glVertex2f(27.15f,57.25f);
    glVertex2f(29.62f,59.625f);glVertex2f(28.86f,57.25f);
    glEnd();
    glLineWidth(1.0f);
    glColor3f(0.55f,0.32f,0.12f);
    glBegin(GL_QUADS);
    glVertex2f(26.8175f,56.015f);glVertex2f(29.1925f,56.015f);
    glVertex2f(29.1925f,57.25f);glVertex2f(26.8175f,57.25f);
    glEnd();
    glColor3f(0.36f,0.20f,0.08f);
    glBegin(GL_QUADS);
    glVertex2f(26.7225f,57.06f);glVertex2f(29.2875f,57.06f);
    glVertex2f(29.2875f,57.345f);glVertex2f(26.7225f,57.345f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(26.7225f,56.015f);glVertex2f(27.0075f,56.015f);
    glVertex2f(27.0075f,57.25f);glVertex2f(26.7225f,57.25f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(29.0025f,56.015f);glVertex2f(29.2875f,56.015f);
    glVertex2f(29.2875f,57.25f);glVertex2f(29.0025f,57.25f);
    glEnd();
    glPopMatrix();
}
//s35
void drawStreetLamp(float x,float y,bool night) {
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(night ? 0.38f : 0.30f, night ? 0.40f : 0.32f, night ? 0.44f : 0.34f);
    glBegin(GL_QUADS);
    glVertex2f(4.820f,38.000f);glVertex2f(5.180f,38.000f);
    glVertex2f(5.180f,43.500f);glVertex2f(4.820f,43.500f);
    glEnd();
    glColor3f(night ? 0.38f : 0.30f, night ? 0.40f : 0.32f, night ? 0.44f : 0.34f);
    glLineWidth(2.2f);
    glBegin(GL_LINE_STRIP);
    glVertex2f(5.000f,43.500f);glVertex2f(5.500f,43.700f);
    glVertex2f(6.200f,43.500f);
    glEnd();
    glLineWidth(1.0f);
    glColor3f(night ? 0.30f : 0.22f, night ? 0.30f : 0.22f, night ? 0.32f : 0.24f);
    glBegin(GL_QUADS);
    glVertex2f(5.800f,43.100f);glVertex2f(6.800f,43.100f);
    glVertex2f(6.800f,43.500f);glVertex2f(5.800f,43.500f);
    glEnd();
    glColor3f(night ? 0.88f :0, night ?0.86f : 0, night ? 0.76f : 0);
    drawCircleHelper(6.300f,43.000f,0.280f);
    glColor3f(night ? 0.25f : 0.20f, night ? 0.25f : 0.20f, night ? 0.28f : 0.22f);
    glBegin(GL_QUADS);
    glVertex2f(4.600f,38.000f);glVertex2f(5.400f,38.000f);
    glVertex2f(5.400f,38.300f);glVertex2f(4.600f,38.300f);
    glEnd();
    glPopMatrix();
}
//s36
void drawStreetLamps(bool night) {
    drawStreetLamp(0.0f, 0.0f,night);
    drawStreetLamp(13.0f,0.0f,night);drawStreetLamp(27.0f,0.0f,night);
    drawStreetLamp(41.0f,0.0f,night);drawStreetLamp(55.0f,0.0f,night);
    drawStreetLamp(69.0f,0.0f,night);
    drawStreetLamp(83.0f,0.0f,night);drawStreetLamp(0.0f, -17.5f,night);
    drawStreetLamp(13.0f,-17.5f,night);
    drawStreetLamp(27.0f,-17.5f,night);drawStreetLamp(41.0f,-17.5f,night);
    drawStreetLamp(55.0f,-17.5f,night);drawStreetLamp(69.0f,-17.5f,night);
    drawStreetLamp(83.0f,-17.5f,night);
}
float trainX=120;
//s37
void drawModernTrain(float x,bool night) {
    glPushMatrix();
    glTranslatef(x,42.9f,0);
    glScalef(1.0f,1.0f,1.0f);
    glColor3f(night ? 0.82f : 0.88f, night ? 0.86f : 0.90f, night ? 0.92f : 0.94f);
    glBegin(GL_POLYGON);
    glVertex2f(-24,1.5f);
    glVertex2f(-20,0);glVertex2f(20,0);
    glVertex2f(20,4.5f);
    glVertex2f(-20,4.5f);glVertex2f(-24,1.5f);
    glEnd();
    glColor3f(0.05f,0.22f,0.48f);
    glBegin(GL_QUADS);
    glVertex2f(-19,2.5f);glVertex2f(18,2.5f);
    glVertex2f(18,3.8f);glVertex2f(-19,3.8f);
    glEnd();
    glColor3f(0.90f,0.10f,0.10f);
    glBegin(GL_QUADS);
    glVertex2f(-20,0.7f);glVertex2f(20,0.7f);
    glVertex2f(20,1.2f);glVertex2f(-20,1.2f);
    glEnd();
    glColor3f(night ? 1.0f : 0.45f, night ? 0.78f : 0.80f, night ? 0.32f : 0.95f);
    glBegin(GL_QUADS);
    glVertex2f(-16.0f,2.2f);glVertex2f(-12.8f,2.2f);
    glVertex2f(-12.8f,3.4f);glVertex2f(-16.0f,3.4f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-11.0f,2.2f);glVertex2f(-7.8f,2.2f);
    glVertex2f(-7.8f,3.4f);glVertex2f(-11.0f,3.4f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-6.0f,2.2f);glVertex2f(-2.8f,2.2f);
    glVertex2f(-2.8f,3.4f);glVertex2f(-6.0f,3.4f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-1.0f,2.2f);glVertex2f(2.2f,2.2f);
    glVertex2f(2.2f,3.4f);glVertex2f(-1.0f,3.4f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(4.0f,2.2f);
    glVertex2f(7.2f,2.2f);glVertex2f(7.2f,3.4f);
    glVertex2f(4.0f,3.4f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(9.0f,2.2f);glVertex2f(12.2f,2.2f);
    glVertex2f(12.2f,3.4f);glVertex2f(9.0f,3.4f);
    glEnd();
    glColor3f(0.03f,0.03f,0.04f);
    drawCircleHelper(-16.0f,0.0f,0.85f);
    drawCircleHelper(-8.0f,0.0f,0.85f);
    drawCircleHelper(0.0f,0.0f,0.85f);
    drawCircleHelper(8.0f,0.0f,0.85f);
    drawCircleHelper(16.0f,0.0f,0.85f);
    glPopMatrix();
}
float carX1 = -50.0f;
float Angle1 = 0.0f;
float carX2 = 130.0f;float carX3 = -60.0f;
//s38
void drawCar(float x, float y, float scale, float r, float g, float b, bool faceRight) {
     glPushMatrix();
     glTranslatef(x,y,0);
    glScalef(faceRight ? scale : -scale, scale,0);
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    glVertex2f(5.54f,30.70f);glVertex2f(15.74f,30.70f);
    glVertex2f(16.24f,31.00f);glVertex2f(15.74f,31.80f);glVertex2f(14.24f,32.20f);
    glVertex2f(13.54f,33.90f);glVertex2f(7.94f,33.90f);
    glVertex2f(7.24f,32.20f);glVertex2f(5.54f,32.20f);
    glEnd();
    glColor3f(r*0.93f,g*0.93f,b*0.93f);
    glBegin(GL_POLYGON);
    glVertex2f(14.24f,32.20f);glVertex2f(15.74f,31.80f);
    glVertex2f(16.24f,31.00f);
    glVertex2f(15.74f,30.70f);glVertex2f(13.74f,30.70f);
    glVertex2f(13.74f,32.20f);
    glEnd();
    glColor3f(r*0.78f,g*0.78f,b*0.78f);
    glBegin(GL_POLYGON);
    glVertex2f(7.94f,33.90f);glVertex2f(13.54f,33.90f);
    glVertex2f(13.54f,34.20f);glVertex2f(7.94f,34.20f);
    glEnd();
    glColor3f(0.55f,0.82f,0.95f);
    glBegin(GL_POLYGON);
    glVertex2f(11.54f,32.25f);glVertex2f(14.24f,32.25f);
    glVertex2f(13.54f,33.85f);glVertex2f(11.54f,33.85f);
    glEnd();
    glColor3f(0.50f,0.76f,0.92f);
    glBegin(GL_POLYGON);
    glVertex2f(9.94f,32.25f);glVertex2f(7.24f,32.25f);
    glVertex2f(7.94f,33.85f);glVertex2f(9.94f,33.85f);
    glEnd();
    glColor3f(0.52f,0.79f,0.93f);
    glBegin(GL_QUADS);
    glVertex2f(9.99f,32.25f);glVertex2f(11.49f,32.25f);
    glVertex2f(11.49f,33.85f);glVertex2f(9.99f,33.85f);
    glEnd();
    glColor3f(r*0.48f,g*0.48f,b*0.48f);
    glBegin(GL_QUADS);
    glVertex2f(15.74f,30.68f);glVertex2f(16.54f,30.68f);
    glVertex2f(16.54f,31.02f);glVertex2f(15.74f,31.02f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(4.94f,30.68f);glVertex2f(5.54f,30.68f);
    glVertex2f(5.54f,31.02f);glVertex2f(4.94f,31.02f);
    glEnd();
    glPushMatrix();
    glTranslatef(7.54f,30.62f,0);
    glRotatef(Angle1,0.0f,0.0f,1.0f);
    glTranslatef(-7.54f,-30.62f,0);
    glColor3f(r,g,b);
    drawCircleHelper(7.54f,30.62f,1.05f);
    glColor3f(0.12f,0.13f,0.60f);
    drawCircleHelper(7.54f,30.62f,0.88f);
    glColor3f(0.92f,0.93f,0.96f);
    drawCircleHelper(7.54f,30.62f,0.16f);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(13.94f,30.62f,0);
    glRotatef(Angle1,0.0f,0.0f,1.0f);
    glTranslatef(-13.94f,-30.62f,0);
    glColor3f(r,g,b);
    drawCircleHelper(13.94f,30.62f,1.05f);
    glColor3f(0.12f,0.13f,0.60f);
    drawCircleHelper(13.94f,30.62f,0.88f);
    glColor3f(0.92f,0.93f,0.96f);
    drawCircleHelper(13.94f,30.62f,0.16f);
    glPopMatrix();
    glColor3f(1.0f,0.97f,0.72f);
    drawCircleHelper(16.04f,31.30f,0.26f);
    glColor3f(0.95f,0.08f,0.08f);
    glBegin(GL_QUADS);
    glVertex2f(5.04f,31.05f);
    glVertex2f(5.59f,31.05f);
    glVertex2f(5.59f,31.50f);
    glVertex2f(5.04f,31.50f);
    glEnd();
    glPopMatrix();
}
//s39
void drawRiver(bool night) {
   glColor3f(night ? 0.06 : 0.25, night ? 0.15 : 0.60, night ? 0.28 : 0.82);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(100,0);
    glVertex2f(100,20.5f);
    glVertex2f(0,20.5f);
    glEnd();
    glColor3f(night ? 0.18 : 0.55, night ? 0.38 : 0.80, night ? 0.55 : 0.92);
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f,3.000f);glVertex2f(6.0f,3.449f);glVertex2f(12.0f,3.064f);
    glVertex2f(18.0f,2.560f);glVertex2f(24.0f,2.874f);glVertex2f(30.0f,3.422f);
    glVertex2f(36.0f,3.185f);glVertex2f(42.0f,2.604f);glVertex2f(48.0f,2.759f);
    glVertex2f(54.0f,3.362f);glVertex2f(60.0f,3.293f);glVertex2f(66.0f,2.680f);
    glVertex2f(72.0f,2.662f);glVertex2f(78.0f,3.272f);glVertex2f(84.0f,3.376f);
    glVertex2f(90.0f,2.781f);glVertex2f(96.0f,2.592f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f,6.500f);glVertex2f(6.0f,6.949f);
    glVertex2f(12.0f,6.564f);glVertex2f(18.0f,6.060f);
    glVertex2f(24.0f,6.374f);glVertex2f(30.0f,6.922f);
    glVertex2f(36.0f,6.685f);glVertex2f(42.0f,6.104f);
    glVertex2f(48.0f,6.259f);glVertex2f(54.0f,6.862f);
    glVertex2f(60.0f,6.793f);glVertex2f(66.0f,6.180f);
    glVertex2f(72.0f,6.162f);glVertex2f(78.0f,6.772f);
    glVertex2f(84.0f,6.876f);glVertex2f(90.0f,6.281f);glVertex2f(96.0f,6.092f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f,10.000f);glVertex2f(6.0f,10.449f);glVertex2f(12.0f,10.064f);
    glVertex2f(18.0f,9.560f);glVertex2f(24.0f,9.874f);glVertex2f(30.0f,10.422f);
    glVertex2f(36.0f,10.185f);glVertex2f(42.0f,9.604f);glVertex2f(48.0f,9.759f);
    glVertex2f(54.0f,10.362f);glVertex2f(60.0f,10.293f);glVertex2f(66.0f,9.680f);
    glVertex2f(72.0f,9.662f);
    glVertex2f(78.0f,10.272f);glVertex2f(84.0f,10.376f);glVertex2f(90.0f,9.781f);
    glVertex2f(96.0f,9.592f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f,13.500f);glVertex2f(6.0f,13.949f);glVertex2f(12.0f,13.564f);
    glVertex2f(18.0f,13.060f);glVertex2f(24.0f,13.374f);glVertex2f(30.0f,13.922f);
    glVertex2f(36.0f,13.685f);glVertex2f(42.0f,13.104f);glVertex2f(48.0f,13.259f);
    glVertex2f(54.0f,13.862f);glVertex2f(60.0f,13.793f);glVertex2f(66.0f,13.180f);
    glVertex2f(72.0f,13.162f);glVertex2f(78.0f,13.772f);glVertex2f(84.0f,13.876f);
    glVertex2f(90.0f,13.281f);glVertex2f(96.0f,13.092f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.0f,17.000f);
    glVertex2f(6.0f,17.449f);
    glVertex2f(12.0f,17.064f);glVertex2f(18.0f,16.560f);
    glVertex2f(24.0f,16.874f);
glVertex2f(30.0f,17.422f);glVertex2f(36.0f,17.185f);
glVertex2f(42.0f,16.604f);
glVertex2f(48.0f,16.759f);
    glVertex2f(54.0f,17.362f);
    glVertex2f(60.0f,17.293f);glVertex2f(66.0f,16.680f);glVertex2f(72.0f,16.662f);
    glVertex2f(78.0f,17.272f);glVertex2f(84.0f,17.376f);
    glVertex2f(90.0f,16.781f);
    glVertex2f(96.0f,16.592f);
    glEnd();
    glColor3f(0.78f,0.78f,0.80f);
    glBegin(GL_QUADS);
    glVertex2f(0,20.0f);glVertex2f(100,20.0f);
    glVertex2f(100,20.5f);glVertex2f(0,20.5f);
    glEnd();
}
//s40
void drawBoat(float x,float y,float scale,float r,float g,float b) {
    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(scale,(scale < 0 ? -scale : scale), 1);
    glColor3f(r * 0.55f, g * 0.55f, b * 0.55f);
    glBegin(GL_POLYGON);
    glVertex2f(-5.5f,0.0f);glVertex2f( 5.8f,0.0f);
    glVertex2f( 7.0f,0.6f);
    glVertex2f( 5.5f,1.0f);glVertex2f(-5.5f, 1.0f);
    glEnd();
    glColor3f(r, g, b);
    glBegin(GL_POLYGON);
    glVertex2f(-5.5f, 0.85f);glVertex2f( 5.5f, 0.85f);
    glVertex2f( 6.8f, 0.55f);
    glVertex2f( 5.8f, 0.10f);glVertex2f(-5.5f, 0.10f);
    glEnd();
    glColor3f(0.90f, 0.92f, 0.95f);
    glBegin(GL_POLYGON);
    glVertex2f(-5.5f,0.88f);glVertex2f( 5.6f,0.88f);
    glVertex2f( 6.9f,0.58f);glVertex2f( 6.6f, 0.52f);
    glVertex2f( 5.4f,0.82f);glVertex2f(-5.5f,0.82f);
    glEnd();
    glColor3f(0.55f,0.48f,0.36f);
    glBegin(GL_QUADS);
    glVertex2f(-5.2f,1.0f);glVertex2f(5.2f,1.0f);
    glVertex2f(5.2f,1.3f);glVertex2f(-5.2f,1.3f);
    glEnd();
    glLineWidth(1.0f);
    glColor3f(0.72f,0.74f,0.78f);
    glBegin(GL_QUADS);
    glVertex2f(-3.8f,1.3f);glVertex2f(2.2f,1.3f);
    glVertex2f(2.2f,3.0f);glVertex2f(-3.8f,3.0f);
    glEnd();
    glColor3f(0.38f,0.40f,0.44f);
    glBegin(GL_QUADS);
    glVertex2f(-4.0f,3.0f);glVertex2f(2.4f,3.0f);
    glVertex2f(2.4f,3.35f);glVertex2f(-4.0f,3.35f);
    glEnd();
    glColor3f(0.62f,0.64f,0.68f);
    glBegin(GL_POLYGON);
    glVertex2f(2.2f,1.3f);glVertex2f(3.5f,1.3f);
    glVertex2f(2.4f,3.0f);glVertex2f(2.2f,3.0f);
    glEnd();
    glColor3f(0.95f,0.88f,0.55f);
    glBegin(GL_POLYGON);
    glVertex2f(2.25f,1.45f);glVertex2f(3.30f,1.45f);
    glVertex2f(2.45f,2.85f);glVertex2f(2.25f,2.85f);
    glEnd();
    glColor3f(1.00f,0.90f,0.50f);
    glBegin(GL_QUADS);
    glVertex2f(-3.5f,1.7f);glVertex2f(-2.2f,1.7f);
    glVertex2f(-2.2f,2.6f);glVertex2f(-3.5f,2.6f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-1.8f,1.7f);glVertex2f(-0.5f,1.7f);
    glVertex2f(-0.5f,2.6f);glVertex2f(-1.8f,2.6f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.0f,1.7f);glVertex2f(1.3f,1.7f);
    glVertex2f(1.3f,2.6f);glVertex2f(0.0f,2.6f);
    glEnd();
    glColor3f(0.30f,0.32f,0.36f);
    glLineWidth(1.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-3.5f,1.7f);glVertex2f(-2.2f,1.7f);
    glVertex2f(-2.2f,2.6f);glVertex2f(-3.5f,2.6f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f(-1.8f,1.7f);glVertex2f(-0.5f,1.7f);
    glVertex2f(-0.5f,2.6f);glVertex2f(-1.8f,2.6f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glVertex2f( 0.0f,1.7f);glVertex2f( 1.3f,1.7f);
    glVertex2f( 1.3f,2.6f);glVertex2f( 0.0f,2.6f);
    glEnd();
    glColor3f(0.55f, 0.58f, 0.62f);
    glBegin(GL_QUADS);
    glVertex2f(-0.12f,3.35f);glVertex2f(0.12f,3.35f);
    glVertex2f(0.12f,6.2f);glVertex2f(-0.12f,6.2f);
    glEnd();
    glColor3f(0.50f,0.52f,0.56f);
    glBegin(GL_QUADS);
    glVertex2f(-1.2f,5.5f);glVertex2f(1.2f,5.5f);
    glVertex2f(1.2f,5.7f);glVertex2f(-1.2f,5.7f);
    glEnd();
    glColor3f(0.95f,0.08f,0.08f);
    drawCircleHelper(-1.2f,5.85f,0.22f);
    glColor3f(0.08f, 0.90f, 0.25f);
    drawCircleHelper( 1.2f,5.85f,0.22f);
    glColor3f(1.0f,1.0f,0.95f);
    drawCircleHelper( 0.0f, 6.25f, 0.28f);
    glColor3f(0.60f,0.62f,0.65f);
    glBegin(GL_QUADS);
    glVertex2f(-0.06f,3.35f);glVertex2f(0.06f,3.35f);
    glVertex2f(0.06f,4.2f);glVertex2f(-0.06f,4.2f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-0.8f,4.1f);glVertex2f(0.8f,4.1f);
    glVertex2f(0.8f,4.25f);glVertex2f(-0.8f,4.25f);
    glEnd();
    glColor3f(1.0f,0.96f,0.70f);
    drawCircleHelper(6.8f,0.65f,0.25f);
    glPopMatrix();
}
float boatX1 = 10.0f;float boatX2 = 60.0f;float boatX3 = 100.0f;
//s41
void boot(){
    drawBoat(boatX1,5.0f,0.90f,0.05f,0.55f,0.95f);
    drawBoat(boatX2,15.5f,-0.90f,0.95f,0.35f,0.15f);
    drawBoat(boatX3,10.5f,0.75f,0.90f,0.85f,0.10f);
}
int weatherMode=0;
float rainPhase=0.0f;
//s42
void drawRain() {
    glColor4f(0.75f, 0.85f, 1.0f, 0.55f);
    glBegin(GL_LINES);
    for (int i = 0; i < 200; i++) {
        float x = fmodf(i * 11.3f + rainPhase * 6.0f, 100.0f);
        float y = 80.0f - fmodf(i * 3.1f + rainPhase * 130.0f, 80.0f);
        glVertex2f(x, y);
        glVertex2f(x - 0.7f, y - 2.0f);
    }
    glEnd();
}
//s43
void drawBillboard() {
    glColor3f(0.25f,0.25f,0.27f);
    glBegin(GL_QUADS);
    glVertex2f(76.0f,38.2f);glVertex2f(76.7f,38.2f);
    glVertex2f(76.7f,46.2f);glVertex2f(76.0f,46.2f);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(93.3f,38.2f);glVertex2f(94.0f,38.2f);
    glVertex2f(94.0f,46.2f);glVertex2f(93.3f,46.2f);
    glEnd();
    glColor3f(0.12f,0.08f,0.04f);
    glBegin(GL_QUADS);
    glVertex2f(73.0f,46.2f);glVertex2f(97.0f,46.2f);
    glVertex2f(97.0f,53.2f);glVertex2f(73.0f,53.2f);
    glEnd();
    glColor3f(1.0f,0.90f,0.25f);
    drawCircleHelper(76.0f,53.5f,0.2f);
    drawCircleHelper(80.5f,53.5f,0.2f);
    drawCircleHelper(85.0f,53.5f,0.2f);
    drawCircleHelper(89.5f,53.5f,0.2f);
    drawCircleHelper(94.0f,53.5f,0.2f);
    glColor3f(1.0f,0.96f,0.80f);
    glBegin(GL_QUADS);
    glVertex2f(74.0f,47.0f);glVertex2f(96.0f,47.0f);
    glVertex2f(96.0f,52.4f);glVertex2f(74.0f,52.4f);
    glEnd();
}
//s44
void drawScene1() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    drawSky(false);
    drawSun();
    drawCloud1(cloudX1,false);
    drawCloud2(cloudX2);
    drawCloud3(cloudX3,false);
    drawHotAirBalloonDay();
    drawMountains(false);
    Buildings(false);
    drawRailRoad();
    drawModernTrain(trainX,false);
    drawCarRoad();
    drawStreetLamps(false);
    drawAmbulance();
    drawBillboard();
    drawCar(carX1,5.0f,0.72f,0.9f,0.05f,0.05f,true);
   drawCar(carX2,8.0f,0.85f,0.10f,0.25f,0.90f,false);
   drawCar(carX3,7.0f,0.75f,0.95f,0.75f,0.12f,true);
    Trees(false);
    drawRiver(false);
    boot();
    drawPlane(Px,Py,1.5);
   if (weatherMode == 1)
    drawRain();
    glutSwapBuffers();
}
//s45
void drawStars() {
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircleHelper(63.94f, 55.63f, 0.18f);drawCircleHelper(27.50f, 60.58f, 0.18f);
    drawCircleHelper(73.65f, 71.92f, 0.18f);
    drawCircleHelper(89.22f, 57.17f, 0.18f);drawCircleHelper(42.19f, 55.74f, 0.18f);
    drawCircleHelper(21.86f, 67.63f, 0.18f);drawCircleHelper(2.65f, 59.97f, 0.18f);
    drawCircleHelper(64.99f, 68.62f, 0.18f);
    drawCircleHelper(22.04f, 69.73f, 0.18f);drawCircleHelper(80.94f, 55.16f, 0.18f);
    drawCircleHelper(80.58f, 72.45f, 0.18f);drawCircleHelper(34.03f, 58.89f, 0.18f);
    drawCircleHelper(95.72f, 63.41f, 0.18f);drawCircleHelper(9.27f, 57.42f, 0.18f);
    drawCircleHelper(84.75f, 70.09f, 0.18f);drawCircleHelper(80.71f, 73.24f, 0.18f);
    drawCircleHelper(53.62f, 79.33f, 0.18f);drawCircleHelper(37.85f, 68.80f, 0.18f);
    drawCircleHelper(82.94f, 70.46f, 0.18f);
    drawCircleHelper(86.17f, 69.43f, 0.18f);drawCircleHelper(70.46f, 56.15f, 0.18f);
    drawCircleHelper(22.79f, 62.23f, 0.18f);
drawCircleHelper(7.98f, 60.82f, 0.18f);drawCircleHelper(10.10f, 61.95f, 0.18f);
    drawCircleHelper(63.57f, 64.12f, 0.18f);drawCircleHelper(37.02f, 60.24f, 0.18f);
    drawCircleHelper(26.70f, 78.42f, 0.18f);drawCircleHelper(64.80f, 70.23f, 0.18f);
    drawCircleHelper(17.11f, 73.23f, 0.18f);drawCircleHelper(16.34f, 64.49f, 0.18f);
    drawCircleHelper(98.95f, 71.00f, 0.18f);
    drawCircleHelper(55.69f, 72.12f, 0.18f);drawCircleHelper(84.29f, 74.40f, 0.18f);
    drawCircleHelper(22.90f, 55.80f, 0.18f);drawCircleHelper(31.55f, 61.69f, 0.18f);
    drawCircleHelper(21.10f, 78.57f, 0.18f);drawCircleHelper(87.64f, 62.87f, 0.18f);
    drawCircleHelper(65.54f, 64.89f, 0.18f);drawCircleHelper(91.45f, 66.47f, 0.18f);
    drawCircleHelper(26.49f, 61.17f, 0.18f);drawCircleHelper(56.14f, 61.57f, 0.18f);
    drawCircleHelper(58.46f, 77.45f, 0.18f);drawCircleHelper(39.94f, 60.48f, 0.18f);
    drawCircleHelper(99.75f, 67.74f, 0.18f);
    drawCircleHelper(9.09f, 56.18f, 0.18f);drawCircleHelper(10.96f, 70.69f, 0.18f);
    drawCircleHelper(79.21f, 65.55f, 0.18f);drawCircleHelper(6.35f, 64.54f, 0.18f);
    drawCircleHelper(99.61f, 68.23f, 0.18f);
    drawCircleHelper(97.11f, 76.52f, 0.18f);drawCircleHelper(1.15f, 73.02f, 0.18f);
    drawCircleHelper(68.17f, 68.42f, 0.18f);drawCircleHelper(26.68f, 71.02f, 0.18f);
    drawCircleHelper(11.16f, 65.87f, 0.18f);
    drawCircleHelper(45.37f, 78.85f, 0.18f);drawCircleHelper(87.59f, 61.58f, 0.18f);
    drawCircleHelper(50.06f, 59.47f, 0.18f);drawCircleHelper(91.26f, 76.76f, 0.18f);
    drawCircleHelper(29.84f, 70.97f, 0.18f);drawCircleHelper(60.90f, 58.82f, 0.18f);
drawCircleHelper(76.25f, 68.48f, 0.18f);
    drawCircleHelper(77.86f, 68.26f, 0.18f);drawCircleHelper(0.06f, 63.10f, 0.18f);
    drawCircleHelper(1.95f, 78.23f, 0.18f);drawCircleHelper(87.87f, 75.79f, 0.18f);
    drawCircleHelper(30.75f, 56.45f, 0.18f);drawCircleHelper(87.80f, 78.67f, 0.18f);
    drawCircleHelper(8.57f, 67.15f, 0.18f);drawCircleHelper(6.92f, 74.02f, 0.18f);
    drawCircleHelper(76.58f, 58.21f, 0.18f);drawCircleHelper(47.53f, 68.75f, 0.18f);
    drawCircleHelper(26.51f, 76.81f, 0.18f);drawCircleHelper(42.31f, 60.29f, 0.18f);
    drawCircleHelper(53.93f, 73.25f, 0.18f);drawCircleHelper(20.12f, 62.79f, 0.18f);
    drawCircleHelper(99.51f, 71.25f, 0.18f);drawCircleHelper(43.81f, 67.94f, 0.18f);
    drawCircleHelper(12.10f, 60.62f, 0.18f);
    drawCircleHelper(33.81f, 69.71f, 0.18f);drawCircleHelper(23.01f, 60.51f, 0.18f);
    drawCircleHelper(7.10f, 70.78f, 0.18f);drawCircleHelper(22.89f, 77.64f, 0.18f);
    drawCircleHelper(85.96f, 56.77f, 0.18f);drawCircleHelper(23.80f, 71.72f, 0.18f);
    drawCircleHelper(21.42f, 58.31f, 0.18f);drawCircleHelper(93.55f, 69.28f, 0.18f);
    drawCircleHelper(47.27f, 74.62f, 0.18f);
    drawCircleHelper(80.75f, 59.76f, 0.18f);drawCircleHelper(9.69f, 65.78f, 0.18f);
drawCircleHelper(42.36f, 66.68f, 0.18f);
    drawCircleHelper(72.91f, 71.83f, 0.18f);drawCircleHelper(98.42f, 57.46f, 0.18f);
    drawCircleHelper(40.26f, 63.48f, 0.18f);drawCircleHelper(86.17f, 61.22f, 0.18f);
    drawCircleHelper(19.02f, 66.22f, 0.18f);drawCircleHelper(42.19f, 61.96f, 0.18f);
    drawCircleHelper(24.98f, 78.08f, 0.18f);drawCircleHelper(44.31f, 76.53f, 0.18f);
    drawCircleHelper(55.03f, 56.26f, 0.18f);drawCircleHelper(99.93f, 75.90f, 0.18f);
}
//s46
void drawMoon() {
    glColor3f(1.0f, 1.0f, 0.8f);
    drawCircleHelper(12,76,2.5f);
    glColor3f(0.05f, 0.05f, 0.2f);
    drawCircleHelper(12.5f,76.25f,2.125f);
}
//s47
void drawScene2() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
     drawSky(true);
   drawMoon();
     drawStars();
    drawCloud1(cloudX1,true);
    drawCloud3(cloudX3,true);
    drawMountains(true);
    Buildings(true);
    drawRailRoad();
    drawModernTrain(trainX,true);
    drawCarRoad();
    drawStreetLamps(true);
    drawAmbulance();
    drawBillboard();
   drawCar(carX1,5.0f,0.72f,0.9f,0.05f,0.05f,true);
   drawCar(carX2,8.0f,0.85f,0.10f,0.25f,0.90f,false);
   drawCar(carX3,7.0f,0.75f,0.95f,0.75f,0.12f,true);
    Trees(true);
    drawRiver(true);
    boot();
    drawPlane(Px,Py,1.5);
   if (weatherMode == 1)
   drawRain();
    glutSwapBuffers();
}
void drawNavButtons(){}
//s48
void s_update(int value) {
  // cloud movement
    cloudX1 += 0.05f;cloudX2 -= 0.18f;cloudX3 += 0.05f;
    if (cloudX1>110.0f) cloudX1=-10.0f;
    if (cloudX2<-90.0f) cloudX2=20.0f;
    if (cloudX3>110.0f) cloudX3=-10.0f;
  // Car
     carX1 += 0.5;
    if (carX1 > 109.0f) carX1 = -50.0f;
    Angle1+=0.4;
    if (Angle1>=360) Angle1=0;
    carX2 += -0.6;
    if (carX2 < -40.0f) carX2 = 130.0f;
    carX3 += 0.4;
    if (carX3 > 140.0f) carX3 = -60.0f;
    //Ambulance
    ambulanceX += 0.7;
    if (ambulanceX > 130.0f) ambulanceX = -20.0f;
    // --- Trains ---
    trainX += -0.9f;
    if (trainX < -40.0f) trainX = 240.0f;
    //  Boat
    boatX1+=0.4;
    if (boatX1>115.0f) boatX1=-15.0f;
    boatX2-=0.5;
    if (boatX2<-15.0f) boatX2 = 115.0f;
    boatX3 += 0.35;
    if (boatX3>115.0f) boatX3 = -15.0f;
    // Ballon
     by+=0.05;
     if (by>13) by=0;
     //Rain
     if (weatherMode == 1) {
        rainPhase += 0.02f;
        if (rainPhase > 1000.0f) rainPhase = 0.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(20, s_update, 0);
}
//s49
void s_handleSpecialKey(int key, int x, int y) {
    if (key == GLUT_KEY_RIGHT) {
        Px += 1.4f;
        if (Px > 130.0f) Px = 130.0f;
        glutPostRedisplay();
    }
    if (key == GLUT_KEY_UP) {
        Py += 1.0f;
        if (Py > 30.0f) Py = 30.0f;
        glutPostRedisplay();
    }
    if (key == GLUT_KEY_DOWN) {
        Py -= 1.0f;
        if (Py < 20.0f) Py = 20.0f;
        glutPostRedisplay();
    }
    if (key == GLUT_KEY_HOME) {
        Px = 0.0f;
        Py = 25.0f;
        glutPostRedisplay();
    }
}
float currentScene=1;
//s50
void s_display() {
    if (currentScene == 1) {
        drawScene1();
    } else {
        drawScene2();
    }
}
//s51
void s_handleMouse(int button, int state, int mx, int my) {
    if (state != GLUT_UP) return;

    if (button == GLUT_LEFT_BUTTON) {
        if (currentScene > 1) { currentScene--; glutPostRedisplay(); }
    }
    if (button == GLUT_RIGHT_BUTTON) {
        if (currentScene < 2) { currentScene++; glutPostRedisplay(); }
    }
}
//s52
void s_handleKeypress(unsigned char key, int x, int y) {
    if (key=='r'||key=='R') { weatherMode = 1; glutPostRedisplay(); }
    if (key=='t'||key=='T') { weatherMode = 0; glutPostRedisplay(); }
}
//s53
void handleResize(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 100.0, 0.0, 80.0);
    glMatrixMode(GL_MODELVIEW);
}
//s54
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1280, 720);
    glutCreateWindow("City View");
    glutDisplayFunc(s_display);
    glutSpecialFunc(s_handleSpecialKey);
    glutKeyboardFunc(s_handleKeypress);
    glutMouseFunc(s_handleMouse);
   glutReshapeFunc(handleResize);
   glutTimerFunc(20, s_update, 0);
    glutMainLoop();
    return 0;
}
