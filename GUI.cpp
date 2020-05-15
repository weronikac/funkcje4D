///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_load = new wxButton( this, wxID_ANY, wxT("Load from file"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_load, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_save = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );

	m_save->SetDefault();
	bSizer7->Add( m_save, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer2->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_slider2 = new wxSlider( this, wxID_ANY, 1, 0, 100, wxPoint( -1,-1 ), wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	bSizer6->Add( m_slider2, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	X_position = new wxStaticText( this, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	X_position->Wrap( -1 );
	bSizer6->Add( X_position, 0, wxALL, 5 );

	Y_position = new wxStaticText( this, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	Y_position->Wrap( -1 );
	bSizer6->Add( Y_position, 0, wxALL, 5 );

	Z_position = new wxStaticText( this, wxID_ANY, wxT("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	Z_position->Wrap( -1 );
	bSizer6->Add( Z_position, 0, wxALL, 5 );


	bSizer2->Add( bSizer6, 0, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOBK ) );

	bSizer3->Add( m_panel, 1, wxALL|wxEXPAND|wxALIGN_RIGHT, 5 );


	bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );

	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_w1 = new wxButton( this, wxID_ANY, wxT("[1,0,0]"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_w1, 0, wxALIGN_RIGHT|wxTOP|wxBOTTOM|wxRIGHT, 5 );

	m_w2 = new wxButton( this, wxID_ANY, wxT("[0,1,0]"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_w2, 0, wxALL|wxALIGN_RIGHT, 5 );

	m_w3 = new wxButton( this, wxID_ANY, wxT("[0,0,1]"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_w3, 0, wxALL|wxALIGN_RIGHT, 5 );

	m_w4 = new wxButton( this, wxID_ANY, wxT("[1,1,0]"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_w4, 0, wxALL|wxALIGN_RIGHT, 5 );

	m_w5 = new wxButton( this, wxID_ANY, wxT("[1,0,1]"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_w5, 0, wxALIGN_RIGHT|wxALL|wxLEFT|wxRIGHT|wxTOP, 5 );

	m_w6 = new wxButton( this, wxID_ANY, wxT("[0,1,1]"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_w6, 0, wxALL, 5 );


	bSizer1->Add( bSizer4, 0, wxALIGN_RIGHT|wxALL|wxRIGHT, 9 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_load->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_loadOnButtonClick ), NULL, this );
	m_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_saveOnButtonClick ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_panel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::m_panelOnUpdateUI ), NULL, this );
	m_w1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w1OnButtonClick ), NULL, this );
	m_w2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w2OnButtonClick ), NULL, this );
	m_w3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w3OnButtonClick ), NULL, this );
	m_w4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w4OnButtonClick ), NULL, this );
	m_w5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w5OnButtonClick ), NULL, this );
	m_w6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w6OnButtonClick ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_load->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_loadOnButtonClick ), NULL, this );
	m_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_saveOnButtonClick ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_slider2->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider2OnScroll ), NULL, this );
	m_panel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::m_panelOnUpdateUI ), NULL, this );
	m_w1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w1OnButtonClick ), NULL, this );
	m_w2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w2OnButtonClick ), NULL, this );
	m_w3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w3OnButtonClick ), NULL, this );
	m_w4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w4OnButtonClick ), NULL, this );
	m_w5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w5OnButtonClick ), NULL, this );
	m_w6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_w6OnButtonClick ), NULL, this );

}
