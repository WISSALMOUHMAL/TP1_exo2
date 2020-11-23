#pragma once
#include "Point.h"
class Cercle
{
public:
	Cercle();
	Cercle( Point , double);
	double m_surface();
	double m_perimetre();
	bool m_egalite(Cercle);
	bool appartenance(Point);



private:
	Point m_centre;
	double m_rayon;

};

