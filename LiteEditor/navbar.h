//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : navbar.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
#ifndef __navbar__
#define __navbar__

#include <vector>
#include "entry.h"
#include "wxcrafter.h"

class LEditor;

class NavBar : public NavBarControlBaseClass
{
private:
	TagEntryPtrVector_t m_tags;
    
protected:
	void OnFuncListMouseDown (wxMouseEvent &e);
	void OnScopeListMouseDown(wxMouseEvent &e);
	void OnScope             (wxCommandEvent &e);
	void OnFunction          (wxCommandEvent &e);
	
public:
	NavBar(wxWindow *parent);
	virtual ~NavBar();

	void DoShow(bool s = true);
	void UpdateScope(TagEntryPtr tag);
};

#endif // __navbar__
