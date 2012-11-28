#ifndef NOISE_H
#define NOISE_H

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
	Grad * grad3;
    Grad * grad4;
    short * p;
	short * perm;
	short * permMod12;
	double F2;
	double G2;
	double F3;
	double G3;
	double F4;
	double G4;

	void initializeGrad( const int*);
	inline int fastfloor(double x);
	double dot( Grad g, double x, double y);
	double dot( Grad g, double x, double y, double z );
	double dot( Grad g, double x, double y, double z, double w );
	
public:
	simplexNoise();
	double noise(double xin, double yin);
	double noise(double xin, double yin, double zin);
	double noise(double xin, double yin, double zin, double win);

};
#endif
