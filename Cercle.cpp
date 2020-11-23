#include "Cercle.h"
#include <cmath>
#include <iostream>
using namespace std;

const int pi = 3.14;

Cercle::Cercle()
{
	this->m_rayon = 0.0,
	this->m_centre = Point();

}

Cercle::Cercle(Point p, double r )
{
	this->m_rayon = r;
	this->m_centre = p; //M2 : this->m_centre.set_x(get_x());
}
double Cercle::m_surface()
{
	double surface;
	surface = pi * pow(this->m_rayon, 2); 
	return surface ;
}

double Cercle::m_perimetre()
{
	double perimetre;
	perimetre = 2 * pi  * this->m_rayon;
	return perimetre;
}

bool Cercle::m_egalite(Cercle c)
{

	if (this->m_rayon == c.m_rayon && this->m_centre.m_compare(c.m_centre)) {
		return true;
	}
	    return false;
}

bool Cercle::appartenance(Point p)
{
	if (m_centre.m_distance(p) < m_rayon) {
		return true;
	}
	    return false;
}

