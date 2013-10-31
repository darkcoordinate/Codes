#include "game1.h"

vector :: vector(double x, double y, double z)
{
  vx = x;
  vy = y;
  vz = z;
}

vector :: ~vector()
{
  
}

vector vector :: operator+(vector v1)
{
  vector v;
  v.vx = vx + v1.vx;
  v.vy = vy + v1.vy;
  v.vz = vz + v1.vz;
  retrun v;
}
