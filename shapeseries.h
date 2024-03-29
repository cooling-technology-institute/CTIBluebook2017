#if !defined(AFX_SHAPESERIES_H__4BE02FA9_0229_11D2_AE48_00400141862D__INCLUDED_)
#define AFX_SHAPESERIES_H__4BE02FA9_0229_11D2_AE48_00400141862D__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CChartFont;
class CPen1;
class CStrings;

/////////////////////////////////////////////////////////////////////////////
// CShapeSeries wrapper class

class CShapeSeries : public COleDispatchDriver
{
public:
	CShapeSeries() {}		// Calls COleDispatchDriver default constructor
	CShapeSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CShapeSeries(const CShapeSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetAlignment();
	void SetAlignment(long nNewValue);
	CBrush1 GetBrush();
	CChartFont GetFont();
	CPen1 GetPen();
	BOOL GetRoundRectangle();
	void SetRoundRectangle(BOOL bNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	CStrings GetText();
	void SetText(LPDISPATCH newValue);
	BOOL GetTransparent();
	void SetTransparent(BOOL bNewValue);
	double GetX0();
	void SetX0(double newValue);
	double GetX1();
	void SetX1(double newValue);
	long GetXYStyle();
	void SetXYStyle(long nNewValue);
	double GetY0();
	void SetY0(double newValue);
	double GetY1();
	void SetY1(double newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHAPESERIES_H__4BE02FA9_0229_11D2_AE48_00400141862D__INCLUDED_)
