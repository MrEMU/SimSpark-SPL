/* -*- mode: c++; c-basic-offset: 4; indent-tabs-mode: nil -*-
   this file is part of rcssserver3D
   Fri May 9 2003
   Copyright (C) 2003 Koblenz University
   $Id: velocitycontroller.cpp 176 2010-02-25 12:19:37Z a-held $

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
#include <oxygen/physicsserver/velocitycontroller.h>
#include <oxygen/physicsserver/rigidbody.h>

using namespace oxygen;
using namespace salt;

VelocityController::VelocityController()
    : BodyController(), mMaxVel(0)
{
}

VelocityController::~VelocityController()
{
}

float VelocityController::GetMaxVelocity()
{
    return mMaxVel;
}

void VelocityController::SetMaxVelocity(float vel)
{
    mMaxVel = vel;
}

void VelocityController::PrePhysicsUpdateInternal(float /*deltaTime*/)
{
    // enforce maximum speed
    if (
        (mMaxVel <= 0) ||
        (mBody.get() == 0)
        )
        {
            return;
        }

    Vector3f vel = mBody->GetVelocity();
    if (vel.SquareLength() < (mMaxVel * mMaxVel))
        {
            return;
        }

    vel.Normalize();
    vel *= mMaxVel;

    mBody->SetVelocity(vel);
}
