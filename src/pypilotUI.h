///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 20 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __PYPILOTUI_H__
#define __PYPILOTUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/tglbtn.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/scrolwin.h>
#include <wx/combobox.h>
#include <wx/checkbox.h>
#include <wx/statbox.h>
#include <wx/spinctrl.h>
#include <wx/listbox.h>
#include <wx/spinbutt.h>
#include <wx/gauge.h>

#include "wxWTranslateCatalog.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pypilotDialogBase
///////////////////////////////////////////////////////////////////////////////
class pypilotDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxToggleButton* m_bAP;
		wxChoice* m_cMode;
		wxStaticText* m_stServoFlags;
		wxStaticText* m_stCommand;
		wxStaticText* m_stHeading;
		wxFlexGridSizer* m_fgControlAnglesNeg;
		wxFlexGridSizer* m_fgControlAnglesPos;
		wxFlexGridSizer* m_fgControlManual;
		wxButton* m_bManualPortLong;
		wxButton* m_bManualPortShort;
		wxButton* m_bManualStarboardShort;
		wxButton* m_bManualStarboardLong;
		wxButton* m_bGains;
		wxButton* m_bConfiguration;
		wxButton* m_bCalibration;
		wxButton* m_bStatistics;
		wxButton* m_bClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnAP( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMode( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnManualPortLong( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnManualPortShort( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnManualStarboardShort( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnManualStarboardLong( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGains( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnConfiguration( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCalibration( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnStatistics( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxStaticText* m_stStatus;
		
		pypilotDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("pypilot"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL ); 
		~pypilotDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class GainsDialogBase
///////////////////////////////////////////////////////////////////////////////
class GainsDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxScrolledWindow* m_swGains;
		wxFlexGridSizer* m_fgGains;
		wxStdDialogButtonSizer* m_sdbSizer4;
		wxButton* m_sdbSizer4OK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GainsDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("pypilot Gains"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~GainsDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ConfigurationDialogBase
///////////////////////////////////////////////////////////////////////////////
class ConfigurationDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText6;
		wxComboBox* m_cHost;
		wxCheckBox* m_cbForwardnmea;
		wxButton* m_bAboutForwardnema;
		wxCheckBox* m_cbEnableGraphicOverlay;
		wxButton* m_bAboutEnableOverlay;
		wxCheckBox* m_cbTrueNorthMode;
		wxButton* m_button18;
		wxSpinCtrl* m_sControlAngle;
		wxListBox* m_lControlAngles;
		wxButton* m_bAddControlAngle;
		wxButton* m_button11;
		wxStaticText* m_staticText35;
		wxSpinCtrl* m_sControlColumns;
		wxStaticText* m_staticText5;
		wxStaticText* m_stPeriod;
		wxSpinButton* m_sPeriod;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText8;
		wxStaticText* m_stMaxCurrent;
		wxSpinButton* m_sMaxCurrent;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText10;
		wxSpinCtrl* m_sMinSpeed;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText101;
		wxSpinCtrl* m_sMaxSpeed;
		wxStaticText* m_staticText111;
		wxStaticText* m_staticText30;
		wxSpinCtrl* m_sMaxControllerTemp;
		wxStaticText* m_staticText31;
		wxStaticText* m_staticText32;
		wxSpinCtrl* m_sMaxMotorTemp;
		wxStaticText* m_staticText311;
		wxStaticText* m_staticText41;
		wxSpinCtrl* m_sMinRudderPos;
		wxStaticText* m_staticText42;
		wxStaticText* m_staticText43;
		wxSpinCtrl* m_sMaxRudderPos;
		wxStaticText* m_staticText44;
		wxButton* m_bInformation;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnHost( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAboutForwardnema( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAboutEnableOverlay( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAboutTrueNorth( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddControlAngle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveControlAngle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPeriod( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnMaxCurrent( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOk( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ConfigurationDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("pypilot Configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~ConfigurationDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class StatisticsDialogBase
///////////////////////////////////////////////////////////////////////////////
class StatisticsDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText39;
		wxStaticText* m_stUptime;
		wxStaticText* m_staticText36;
		wxStaticText* m_stAPRuntime;
		wxStaticText* m_staticText18;
		wxStaticText* m_stWatts;
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText21;
		wxStaticText* m_stAmpHours;
		wxButton* m_bResetAmpHours;
		wxStaticText* m_staticText24;
		wxStaticText* m_stControllerTemp;
		wxStaticText* m_staticText26;
		wxStaticText* m_staticText27;
		wxStaticText* m_stMotorTemp;
		wxStaticText* m_staticText29;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnResetAmpHours( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		StatisticsDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("pypilot Statistics"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~StatisticsDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CalibrationDialogBase
///////////////////////////////////////////////////////////////////////////////
class CalibrationDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxStaticText* m_stCompassCalibrationAge;
		wxStaticText* m_staticText25;
		wxStaticText* m_stPitchRoll;
		wxGauge* m_gLevel;
		wxButton* m_bLevel;
		wxButton* m_button16;
		wxStaticText* m_staticText34;
		wxSpinCtrl* m_sHeadingOffset;
		wxButton* m_button17;
		wxStdDialogButtonSizer* m_sdbSizer3;
		wxButton* m_sdbSizer3OK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnLevel( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAboutLevel( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHeadingOffset( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnAboutHeadingOffset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		CalibrationDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("pypilot Calibration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~CalibrationDialogBase();
	
};

#endif //__PYPILOTUI_H__
