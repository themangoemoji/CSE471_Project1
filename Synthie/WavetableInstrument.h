#pragma once
#include "instrument.h"
#include "AR.h"

class CWavetableInstrument :
	public CInstrument
{
public:
	CWavetableInstrument(void);
	~CWavetableInstrument(void);

	virtual void Start();
	virtual bool Generate();
	virtual void SetNote(CNote *note);

	void SetDuration(double d) { m_ar.SetDuration(d); }
	void SetFreq(double f) {}



private:
	CAR         m_ar;
	double  m_time;
};