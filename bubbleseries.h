#if !defined(AFX_BUBBLESERIES_H__4BE02FAA_0229_11D2_AE48_00400141862D__INCLUDED_)
#define AFX_BUBBLESERIES_H__4BE02FAA_0229_11D2_AE48_00400141862D__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPointer;
class CValueList;

/////////////////////////////////////////////////////////////////////////////
// CBubbleSeries wrapper class

class CBubbleSeries : public COleDispatchDriver
{
public:
	CBubbleSeries() {}		// Calls COleDispatchDriver default constructor
	CBubbleSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBubbleSeries(const CBubbleSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPointer GetPointer();
	CValueList GetRadiusValues();
	BOOL GetSquared();
	void SetSquared(BOOL bNewValue);
	long AddBubble(double AX, double AY, double ARadius, LPCTSTR AXLabel, unsigned long AColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BUBBLESERIES_H__4BE02FAA_0229_11D2_AE48_00400141862D__INCLUDED_)
