#if !defined(AFX_PIESERIES_H__4BE02FCE_0229_11D2_AE48_00400141862D__INCLUDED_)
#define AFX_PIESERIES_H__4BE02FCE_0229_11D2_AE48_00400141862D__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPen1;
class CValueList;

/////////////////////////////////////////////////////////////////////////////
// CPieSeries wrapper class

class CPieSeries : public COleDispatchDriver
{
public:
	CPieSeries() {}		// Calls COleDispatchDriver default constructor
	CPieSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPieSeries(const CPieSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetXRadius();
	void SetXRadius(long nNewValue);
	long GetYRadius();
	void SetYRadius(long nNewValue);
	CPen1 GetCirclePen();
	long GetXCenter();
	long GetYCenter();
	long GetCircleWidth();
	long GetCircleHeight();
	unsigned long GetCircleBackColor();
	void SetCircleBackColor(unsigned long newValue);
	BOOL GetCircled();
	void SetCircled(BOOL bNewValue);
	long GetRotationAngle();
	void SetRotationAngle(long nNewValue);
	void AngleToPoint(double Angle, double AXRadius, double AYRadius, long* X, long* Y);
	double PointToAngle(long X, long Y);
	BOOL GetColor3D();
	void SetColor3D(BOOL bNewValue);
	unsigned long GetShadowColor();
	void SetShadowColor(unsigned long newValue);
	BOOL GetUsePatterns();
	void SetUsePatterns(BOOL bNewValue);
	CValueList GetPieValues();
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PIESERIES_H__4BE02FCE_0229_11D2_AE48_00400141862D__INCLUDED_)