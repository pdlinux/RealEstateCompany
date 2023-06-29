//---------------------------------------------------------------------------

#ifndef SplashFormH
#define SplashFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TFrmSplash : public TForm
{
__published:	// IDE-managed Components
	TProgressBar *ProgressBar1;
	TImage *Image1;
private:	// User declarations
public:		// User declarations
	__fastcall TFrmSplash(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmSplash *FrmSplash;
//---------------------------------------------------------------------------
#endif
