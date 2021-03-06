/////////////////////////////////////////////////////////////////////////////
//
// File: delay_ms.c
//
// Copyright S. Brennen Ball, 2010
//
// The author provides no guarantees, warantees, or promises, implied or
//  otherwise.  By using this software you agree to indemnify the author
//  of any damages incurred by using it.
//
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
/////////////////////////////////////////////////////////////////////////////

#include "delay.h"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// void delay_ms(unsigned short microseconds)
//
// Description:
//  Waits the specified number of milliseconds and returns (delay is approximate)
//
// Parameters:
//  unsigned short milliseconds - number of milliseconds to delay
//
// Return value:
//  None
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void delay_ms(unsigned short milliseconds)
{
	unsigned short count;

	//Wait 1000 us for each requested ms
	for(count = 0; count < milliseconds; count++)
	{
		delay_us(1000);
	}
}
