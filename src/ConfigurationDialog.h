/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  pypilot Plugin
 * Author:   Sean D'Epagnier
 *
 ***************************************************************************
 *   Copyright (C) 2018 by Sean D'Epagnier                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.         *
 ***************************************************************************
 */

#include "pypilotUI.h"

class pypilot_pi;

class ConfigurationDialog : public ConfigurationDialogBase
{
public:
    ConfigurationDialog( pypilot_pi &_pypilot_pi, wxWindow* parent);
    ~ConfigurationDialog();
    bool Show( bool show=true );

    void Receive(wxString &name, wxJSONValue &value);
    const char **GetWatchlist();

private:
    void OnAboutForwardnema( wxCommandEvent& event );
    void OnAboutEnableOverlay( wxCommandEvent& event );
    void OnAboutTrueNorth( wxCommandEvent& event );
    void OnAddControlAngle( wxCommandEvent& event );
    void OnRemoveControlAngle( wxCommandEvent& event );
    void OnPeriod( wxSpinEvent& event );
    void OnMaxCurrent( wxSpinEvent& event );
    void OnInformation( wxCommandEvent& event );
    void OnOk( wxCommandEvent& event );
    void OnClose( wxCommandEvent& event );
    void OnHost( wxCommandEvent& event );

    double ApplyTrueNorth(double value);
    
    pypilot_pi &m_pypilot_pi;
};
