//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: gitui.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_GIT_GITUI_BASE_CLASSES_H
#define _CODELITE_GIT_GITUI_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/treebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/splitter.h>
#include <wx/checklst.h>
#include <wx/stc/stc.h>
#include <wx/pen.h>
#include <wx/aui/auibar.h>
#include <map>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/srchctrl.h>
#include <wx/combobox.h>
#include <wx/arrstr.h>
#include <wx/dataview.h>
#include <wx/listbox.h>
#include "gitCommitEditor.h"
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/gauge.h>
#include "dataviewfilesmodel.h"
#include <wx/choice.h>
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


class GitSettingsDlgBase : public wxDialog
{
protected:
    wxTreebook* m_treebook230;
    wxPanel* m_panel232;
    wxStaticText* m_staticText42;
    wxFilePickerCtrl* m_pathGIT;
    wxStaticText* m_staticText54;
    wxFilePickerCtrl* m_pathGITK;
    wxStaticText* m_staticText355;
    wxTextCtrl* m_textCtrlGitShell;
    wxPanel* m_panel234;
    wxStaticText* m_staticText246;
    wxTextCtrl* m_textCtrlGlobalName;
    wxStaticText* m_staticText250;
    wxTextCtrl* m_textCtrlGlobalEmail;
    wxStaticText* m_staticText254;
    wxTextCtrl* m_textCtrlLocalName;
    wxStaticText* m_staticText258;
    wxTextCtrl* m_textCtrlLocalEmail;
    wxPanel* m_panel236;
    wxCheckBox* m_checkBoxTerminal;
    wxCheckBox* m_checkBoxLog;
    wxCheckBox* m_checkBoxTrackTree;
    wxStdDialogButtonSizer* m_stdBtnSizer284;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnLocalRepoUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText42() { return m_staticText42; }
    wxFilePickerCtrl* GetPathGIT() { return m_pathGIT; }
    wxStaticText* GetStaticText54() { return m_staticText54; }
    wxFilePickerCtrl* GetPathGITK() { return m_pathGITK; }
    wxStaticText* GetStaticText355() { return m_staticText355; }
    wxTextCtrl* GetTextCtrlGitShell() { return m_textCtrlGitShell; }
    wxPanel* GetPanel232() { return m_panel232; }
    wxStaticText* GetStaticText246() { return m_staticText246; }
    wxTextCtrl* GetTextCtrlGlobalName() { return m_textCtrlGlobalName; }
    wxStaticText* GetStaticText250() { return m_staticText250; }
    wxTextCtrl* GetTextCtrlGlobalEmail() { return m_textCtrlGlobalEmail; }
    wxStaticText* GetStaticText254() { return m_staticText254; }
    wxTextCtrl* GetTextCtrlLocalName() { return m_textCtrlLocalName; }
    wxStaticText* GetStaticText258() { return m_staticText258; }
    wxTextCtrl* GetTextCtrlLocalEmail() { return m_textCtrlLocalEmail; }
    wxPanel* GetPanel234() { return m_panel234; }
    wxCheckBox* GetCheckBoxTerminal() { return m_checkBoxTerminal; }
    wxCheckBox* GetCheckBoxLog() { return m_checkBoxLog; }
    wxCheckBox* GetCheckBoxTrackTree() { return m_checkBoxTrackTree; }
    wxPanel* GetPanel236() { return m_panel236; }
    wxTreebook* GetTreebook230() { return m_treebook230; }
    GitSettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git settings..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitSettingsDlgBase();
};


