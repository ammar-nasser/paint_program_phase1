#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x, y;

	//Create Input and Output objects to test
	Output* pOut = new Output();;
	Input* pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	
	//			Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Drawing all the Figures with all possible states: 
	//			Non-filled, Filled, and highlighted in both cases			
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	GfxInfo gfxInfo;//to be used with draw function of the class Ouput
	Point P1, P2, P3;

	/// 2.1- Rectangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	// 2.1.1 - Drawing non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 3;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawRect(P1, P2, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);


	// 2.1.3 - Drawing a filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 4;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRect(P1, P2, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.2- Line Test ///
	/// ============== 
	pOut->PrintMessage("Drawing a Line, normal and Highlighted, Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	///TODO: Add code to draw Line, Normal and Highlighted
	// 2.2.1 - Drawing normal non-filled Line
	pOut->PrintMessage("Drawing a Line ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 3;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawLine(P1, P2, gfxInfo, false);

	// 2.2.2 - Drawing highlighted non-filled Line
	pOut->PrintMessage("Drawing a Line ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawLine(P1, P2, gfxInfo, true);

	pOut->PrintMessage("Drawing a Line Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.3- Triangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Triangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	///TODO: Add code to draw Triangle in all possible states

	// 2.3.1 - Drawing non-filled Triangle
	pOut->PrintMessage("Drawing a Trinagle ==> non-filled,  Click Three points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);

	gfxInfo.BorderWdth = 3;
	gfxInfo.DrawClr = ORANGE;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawTriangle(P1, P2, P3, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawTriangle(P1, P2, P3, gfxInfo, true);


	// 2.1.3 - Drawing a filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click Three points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);

	gfxInfo.BorderWdth = 4;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawTriangle(P1, P2, P3, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawTriangle(P1, P2, P3, gfxInfo, true);


	pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.4- Circle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Circle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	///TODO: Add code to draw Circle in all possible states

	// 2.4.1 - Drawing non-filled circle
	pOut->PrintMessage("Drawing a Circle ==> non-filled,  Click on the Center");
	pIn->GetPointClicked(P1.x, P1.y);
	const int def_radius = 40;

	gfxInfo.BorderWdth = 3;
	gfxInfo.DrawClr = YELLOW;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawCircle(P1, def_radius, gfxInfo, false);

	// 2.4.2 - Drawing highlighted non-filled circle
	pOut->PrintMessage("Drawing a Circle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawCircle(P1, def_radius, gfxInfo, true);


	// 2.4.3 - Drawing a filled circle
	pOut->PrintMessage("Drawing a Circle ==> filled,  Click on the Center");
	pIn->GetPointClicked(P1.x, P1.y);

	gfxInfo.BorderWdth = 4;
	gfxInfo.DrawClr = GREEN;	//any color for border
	gfxInfo.FillClr = BLACK;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawCircle(P1, def_radius, gfxInfo, false);


	// 2.4.4 - Drawing a highlighted filled circle
	pOut->PrintMessage("Drawing a Circle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawCircle(P1, def_radius, gfxInfo, true);


	pOut->PrintMessage("Drawing a Circle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	pOut->PrintMessage("Testing Input ability to read strings please type any thing you want then press Return");

	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar
	// 2- After reading the stirng clear the status bar
	// 3- print on the status bar "You Entered" then print the string

	std::string in_string = pIn->GetString(pOut);
	pOut->ClearStatusBar();
	pOut->PrintMessage(std::string("You Entered: " + in_string));

	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: 
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;
	ActionType PrevActType = EMPTY;
	///TODO:  
	//You must add a case for each action (both Draw mode and Play mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case DRAW_RECT:
			pOut->PrintMessage("Action: Draw a Rectangle , Click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_RECT);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;//this is necessary because the user might be click on the same icon twice, in this case the item should be hilighted again
			}
			break;

		case DRAW_LINE:
			pOut->PrintMessage("Action: Draw a Line , Click anywhere");	
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_LINE);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case DRAW_CIRC:
			pOut->PrintMessage("Action: Draw a Circle , Click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_CIRC);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case DRAW_TRI:
			pOut->PrintMessage("Action: Draw a Triangle , Click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_TRI);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case CHNG_DRAW_CLR:
			pOut->PrintMessage("Action: Change the drawing color , Click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_DRAW_CLR);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case CHNG_FILL_CLR:
			pOut->PrintMessage("Action: Change fill color , Click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_FILL_CLR);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case CHNG_BK_CLR:
			pOut->PrintMessage("Action: Chang background color, click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_BK_CLR);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case SELECT:
			pOut->PrintMessage("Action: Select shape, click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_SELECT);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case MOVE:
			pOut->PrintMessage("Action: MOVE shape, click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_MOVE);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case DEL:
			pOut->PrintMessage("Action: Delete shape, click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_DEL);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case RESIZE:
			pOut->PrintMessage("Action: Resize shape, click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_RESIZE);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case ROTATE:
			pOut->PrintMessage("Action: Rotate a shape, click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_ROTATE);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case SEND_BACK:
			pOut->PrintMessage("Action: send back shape, click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_SEND_BACK);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case BRNG_FRNT:
			pOut->PrintMessage("Action: bring forward shape, click anywhere");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_BRNG_FRNT);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case SAVE:
			pOut->PrintMessage("Action: Saving data...");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_SAVE);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case LOAD:
			pOut->PrintMessage("Action: Loading data...");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_LOAD);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case REDO:
			pOut->PrintMessage("Action: redo previous action...");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_REDO);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case UNDO:
			pOut->PrintMessage("Action: undo previous action");
			if (ActType != PrevActType)
			{
				pOut->CreateDrawToolBar(ITM_UNDO);
				PrevActType = ActType;
			}
			else
			{
				pOut->CreateDrawToolBar();
				PrevActType = EMPTY;
			}
			break;

		case STATUS:
			pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
			break;

		case DRAWING_AREA:
			pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
			break;

		case EMPTY:
			pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
			break;

		case TO_DRAW:
			pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
			pOut->CreateDrawToolBar();
			break;

		case SHAPE_ONLY:
			pOut->PrintMessage("Action: Switching to shape only game mode, click anywhere ");
			break;

		case CLR_ONLY:
			pOut->PrintMessage("Action: Switching to color only game mode, click anywhere");
			break;

		case SHAPE_N_CLR:
			pOut->PrintMessage("Action: Switching to shape and color game mode, click anywhere");
			break;

		case AREA:
			pOut->PrintMessage("Action: Switching to area game mode, click anywhere");
			break;

		case TO_PLAY:
			pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
			pOut->CreatePlayToolBar();
			break;
		case EXIT:
			pOut->CreateDrawToolBar(ITM_EXIT);
			break;
		}
	} while (ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x, y);


	delete pIn;
	delete pOut;
	return 0;
}


