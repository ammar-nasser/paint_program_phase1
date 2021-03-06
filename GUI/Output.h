#ifndef OUPTUT_H
#define OUPTUT_H
#include "Input.h"

class Output	//The application manager should have a pointer to this class
{
private:	
	window* pWind;	//Pointer to the Graphics Window

	std::string DrawToolBarImagesNorm[DRAW_ITM_COUNT];
	std::string DrawToolBarImagesHi[DRAW_ITM_COUNT];
	std::string PlayToolBarImages[PLAY_ITM_COUNT];

	void setDrawToolBarImagesPath(); 
	void setPlayToolBarImagesPath();



public:
	Output();		

	window* CreateWind(int, int, int , int) const; //creates the application window
	void CreateDrawToolBar(int which_is_hi = -1) const;	//creates Draw mode toolbar & menu
	void CreatePlayToolBar() const;	//creates Play mode toolbar & menu
	void CreateStatusBar() const;	//create the status bar

	Input* CreateInput() const; //creates a pointer to the Input object	
	void ClearStatusBar() const;	//Clears the status bar
	void ClearToolBar() const;	//Clears the Tool bar
	void ClearDrawArea() const;	//Clears the drawing area
	
	// -- Figures Drawing functions
	void DrawRect(Point P1, Point P2, GfxInfo RectGfxInfo, bool selected=false) const;  //Draw a rectangle
	void DrawLine(Point P1, Point P2, GfxInfo RectGfxInfo, bool selected=false) const;  //Draw a Line
	void DrawTriangle(Point P1, Point P2, Point P3, GfxInfo RectGfxInfo, bool selected=false) const;  //Draw a Triangle
	void DrawCircle(Point P1, int Radius, GfxInfo RectGfxInfo, bool selected=false) const;  //Draw a Circle
	
	///Make similar functions for drawing all other figures.
	
	void PrintMessage(string msg) const;	//Print a message on Status bar

	color getCrntDrawColor() const;	//get current drwawing color
	color getCrntFillColor() const;	//get current filling color
	int getCrntPenWidth() const;		//get current pen width

	
	~Output();
};

#endif