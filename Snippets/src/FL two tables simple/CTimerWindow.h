#ifndef _CTIMERWINDOW_H_INCLUDED_
#define _CTIMERWINDOW_H_INCLUDED_

#include "FLUID/CFluidTimerUI.h"

//const double TIMER_TIMEOUT = 1.0; // 1 sec

class CTimerWindow : public CFluidTimerUI
{
	static const double TIMER_TIMEOUT;// = 1.0;
	bool m_is_animated;
	int m_count;
public:
	//constructors/destructor
	CTimerWindow();
	void show();
	//callback functions
	static void cb_btn_start_callback(Fl_Widget* btn, void* userdata);
	static void cb_btn_stop_callback(Fl_Widget* btn, void* userdata);
	static void timer_event(void* userdata);
};


#endif //_CTIMERWINDOW_H_INCLUDED_