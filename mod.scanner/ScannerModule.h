/**
 * ScannerModule.h
 * Copyright (C) 2002 Daniel Karrels (dan@karrels.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,
 * USA.
 *
 * $Id: ScannerModule.h,v 1.2 2002/08/08 21:44:00 dan_karrels Exp $
 */

#ifndef __SCANNERMODULE_H
#define __SCANNERMODULE_H "$Id: ScannerModule.h,v 1.2 2002/08/08 21:44:00 dan_karrels Exp $"

#include	<string>

#include	"ConnectionManager.h"
#include	"ConnectionHandler.h"

namespace gnuworld
{

using std::string ;

// Forward declaration of class scanner to prevent circular dependencies
class scanner ;

class ScannerModule : public ConnectionHandler
{
public:
	ScannerModule( ConnectionManager* cm, scanner* theScanner ) ;
	virtual ~ScannerModule() ;

	virtual void	CheckIP( const string& ip ) = 0 ;

protected:

	ConnectionManager*	cm ;
	scanner*		theScanner ;

} ;

} // namespace gnuworld

#endif //__SCANNERMODULE_H
