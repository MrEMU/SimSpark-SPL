/* -*- mode: c++; c-basic-offset: 4; indent-tabs-mode: nil -*-

   this file is part of rcssserver3D
   Fri May 9 2003
   Copyright (C) 2002,2003 Koblenz University
   Copyright (C) 2003 RoboCup Soccer Server 3D Maintenance Group
   $Id: body.h 106 2009-11-19 10:10:50Z a-held $

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#ifndef OXYGEN_CONETWISTJOINT_H
#define OXYGEN_CONETWISTJOINT_H

#include <oxygen/oxygen_defines.h>
#include <oxygen/physicsserver/generic6dofjoint.h>

namespace oxygen
{
/**
    ConeTwistJoint is not yet implemented.
*/

class OXYGEN_API ConeTwistJoint : public Generic6DOFJoint
{

public:
    ConeTwistJoint() : Generic6DOFJoint(){};
    virtual ~ConeTwistJoint(){};
    
    //overwrite pure virtual methods inherited from Joint 
    //to shut the compiler up
    void SetParameter(int parameter, float value){};
    float GetParameter(int parameter) const {};
};

DECLARE_CLASS(ConeTwistJoint);

} //namespace oxygen

#endif //OXYGEN_CONETWISTJOINT_H