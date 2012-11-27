#include <cmath>


class Grad{
public:
	double x,y,z,w;

	Grad(double x = 0,double y = 0, double z = 0){
		(*this).x = x;
		(*this).y = y;
		(*this).z = z;
	}
	Grad(double  , double y, double z, double w){
		(*this).x = x;
		(*this).y = y;
		(*this).z = z;
		(*this).w = w;
	}
	~Grad(){
		x = 0;
		y = 0;
		z = 0;
		w = 0;
	}
};

class simplexNoise{
private:
	simplexNoise();
	static Grad * grad3;
    static Grad * grad4;
    static short * p;
	static short * perm;
	static short * permMod12;
	static double F2;
	static double G2;
	static double F3;
	static double G3;
	static double F4;
	static double G4;

	void initializeGrad( const int*);
	inline int fastfloor(double x);
	double dot( Grad g, double x, double y);
	double dot( Grad g, double x, double y, double z );
	double dot( Grad g, double x, double y, double z, double w );
	double noise(double xin, double yin);
	double noise(double xin, double yin, double zin);
	double noise(double xin, double yin, double zin, double win);
public:
	void noise();
};