class GitCommitDlgBase : public wxDialog
{
public:
    enum {
        ID_GIT_COMMIT_HISTORY = 6001,
        ID_TOGGLE_CHECKALL = 6002,
    };
protected:
    wxSplitterWindow* m_splitterMain;
    wxPanel* m_panel3;
    wxSplitterWindow* m_splitterInner;
    wxPanel* m_panel1;
    wxCheckListBox* m_listBox;
    wxPanel* m_panel2;
    wxStyledTextCtrl* m_stcDiff;
    wxPanel* m_panel4;
    wxAuiToolBar* m_auibar;
    wxStyledTextCtrl* m_stcCommitMessage;
    wxCheckBox* m_checkBoxAmend;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnChangeFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnToggleCheckAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCommitHistory(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCommitHistoryUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearGitCommitHistory(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearGitCommitHistoryUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCommitOK(wxCommandEvent& event) { event.Skip(); }

public:
    wxCheckListBox* GetListBox() { return m_listBox; }
    wxPanel* GetPanel1() { return m_panel1; }
    wxStyledTextCtrl* GetStcDiff() { return m_stcDiff; }
    wxPanel* GetPanel2() { return m_panel2; }
    wxSplitterWindow* GetSplitterInner() { return m_splitterInner; }
    wxPanel* GetPanel3() { return m_panel3; }
    wxAuiToolBar* GetAuibar() { return m_auibar; }
    wxStyledTextCtrl* GetStcCommitMessage() { return m_stcCommitMessage; }
    wxCheckBox* GetCheckBoxAmend() { return m_checkBoxAmend; }
    wxPanel* GetPanel4() { return m_panel4; }
    wxSplitterWindow* GetSplitterMain() { return m_splitterMain; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    GitCommitDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git commit"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitCommitDlgBase();
};


class GitCommitListDlgBase : public wxDialog
{
protected:
    wxSplitterWindow* m_splitter174;
    wxPanel* m_splitterPage178;
    wxSearchCtrl* m_searchCtrlFilter;
    wxButton* m_buttonPrevious;
    wxButton* m_buttonNext;
    wxCheckBox* m_checkBoxIgnoreCase;
    wxStaticText* m_staticText414;
    wxComboBox* m_comboExtraArgs;
    wxDataViewListCtrl* m_dvListCtrlCommitList;
    wxPanel* m_splitterPage182;
    wxSplitterWindow* m_splitter186;
    wxPanel* m_splitterPage190;
    wxSplitterWindow* m_splitter196;
    wxPanel* m_splitterPage200;
    wxStaticText* m_staticText210;
    wxListBox* m_fileListBox;
    wxPanel* m_splitterPage204;
    wxStaticText* m_staticText217;
    wxStyledTextCtrl* m_stcDiff;
    wxPanel* m_splitterPage194;
    wxStaticText* m_staticText220;
    wxStyledTextCtrl* m_stcCommitMessage;

protected:
    virtual void OnClose(wxCloseEvent& event) { event.Skip(); }
    virtual void OnSearchCommitList(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPrevious(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPreviousUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnNext(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNextUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnExtraArgsTextEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSelectionChanged(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnContextMenu(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnChangeFile(wxCommandEvent& event) { event.Skip(); }

public:
    wxSearchCtrl* GetSearchCtrlFilter() { return m_searchCtrlFilter; }
    wxButton* GetButtonPrevious() { return m_buttonPrevious; }
    wxButton* GetButtonNext() { return m_buttonNext; }
    wxCheckBox* GetCheckBoxIgnoreCase() { return m_checkBoxIgnoreCase; }
    wxStaticText* GetStaticText414() { return m_staticText414; }
    wxComboBox* GetComboExtraArgs() { return m_comboExtraArgs; }
    wxDataViewListCtrl* GetDvListCtrlCommitList() { return m_dvListCtrlCommitList; }
    wxPanel* GetSplitterPage178() { return m_splitterPage178; }
    wxStaticText* GetStaticText210() { return m_staticText210; }
    wxListBox* GetFileListBox() { return m_fileListBox; }
    wxPanel* GetSplitterPage200() { return m_splitterPage200; }
    wxStaticText* GetStaticText217() { return m_staticText217; }
    wxStyledTextCtrl* GetStcDiff() { return m_stcDiff; }
    wxPanel* GetSplitterPage204() { return m_splitterPage204; }
    wxSplitterWindow* GetSplitter196() { return m_splitter196; }
    wxPanel* GetSplitterPage190() { return m_splitterPage190; }
    wxStaticText* GetStaticText220() { return m_staticText220; }
    wxStyledTextCtrl* GetStcCommitMessage() { return m_stcCommitMessage; }
    wxPanel* GetSplitterPage194() { return m_splitterPage194; }
    wxSplitterWindow* GetSplitter186() { return m_splitter186; }
    wxPanel* GetSplitterPage182() { return m_splitterPage182; }
    wxSplitterWindow* GetSplitter174() { return m_splitter174; }
    GitCommitListDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Commit List"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX);
    virtual ~GitCommitListDlgBase();
};


class GitDiffDlgBase : public wxDialog
{
protected:
    wxSplitterWindow* m_splitter;
    wxPanel* m_splitterPageFiles;
    wxStaticText* m_staticText68;
    wxListBox* m_fileListBox;
    wxPanel* m_splitterPageDiff;
    wxStaticText* m_staticText66;
    GitCommitEditor* m_editor;
    wxStdDialogButtonSizer* m_sdbSizer1;
    wxButton* m_button145;

protected:
    virtual void OnChangeFile(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText68() { return m_staticText68; }
    wxListBox* GetFileListBox() { return m_fileListBox; }
    wxPanel* GetSplitterPageFiles() { return m_splitterPageFiles; }
    wxStaticText* GetStaticText66() { return m_staticText66; }
    GitCommitEditor* GetEditor() { return m_editor; }
    wxPanel* GetSplitterPageDiff() { return m_splitterPageDiff; }
    wxSplitterWindow* GetSplitter() { return m_splitter; }
    GitDiffDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Current Diffs"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(879,600), long style = wxCAPTION|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxCLOSE_BOX);
    virtual ~GitDiffDlgBase();
};


class gitCloneDlgBaseClass : public wxDialog
{
protected:
    wxStaticText* m_staticText22;
    wxTextCtrl* m_textCtrlURL;
    wxStaticText* m_staticText24;
    wxDirPickerCtrl* m_dirPickerTargetDir;
    wxStdDialogButtonSizer* m_stdBtnSizer294;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;

protected:
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText22() { return m_staticText22; }
    wxTextCtrl* GetTextCtrlURL() { return m_textCtrlURL; }
    wxStaticText* GetStaticText24() { return m_staticText24; }
    wxDirPickerCtrl* GetDirPickerTargetDir() { return m_dirPickerTargetDir; }
    gitCloneDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("git clone.."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~gitCloneDlgBaseClass();
};


class GitFileDiffDlgBase : public wxDialog
{
protected:
    GitCommitEditor* m_editor;
    wxStdDialogButtonSizer* m_stdBtnSizer306;
    wxButton* m_button308;
    wxButton* m_button310;

protected:
    virtual void OnCloseDialog(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSaveAsPatch(wxCommandEvent& event) { event.Skip(); }

public:
    GitCommitEditor* GetEditor() { return m_editor; }
    GitFileDiffDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("File diff"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitFileDiffDlgBase();
};


class GitImages : public wxImageList
{
protected:
    // Maintain a map of all bitmaps representd by their name
    std::map<wxString, wxBitmap> m_bitmaps;
    // The requested image resolution (can be one of @2x, @1.5x, @1.25x or an empty string (the default)
    wxString m_resolution;
    int m_imagesWidth;
    int m_imagesHeight;


protected:

public:
    GitImages();
    const wxBitmap& Bitmap(const wxString &name) const {
        if ( !m_bitmaps.count(name + m_resolution) )
            return wxNullBitmap;
        return m_bitmaps.find(name + m_resolution)->second;
    }

    void SetBitmapResolution(const wxString &res = wxEmptyString) {
        m_resolution = res;
    }

    virtual ~GitImages();
};


class GitApplyPatchDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText164;
    wxFilePickerCtrl* m_filePickerPatchFile;
    wxStaticText* m_staticText168;
    wxTextCtrl* m_textCtrlExtraFlags;
    wxStdDialogButtonSizer* m_stdBtnSizer300;
    wxButton* m_buttonCancel;
    wxButton* m_buttonOK;

protected:

public:
    wxStaticText* GetStaticText164() { return m_staticText164; }
    wxFilePickerCtrl* GetFilePickerPatchFile() { return m_filePickerPatchFile; }
    wxStaticText* GetStaticText168() { return m_staticText168; }
    wxTextCtrl* GetTextCtrlExtraFlags() { return m_textCtrlExtraFlags; }
    GitApplyPatchDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git Apply Patch"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitApplyPatchDlgBase();
};


class GitConsoleBase : public wxPanel
{
protected:
    wxGauge* m_gauge;
    wxAuiToolBar* m_auibar;
    wxSplitterWindow* m_splitter;
    wxPanel* m_splitterPageTreeView;
    wxDataViewCtrl* m_dvFiles;
    wxObjectDataPtr<DataViewFilesModel> m_dvFilesModel;

    wxPanel* m_splitterPage96;
    wxStyledTextCtrl* m_stcLog;

protected:
    virtual void OnContextMenu(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnFileActivated(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnStclogStcChange(wxStyledTextEvent& event) { event.Skip(); }

public:
    wxGauge* GetGauge() { return m_gauge; }
    wxAuiToolBar* GetAuibar() { return m_auibar; }
    wxDataViewCtrl* GetDvFiles() { return m_dvFiles; }
    wxPanel* GetSplitterPageTreeView() { return m_splitterPageTreeView; }
    wxStyledTextCtrl* GetStcLog() { return m_stcLog; }
    wxPanel* GetSplitterPage96() { return m_splitterPage96; }
    wxSplitterWindow* GetSplitter() { return m_splitter; }
    GitConsoleBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~GitConsoleBase();
};


class GitBlameDlgBase : public wxDialog
{
protected:
    wxAuiToolBar* m_auibar436;
    wxChoice* m_choiceHistory;
    wxStaticText* m_staticText414;
    wxComboBox* m_comboExtraArgs;
    wxSplitterWindow* m_splitterMain;
    wxPanel* m_splitterPageTop;
    wxStyledTextCtrl* m_stcBlame;
    wxPanel* m_splitterPageBottom;
    wxSplitterWindow* m_splitterH;
    wxPanel* m_splitterPage194;
    wxStaticText* m_staticText220;
    wxStyledTextCtrl* m_stcCommitMessage;
    wxPanel* m_splitterPage190;
    wxSplitterWindow* m_splitterV;
    wxPanel* m_splitterPage200;
    wxStaticText* m_staticText210;
    wxListBox* m_fileListBox;
    wxPanel* m_splitterPage204;
    wxStaticText* m_staticText217;
    wxStyledTextCtrl* m_stcDiff;
    wxStdDialogButtonSizer* m_stdBtnSizer306;
    wxButton* m_button308;

protected:
    virtual void OnPreviousBlame(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBackUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnNextBlame(wxCommandEvent& event) { event.Skip(); }
    virtual void OnForwardUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnHistoryItemSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnExtraArgsTextEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRefreshBlame(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSettings(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStcblameLeftDclick(wxMouseEvent& event) { event.Skip(); }
    virtual void OnSelectionChanged(wxMouseEvent& event) { event.Skip(); }
    virtual void OnChangeFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCloseDialog(wxCommandEvent& event) { event.Skip(); }

public:
    wxChoice* GetChoiceHistory() { return m_choiceHistory; }
    wxStaticText* GetStaticText414() { return m_staticText414; }
    wxComboBox* GetComboExtraArgs() { return m_comboExtraArgs; }
    wxAuiToolBar* GetAuibar436() { return m_auibar436; }
    wxStyledTextCtrl* GetStcBlame() { return m_stcBlame; }
    wxPanel* GetSplitterPageTop() { return m_splitterPageTop; }
    wxStaticText* GetStaticText220() { return m_staticText220; }
    wxStyledTextCtrl* GetStcCommitMessage() { return m_stcCommitMessage; }
    wxPanel* GetSplitterPage194() { return m_splitterPage194; }
    wxStaticText* GetStaticText210() { return m_staticText210; }
    wxListBox* GetFileListBox() { return m_fileListBox; }
    wxPanel* GetSplitterPage200() { return m_splitterPage200; }
    wxStaticText* GetStaticText217() { return m_staticText217; }
    wxStyledTextCtrl* GetStcDiff() { return m_stcDiff; }
    wxPanel* GetSplitterPage204() { return m_splitterPage204; }
    wxSplitterWindow* GetSplitterV() { return m_splitterV; }
    wxPanel* GetSplitterPage190() { return m_splitterPage190; }
    wxSplitterWindow* GetSplitterH() { return m_splitterH; }
    wxPanel* GetSplitterPageBottom() { return m_splitterPageBottom; }
    wxSplitterWindow* GetSplitterMain() { return m_splitterMain; }
    GitBlameDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git Blame"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitBlameDlgBase();
};


class GitBlameSettingsDlgBase : public wxDialog
{
protected:
    wxCheckBox* m_checkParentCommit;
    wxCheckBox* m_checkShowLogControls;
    wxStdDialogButtonSizer* m_stdBtnSizer429;
    wxButton* m_button431;
    wxButton* m_button433;

protected:

public:
    wxCheckBox* GetCheckParentCommit() { return m_checkParentCommit; }
    wxCheckBox* GetCheckShowLogControls() { return m_checkShowLogControls; }
    GitBlameSettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git Blame Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~GitBlameSettingsDlgBase();
};


class GitResetDlgBase : public wxDialog
{
public:
    enum {
        ID_TOGGLE_CHECKALL_REMOVE = 6001,
        ID_TOGGLE_CHECKALL_REVERT = 6002,
    };
protected:
    wxStaticText* m_staticText585;
    wxStaticText* m_staticText581;
    wxCheckListBox* m_checkListBoxChanged;
    wxAuiToolBar* m_auibar569;
    wxStaticText* m_staticText5815;
    wxCheckListBox* m_checkListBoxNew;
    wxAuiToolBar* m_auibar5693;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnToggleAllRevert(wxCommandEvent& event) { event.Skip(); }
    virtual void OnToggleAllRevertUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnToggleAllRemove(wxCommandEvent& event) { event.Skip(); }
    virtual void OnToggleAllRemoveUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText585() { return m_staticText585; }
    wxStaticText* GetStaticText581() { return m_staticText581; }
    wxCheckListBox* GetCheckListBoxChanged() { return m_checkListBoxChanged; }
    wxAuiToolBar* GetAuibar569() { return m_auibar569; }
    wxStaticText* GetStaticText5815() { return m_staticText5815; }
    wxCheckListBox* GetCheckListBoxNew() { return m_checkListBoxNew; }
    wxAuiToolBar* GetAuibar5693() { return m_auibar5693; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    GitResetDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git Reset Files"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX);
    virtual ~GitResetDlgBase();
};

#endif
