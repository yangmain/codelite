//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: AddOptionsDialogBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_LITEEDITOR_ADDOPTIONSDIALOGBASE_BASE_CLASSES_H
#define _CODELITE_LITEEDITOR_ADDOPTIONSDIALOGBASE_BASE_CLASSES_H

// clang-format off
#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stc/stc.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

// clang-format on

class AddOptionsDialogBase : public wxDialog
{
protected:
    wxStyledTextCtrl* m_stc;
    wxStdDialogButtonSizer* m_stdBtnSizer4;
    wxButton* m_button6;
    wxButton* m_button8;

protected:
public:
    wxStyledTextCtrl* GetStc() { return m_stc; }
    AddOptionsDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Edit"),
                         const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 300),
                         long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~AddOptionsDialogBase();
};

#endif