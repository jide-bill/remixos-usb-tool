/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG)

#include "SVGElement.h"
#include "JSSVGPathSegCurvetoCubicAbs.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegCurvetoCubic.h"

#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegCurvetoCubicAbs)

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoCubicAbsTableValues[7] =
{
    { "x", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicAbsX, (intptr_t)setJSSVGPathSegCurvetoCubicAbsX },
    { "y", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicAbsY, (intptr_t)setJSSVGPathSegCurvetoCubicAbsY },
    { "x1", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicAbsX1, (intptr_t)setJSSVGPathSegCurvetoCubicAbsX1 },
    { "y1", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicAbsY1, (intptr_t)setJSSVGPathSegCurvetoCubicAbsY1 },
    { "x2", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicAbsX2, (intptr_t)setJSSVGPathSegCurvetoCubicAbsX2 },
    { "y2", DontDelete, (intptr_t)jsSVGPathSegCurvetoCubicAbsY2, (intptr_t)setJSSVGPathSegCurvetoCubicAbsY2 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegCurvetoCubicAbsTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSSVGPathSegCurvetoCubicAbsTableValues, 0 };
#else
    { 16, 15, JSSVGPathSegCurvetoCubicAbsTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoCubicAbsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegCurvetoCubicAbsPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegCurvetoCubicAbsPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegCurvetoCubicAbsPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPathSegCurvetoCubicAbsPrototype::s_info = { "SVGPathSegCurvetoCubicAbsPrototype", 0, &JSSVGPathSegCurvetoCubicAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegCurvetoCubicAbsPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGPathSegCurvetoCubicAbs>(exec);
}

const ClassInfo JSSVGPathSegCurvetoCubicAbs::s_info = { "SVGPathSegCurvetoCubicAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegCurvetoCubicAbsTable, 0 };

JSSVGPathSegCurvetoCubicAbs::JSSVGPathSegCurvetoCubicAbs(PassRefPtr<Structure> structure, PassRefPtr<SVGPathSegCurvetoCubicAbs> impl, SVGElement* context)
    : JSSVGPathSeg(structure, impl, context)
{
}

JSObject* JSSVGPathSegCurvetoCubicAbs::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGPathSegCurvetoCubicAbsPrototype(JSSVGPathSegCurvetoCubicAbsPrototype::createStructure(JSSVGPathSegPrototype::self(exec)));
}

bool JSSVGPathSegCurvetoCubicAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicAbs, Base>(exec, &JSSVGPathSegCurvetoCubicAbsTable, this, propertyName, slot);
}

JSValuePtr jsSVGPathSegCurvetoCubicAbsX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->x());
}

JSValuePtr jsSVGPathSegCurvetoCubicAbsY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->y());
}

JSValuePtr jsSVGPathSegCurvetoCubicAbsX1(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->x1());
}

JSValuePtr jsSVGPathSegCurvetoCubicAbsY1(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->y1());
}

JSValuePtr jsSVGPathSegCurvetoCubicAbsX2(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->x2());
}

JSValuePtr jsSVGPathSegCurvetoCubicAbsY2(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->y2());
}

void JSSVGPathSegCurvetoCubicAbs::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegCurvetoCubicAbs, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoCubicAbsTable, this, slot);
}

void setJSSVGPathSegCurvetoCubicAbsX(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl());
    imp->setX(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicAbsY(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl());
    imp->setY(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicAbsX1(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl());
    imp->setX1(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicAbsY1(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl());
    imp->setY1(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicAbsX2(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl());
    imp->setX2(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl()->associatedAttributeName());
}

void setJSSVGPathSegCurvetoCubicAbsY2(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGPathSegCurvetoCubicAbs* imp = static_cast<SVGPathSegCurvetoCubicAbs*>(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl());
    imp->setY2(value->toFloat(exec));
    if (static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context())
        static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGPathSegCurvetoCubicAbs*>(thisObject)->impl()->associatedAttributeName());
}


}

#endif // ENABLE(SVG)