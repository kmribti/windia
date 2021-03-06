#pragma once
#include "diaentity.h"
class DiaEllipse :
	public DiaEntity
{
public:
	DiaEllipse(int x1, int y1, int x2, int y2);
	virtual ~DiaEllipse(void);
	void draw(CDC* pDC) const;
	bool contains(const CPoint&) const;
	void applyVec(const std::pair<LONG,LONG>&);
	CPoint getCentralPoint() const;	
	CPoint getCrossPoint(const CPoint& from, const CPoint& to) const;
	virtual DiaEntity::Type type() const { return DiaEntity::Ellipse; };

	const int& getX1r() const { return m_x1; }
	const int& getY1r() const { return m_y1; }
	const int& getX2r() const { return m_x2; }
	const int& getY2r() const { return m_y2; }

private:	

	int m_x1;
	int m_y1;
	int m_x2;
	int m_y2;	
};

