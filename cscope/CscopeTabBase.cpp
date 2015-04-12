//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: CscopeTabBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "CscopeTabBase.h"


// Declare the bitmap loading function
extern void wxC59CAInitBitmapResources();

static bool bBitmapLoaded = false;


CscopeTabBase::CscopeTabBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC59CAInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);
    
    wxBoxSizer* bSizer3 = new wxBoxSizer(wxHORIZONTAL);
    
    mainSizer->Add(bSizer3, 1, wxALL|wxEXPAND, 2);
    
    wxBoxSizer* boxSizer4 = new wxBoxSizer(wxVERTICAL);
    
    bSizer3->Add(boxSizer4, 1, wxEXPAND, 2);
    
    m_dataview = new wxDataViewCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(300,-1), wxDV_VERT_RULES|wxDV_ROW_LINES|wxDV_SINGLE|wxBORDER_THEME);
    
    m_dataviewModel = new CScoptViewResultsModel;
    m_dataviewModel->SetColCount( 3 );
    m_dataview->AssociateModel(m_dataviewModel.get() );
    
    boxSizer4->Add(m_dataview, 1, wxEXPAND, 2);
    
    m_dataview->AppendIconTextColumn(_("Scope"), m_dataview->GetColumnCount(), wxDATAVIEW_CELL_INERT, 200, wxALIGN_LEFT);
    m_dataview->AppendTextColumn(_("Line"), m_dataview->GetColumnCount(), wxDATAVIEW_CELL_INERT, -2, wxALIGN_LEFT);
    m_dataview->AppendTextColumn(_("Pattern"), m_dataview->GetColumnCount(), wxDATAVIEW_CELL_INERT, 600, wxALIGN_LEFT);
    m_statusMessage = new wxStaticText(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    
    boxSizer4->Add(m_statusMessage, 0, wxTOP|wxEXPAND, 5);
    
    wxBoxSizer* bSizer31 = new wxBoxSizer(wxVERTICAL);
    
    bSizer3->Add(bSizer31, 0, wxEXPAND, 2);
    
    m_staticText2 = new wxStaticText(this, wxID_ANY, _("Search scope:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer31->Add(m_staticText2, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_LEFT, 5);
    
    wxArrayString m_choiceSearchScopeArr;
    m_choiceSearchScope = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_choiceSearchScopeArr, 0);
    
    bSizer31->Add(m_choiceSearchScope, 0, wxALL|wxEXPAND, 5);
    
    m_checkBoxUpdateDb = new wxCheckBox(this, wxID_ANY, _("Update Db if stale"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxUpdateDb->SetValue(false);
    m_checkBoxUpdateDb->SetToolTip(_("If checked, before executing a command CScope will look for any changed files and, if found, try to update the database. In practice this seems unreliable."));
    
    bSizer31->Add(m_checkBoxUpdateDb, 0, wxALL|wxALIGN_LEFT, 5);
    
    m_checkBoxRevertedIndex = new wxCheckBox(this, wxID_ANY, _("Create reverted Index"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxRevertedIndex->SetValue(false);
    m_checkBoxRevertedIndex->SetToolTip(_("Create reverted Index database"));
    
    bSizer31->Add(m_checkBoxRevertedIndex, 0, wxALL|wxALIGN_LEFT, 5);
    
    bSizer31->Add(0, 0, 1, wxALL, 5);
    
    m_buttonUpdateDbNow = new wxButton(this, wxID_ANY, _("&Update Database"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonUpdateDbNow->SetToolTip(_("Perform an immediate database update"));
    
    bSizer31->Add(m_buttonUpdateDbNow, 0, wxLEFT|wxRIGHT|wxEXPAND, 5);
    
    m_buttonClear = new wxButton(this, wxID_ANY, _("&Clear Results"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer31->Add(m_buttonClear, 0, wxALL|wxEXPAND, 5);
    
    m_gauge = new wxGauge(this, wxID_ANY, 100, wxDefaultPosition, wxSize(-1,5), wxGA_SMOOTH|wxGA_HORIZONTAL);
    m_gauge->SetValue(0);
    
    bSizer31->Add(m_gauge, 0, wxALL|wxEXPAND, 5);
    
    SetName(wxT("CscopeTabBase"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
    // Connect events
    m_dataview->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED, wxDataViewEventHandler(CscopeTabBase::OnItemActivated), NULL, this);
    m_dataview->Connect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler(CscopeTabBase::OnItemSelected), NULL, this);
    m_choiceSearchScope->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(CscopeTabBase::OnChangeSearchScope), NULL, this);
    m_checkBoxUpdateDb->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CscopeTabBase::OnChangeSearchScope), NULL, this);
    m_checkBoxUpdateDb->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CscopeTabBase::OnWorkspaceOpenUI), NULL, this);
    m_checkBoxRevertedIndex->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CscopeTabBase::OnChangeSearchScope), NULL, this);
    m_checkBoxRevertedIndex->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CscopeTabBase::OnWorkspaceOpenUI), NULL, this);
    m_buttonUpdateDbNow->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CscopeTabBase::OnCreateDB), NULL, this);
    m_buttonUpdateDbNow->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CscopeTabBase::OnWorkspaceOpenUI), NULL, this);
    m_buttonClear->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CscopeTabBase::OnClearResults), NULL, this);
    m_buttonClear->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CscopeTabBase::OnClearResultsUI), NULL, this);
    
}

