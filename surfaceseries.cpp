// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "surfaceseries.h"

// Dispatch interfaces referenced by this interface
#include "brush.h"
#include "pen.h"
#include "valuelist.h"


/////////////////////////////////////////////////////////////////////////////
// CSurfaceSeries properties

/////////////////////////////////////////////////////////////////////////////
// CSurfaceSeries operations

CBrush1 CSurfaceSeries::GetBrush()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBrush1(pDispatch);
}

BOOL CSurfaceSeries::GetDotFrame()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetDotFrame(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

unsigned long CSurfaceSeries::GetEndColor()
{
	unsigned long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetEndColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CSurfaceSeries::GetNumXValues()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetNumXValues(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CSurfaceSeries::GetNumZValues()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetNumZValues(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CSurfaceSeries::GetPaletteSteps()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetPaletteSteps(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CPen1 CSurfaceSeries::GetPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

unsigned long CSurfaceSeries::GetStartColor()
{
	unsigned long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetStartColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CSurfaceSeries::GetTimesZOrder()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetTimesZOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CSurfaceSeries::GetUseColorRange()
{
	BOOL result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetUseColorRange(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CSurfaceSeries::GetUsePalette()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetUsePalette(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CSurfaceSeries::GetWireFrame()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CSurfaceSeries::SetWireFrame(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CValueList CSurfaceSeries::GetZValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

long CSurfaceSeries::AddXYZ(long AX, double AY, long AZ, LPCTSTR AXLabel, unsigned long AColor)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_R8 VTS_I4 VTS_BSTR VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		AX, AY, AZ, AXLabel, AColor);
	return result;
}

double CSurfaceSeries::GetXZValue(long X, long Z)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		X, Z);
	return result;
}

unsigned long CSurfaceSeries::GetSurfacePaletteColor(double Y)
{
	unsigned long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Y);
	return result;
}

long CSurfaceSeries::AddPalette(double Value, unsigned long Color)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_I4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Value, Color);
	return result;
}

void CSurfaceSeries::ClearPalette()
{
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CSurfaceSeries::CreateDefaultPalette(long NumSteps)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumSteps);
}