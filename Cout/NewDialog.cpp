#include "NewDialog.h"

//(*InternalHeaders(NewDialog)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(NewDialog)
//*)

BEGIN_EVENT_TABLE(NewDialog,wxDialog)
	//(*EventTable(NewDialog)
	//*)
END_EVENT_TABLE()

NewDialog::NewDialog(wxWindow* parent)
{
	//(*Initialize(NewDialog)
	wxXmlResource::Get()->LoadObject(this,parent,_T("NewDialog"),_T("wxDialog"));
	//*)
}

NewDialog::~NewDialog()
{
	//(*Destroy(NewDialog)
	//*)
}

