//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
#include "SplashForm.h"
//---------------------------------------------------------------------------
USEFORM("MainForm.cpp", frmMain);
USEFORM("SplashForm.cpp", FrmSplash);
USEFORM("LoginForm.cpp", Form1);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		TFrmSplash *frmSplash=new TFrmSplash(Application);
		frmSplash->Show();
		for(int i=1;i<=100;i++){
		frmSplash->ProgressBar1->Position=i;
		Sleep(100);
		frmSplash->Update();
		}
		Sleep(1000);
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TfrmMain), &frmMain);
		Application->CreateForm(__classid(TForm1), &Form1);
		frmSplash->Close();
		frmSplash->Free();
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
