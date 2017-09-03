/// Class CellDouble description
/**
 * double type of the cell
 * derivated class at CellType
 */

#pragma once
#include"stdafx.h"

class CellDouble :public CellType
{
public:
	/// Default constructor
	CellDouble();
	/// Create new obj from assign value
	CellDouble(double number,String StringNumber);

	/* Virtual function from the base class CellType */
	virtual CellType* clone() const;
	virtual void print(std::ostream& out) const;
	virtual unsigned lenght() const;
	virtual double value() const;
	virtual String type() const;
	virtual String stringCell() const;
	/* End virtual function from the base class CellType*/
	
private:
	///
	///Content of the cell
	///
	String m_stringNumber;

	///
	/// Cell value
	///
	double m_number;
};

