#if !defined(AFX_LEGEND_H__4BE02FC3_0229_11D2_AE48_00400141862D__INCLUDED_)
#define AFX_LEGEND_H__4BE02FC3_0229_11D2_AE48_00400141862D__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPen1;
class CChartFont;

/////////////////////////////////////////////////////////////////////////////
// CLegend wrapper class

class CLegend : public COleDispatchDriver
{
public:
	CLegend() {}		// Calls COleDispatchDriver default constructor
	CLegend(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CLegend(const CLegend& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetAlignment();
	void SetAlignment(long nNewValue);
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	long GetColorWidth();
	void SetColorWidth(long nNewValue);
	CPen1 GetDividingLines();
	long GetFirstValue();
	void SetFirstValue(long nNewValue);
	CChartFont GetFont();
	CPen1 GetFrame();
	long GetHorizMargin();
	void SetHorizMargin(long nNewValue);
	BOOL GetInverted();
	void SetInverted(BOOL bNewValue);
	long GetLegendStyle();
	void SetLegendStyle(long nNewValue);
	BOOL GetResizeChart();
	void SetResizeChart(BOOL bNewValue);
	unsigned long GetShadowColor();
	void SetShadowColor(unsigned long newValue);
	long GetShadowSize();
	void SetShadowSize(long nNewValue);
	long GetTextStyle();
	void SetTextStyle(long nNewValue);
	long GetTopPos();
	void SetTopPos(long nNewValue);
	long GetVertMargin();
	void SetVertMargin(long nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CString Formatted(long SeriesOrValueIndex);
	CString FormattedValue(long ASeries, long ValueIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEGEND_H__4BE02FC3_0229_11D2_AE48_00400141862D__INCLUDED_)