CscopeTabBase::~CscopeTabBase()
{
    m_dataview->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED, wxDataViewEventHandler(CscopeTabBase::OnItemActivated), NULL, this);
    m_dataview->Disconnect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler(CscopeTabBase::OnItemSelected), NULL, this);
    m_choiceSearchScope->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(CscopeTabBase::OnChangeSearchScope), NULL, this);
    m_checkBoxUpdateDb->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CscopeTabBase::OnChangeSearchScope), NULL, this);
    m_checkBoxUpdateDb->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CscopeTabBase::OnWorkspaceOpenUI), NULL, this);
    m_checkBoxRevertedIndex->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CscopeTabBase::OnChangeSearchScope), NULL, this);
    m_checkBoxRevertedIndex->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CscopeTabBase::OnWorkspaceOpenUI), NULL, this);
    m_buttonUpdateDbNow->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CscopeTabBase::OnCreateDB), NULL, this);
    m_buttonUpdateDbNow->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CscopeTabBase::OnWorkspaceOpenUI), NULL, this);
    m_buttonClear->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CscopeTabBase::OnClearResults), NULL, this);
    m_buttonClear->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CscopeTabBase::OnClearResultsUI), NULL, this);
    
}

CScopeSettingsDlgBase::CScopeSettingsDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC59CAInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer10 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer10);
    
    wxFlexGridSizer* flexGridSizer18 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer18->SetFlexibleDirection( wxBOTH );
    flexGridSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer18->AddGrowableCol(1);
    
    boxSizer10->Add(flexGridSizer18, 1, wxALL|wxEXPAND, 5);
    
    m_staticText20 = new wxStaticText(this, wxID_ANY, _("CScope executable:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer18->Add(m_staticText20, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_filePickerCScopeExe = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE);
    m_filePickerCScopeExe->SetToolTip(_("Set the path to cscope executable"));
    
    flexGridSizer18->Add(m_filePickerCScopeExe, 0, wxALL|wxEXPAND, 5);
    
    m_stdBtnSizer12 = new wxStdDialogButtonSizer();
    
    boxSizer10->Add(m_stdBtnSizer12, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button14 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_button14->SetDefault();
    m_stdBtnSizer12->AddButton(m_button14);
    
    m_button16 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer12->AddButton(m_button16);
    m_stdBtnSizer12->Realize();
    
    SetName(wxT("CScopeSettingsDlgBase"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    wxPersistenceManager::Get().RegisterAndRestore(this);
#endif
}

CScopeSettingsDlgBase::~CScopeSettingsDlgBase()
{
}
