#define VECTOR

class vector
{
public:
  double vx;
  double vy;
  double vz;
  vector (x , y, z);
  ~vector();
  vector operator+(vector v);
  vector operator=(vector v);
};
