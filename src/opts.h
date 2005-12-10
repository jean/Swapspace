/*
This file is part of Swapspace.

Swapspace is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

Swapspace is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with swapspace; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
 
#ifndef SWAPSPACE_OPTS_H
#define SWAPSPACE_OPTS_H

#include "main.h"

bool configure(int argc, char *argv[]);

/// Check for error condition EXPR
/** If the condition is met, prints error message to stderr and returns false.
 */
#define CHECK_CONFIG_ERR(EXPR) \
  if(EXPR)return fputs("Configuration error: " #EXPR "\n",stderr),false

#endif
