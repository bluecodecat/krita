/*
 *  Copyright (c) 2016 Boudewijn Rempt <boud@valdyas.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#include "Resource.h"

struct Resource::Private {
    Private() {}
};

Resource::Resource(QObject *parent) 
    : QObject(parent)
    , d(new Private)
{
}

Resource::~Resource() 
{
    delete d;
}

QString Resource::type() const
{
    // UNIMPLEMENTED
    return QString();
}

void Resource::setType(QString value)
{
    // UNIMPLEMENTED
}


QString Resource::name() const
{
    // UNIMPLEMENTED
    return QString();
}

void Resource::setName(QString value)
{
    // UNIMPLEMENTED
}


QString Resource::filename() const
{
    // UNIMPLEMENTED
    return QString();
}

void Resource::setFilename(QString value)
{
    // UNIMPLEMENTED
}





