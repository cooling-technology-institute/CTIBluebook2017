#if !defined(AFX_AREASERIES_H__4BE02FBF_0229_11D2_AE48_00400141862D__INCLUDED_)
#define AFX_AREASERIES_H__4BE02FBF_0229_11D2_AE48_00400141862D__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPointer;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CAreaSeries wrapper class

class CAreaSeries : public COleDispatchDriver
{
public:
	CAreaSeries() {}		// Calls COleDispatchDriver default constructor
	CAreaSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAreaSeries(const CAreaSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPointer GetPointer();
	BOOL GetStairs();
	void SetStairs(BOOL bNewValue);
	BOOL GetInvertedStairs();
	void SetInvertedStairs(BOOL bNewValue);
	CPen1 GetLinePen();
	long GetLineBrush();
	void SetLineBrush(long nNewValue);
	BOOL GetClickableLine();
	void SetClickableLine(BOOL bNewValue);
	long GetAreaBrush();
	void SetAreaBrush(long nNewValue);
	CPen1 GetAreaPen();
	long GetMultiArea();
	void SetMultiArea(long nNewValue);
	long GetOriginPos(long ValueIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AREASERIES_H__4BE02FBF_0229_11D2_AE48_00400141862D__INCLUDED_)
