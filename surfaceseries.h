#if !defined(AFX_SURFACESERIES_H__4BE02FCD_0229_11D2_AE48_00400141862D__INCLUDED_)
#define AFX_SURFACESERIES_H__4BE02FCD_0229_11D2_AE48_00400141862D__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CPen1;
class CValueList;

/////////////////////////////////////////////////////////////////////////////
// CSurfaceSeries wrapper class

class CSurfaceSeries : public COleDispatchDriver
{
public:
	CSurfaceSeries() {}		// Calls COleDispatchDriver default constructor
	CSurfaceSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSurfaceSeries(const CSurfaceSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CBrush1 GetBrush();
	BOOL GetDotFrame();
	void SetDotFrame(BOOL bNewValue);
	unsigned long GetEndColor();
	void SetEndColor(unsigned long newValue);
	long GetNumXValues();
	void SetNumXValues(long nNewValue);
	long GetNumZValues();
	void SetNumZValues(long nNewValue);
	long GetPaletteSteps();
	void SetPaletteSteps(long nNewValue);
	CPen1 GetPen();
	unsigned long GetStartColor();
	void SetStartColor(unsigned long newValue);
	long GetTimesZOrder();
	void SetTimesZOrder(long nNewValue);
	BOOL GetUseColorRange();
	void SetUseColorRange(BOOL bNewValue);
	BOOL GetUsePalette();
	void SetUsePalette(BOOL bNewValue);
	BOOL GetWireFrame();
	void SetWireFrame(BOOL bNewValue);
	CValueList GetZValues();
	long AddXYZ(long AX, double AY, long AZ, LPCTSTR AXLabel, unsigned long AColor);
	double GetXZValue(long X, long Z);
	unsigned long GetSurfacePaletteColor(double Y);
	long AddPalette(double Value, unsigned long Color);
	void ClearPalette();
	void CreateDefaultPalette(long NumSteps);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SURFACESERIES_H__4BE02FCD_0229_11D2_AE48_00400141862D__INCLUDED_)
