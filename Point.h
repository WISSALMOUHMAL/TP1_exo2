#pragma once
class Point
{
public:
	Point();
	Point(double, double);
	void set_x(double); //setters || modificateurs
	void set_y(double); //setters || modificateurs
	double get_x()const; //getters || il dous l'acces
	double get_y()const; 
	void m_print();
	Point m_translate( double , double);
	bool m_compare(Point);
	double m_distance(Point);


private:
	double m_x;
	double m_y;


};

