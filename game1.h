#define VECTOR

class vector
{
public:
  double vx;
  double vy;
  double vz;
  vector (double x ,double y ,double z);
  ~vector();
  vector operator+(vector v);
  vector operator=(vector v);
};
