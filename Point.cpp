#include "Point.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;


Point::Point()
{
	this->m_x = 0.0;
	this->m_y = 0.0;
}

Point::Point(double x , double y)
{
	this->m_x = x;
	this->m_y = y;
}

void Point::set_x(double x)
{
	this->m_x = x;
}

void Point::set_y(double y)
{
	this->m_y = y;
}

double Point::get_x() const
{
	return this->m_x;
}

double Point::get_y() const
{
	return this->m_y;
}

void Point::m_print()
{
	string s1;
	s1 = "(" + to_string(this->m_x) + "," + to_string(this->m_y) + ")";
	cout << s1 << endl;
	
}

Point Point::m_translate(double dx , double dy)                   // M3 :Void Point::translate(double dx , double dy) et elle va rien retourner   
{
	Point nv;
	nv.m_x = this->m_x + dx; // M2 : this->m_x = this->m_x + dx;
	nv.m_y = this->m_y + dy; //      this->m_y = this->m_y + dy;
	return nv;               //      return *this;
}

bool Point::m_compare(Point p)
{
	if (this->m_x == p.m_x && this->m_y == p.m_y) {
		return true;
	}
	return false;

}

double Point::m_distance(Point p)
{
	double dis;
	dis= sqrt(pow(this->m_x - p.m_x, 2) + pow(this->m_y - p.m_y, 2));
	return dis;
}
