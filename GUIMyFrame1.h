#ifndef __GUIMyFrame1__
#define __GUIMyFrame1__

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

#include <wx/filedlg.h>
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/colourdata.h>
#include <wx/colordlg.h>

#include <array>
#include <vector>
#include "Vector3D.h"


/** Implementing MyFrame1 */
class GUIMyFrame1 : public MyFrame1
{
	protected:
		// Handlers for MyFrame1 events.
		void m_loadOnButtonClick( wxCommandEvent& event );
		void m_saveOnButtonClick( wxCommandEvent& event );
		void m_slider2OnScroll( wxScrollEvent& event );
		void m_panelOnUpdateUI( wxUpdateUIEvent& event );
		void m_w1OnButtonClick( wxCommandEvent& event );
		void m_w2OnButtonClick( wxCommandEvent& event );
		void m_w3OnButtonClick( wxCommandEvent& event );
		void m_w4OnButtonClick( wxCommandEvent& event );
		void m_w5OnButtonClick( wxCommandEvent& event );
		void m_w6OnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		GUIMyFrame1( wxWindow* parent );
	//// end generated class members
	void Repaint();
	void DrawSlice(); //rysuje przekroj do SliceImage
	double ShepardMethod(double, double, double); //aproksymacja wartosci funkcji metoda Sheparda
	
	std::vector<double> XData, YData, ZData, FData; //wektory przechowujace wartosci x, y, z, f (z pliku)
	std::vector <double> * XAxisArg, * YAxisArg, * ZAxisArg;
	double FunMax, FunMin; //max i min aktualnej fukcji 4D (czyli wektora FData)
	double PointRange; //zakres argumentow x, y, z (max - min)
	Vector3D SliceVector; //aktualny wektor przekroju
	int SliceNumber; //liczba na slajderze, czyli aktualny numer przekroju (mo�e by� 100 przekroj�w)
	wxImage SliceImage; //obraz aktualnego przekroju
	bool IsFileLoaded; 
};

#endif // __GUIMyFrame1__
