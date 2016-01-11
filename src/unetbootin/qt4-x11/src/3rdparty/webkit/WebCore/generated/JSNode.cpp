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

#include "JSNode.h"

#include <wtf/GetPtr.h>

#include "Document.h"
#include "JSDocument.h"
#include "JSNamedNodeMap.h"
#include "JSNode.h"
#include "JSNodeList.h"
#include "KURL.h"
#include "NameNodeList.h"
#include "NamedAttrMap.h"
#include "NamedNodeMap.h"
#include "Node.h"
#include "NodeList.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSNode)

/* Hash table */

static const HashTableValue JSNodeTableValues[19] =
{
    { "nodeName", DontDelete|ReadOnly, (intptr_t)jsNodeNodeName, (intptr_t)0 },
    { "nodeValue", DontDelete, (intptr_t)jsNodeNodeValue, (intptr_t)setJSNodeNodeValue },
    { "nodeType", DontDelete|ReadOnly, (intptr_t)jsNodeNodeType, (intptr_t)0 },
    { "parentNode", DontDelete|ReadOnly, (intptr_t)jsNodeParentNode, (intptr_t)0 },
    { "childNodes", DontDelete|ReadOnly, (intptr_t)jsNodeChildNodes, (intptr_t)0 },
    { "firstChild", DontDelete|ReadOnly, (intptr_t)jsNodeFirstChild, (intptr_t)0 },
    { "lastChild", DontDelete|ReadOnly, (intptr_t)jsNodeLastChild, (intptr_t)0 },
    { "previousSibling", DontDelete|ReadOnly, (intptr_t)jsNodePreviousSibling, (intptr_t)0 },
    { "nextSibling", DontDelete|ReadOnly, (intptr_t)jsNodeNextSibling, (intptr_t)0 },
    { "attributes", DontDelete|ReadOnly, (intptr_t)jsNodeAttributes, (intptr_t)0 },
    { "ownerDocument", DontDelete|ReadOnly, (intptr_t)jsNodeOwnerDocument, (intptr_t)0 },
    { "namespaceURI", DontDelete|ReadOnly, (intptr_t)jsNodeNamespaceURI, (intptr_t)0 },
    { "prefix", DontDelete, (intptr_t)jsNodePrefix, (intptr_t)setJSNodePrefix },
    { "localName", DontDelete|ReadOnly, (intptr_t)jsNodeLocalName, (intptr_t)0 },
    { "baseURI", DontDelete|ReadOnly, (intptr_t)jsNodeBaseURI, (intptr_t)0 },
    { "textContent", DontDelete, (intptr_t)jsNodeTextContent, (intptr_t)setJSNodeTextContent },
    { "parentElement", DontDelete|ReadOnly, (intptr_t)jsNodeParentElement, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsNodeConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSNodeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 4095, JSNodeTableValues, 0 };
#else
    { 68, 63, JSNodeTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSNodeConstructorTableValues[19] =
{
    { "ELEMENT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeELEMENT_NODE, (intptr_t)0 },
    { "ATTRIBUTE_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeATTRIBUTE_NODE, (intptr_t)0 },
    { "TEXT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeTEXT_NODE, (intptr_t)0 },
    { "CDATA_SECTION_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeCDATA_SECTION_NODE, (intptr_t)0 },
    { "ENTITY_REFERENCE_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeENTITY_REFERENCE_NODE, (intptr_t)0 },
    { "ENTITY_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeENTITY_NODE, (intptr_t)0 },
    { "PROCESSING_INSTRUCTION_NODE", DontDelete|ReadOnly, (intptr_t)jsNodePROCESSING_INSTRUCTION_NODE, (intptr_t)0 },
    { "COMMENT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeCOMMENT_NODE, (intptr_t)0 },
    { "DOCUMENT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_NODE, (intptr_t)0 },
    { "DOCUMENT_TYPE_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_TYPE_NODE, (intptr_t)0 },
    { "DOCUMENT_FRAGMENT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_FRAGMENT_NODE, (intptr_t)0 },
    { "NOTATION_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeNOTATION_NODE, (intptr_t)0 },
    { "DOCUMENT_POSITION_DISCONNECTED", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_DISCONNECTED, (intptr_t)0 },
    { "DOCUMENT_POSITION_PRECEDING", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_PRECEDING, (intptr_t)0 },
    { "DOCUMENT_POSITION_FOLLOWING", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_FOLLOWING, (intptr_t)0 },
    { "DOCUMENT_POSITION_CONTAINS", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_CONTAINS, (intptr_t)0 },
    { "DOCUMENT_POSITION_CONTAINED_BY", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_CONTAINED_BY, (intptr_t)0 },
    { "DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSNodeConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 2047, JSNodeConstructorTableValues, 0 };
#else
    { 67, 63, JSNodeConstructorTableValues, 0 };
#endif

class JSNodeConstructor : public DOMObject {
public:
    JSNodeConstructor(ExecState* exec)
        : DOMObject(JSNodeConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSNodePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSNodeConstructor::s_info = { "NodeConstructor", 0, &JSNodeConstructorTable, 0 };

bool JSNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeConstructor, DOMObject>(exec, &JSNodeConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSNodePrototypeTableValues[34] =
{
    { "ELEMENT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeELEMENT_NODE, (intptr_t)0 },
    { "ATTRIBUTE_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeATTRIBUTE_NODE, (intptr_t)0 },
    { "TEXT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeTEXT_NODE, (intptr_t)0 },
    { "CDATA_SECTION_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeCDATA_SECTION_NODE, (intptr_t)0 },
    { "ENTITY_REFERENCE_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeENTITY_REFERENCE_NODE, (intptr_t)0 },
    { "ENTITY_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeENTITY_NODE, (intptr_t)0 },
    { "PROCESSING_INSTRUCTION_NODE", DontDelete|ReadOnly, (intptr_t)jsNodePROCESSING_INSTRUCTION_NODE, (intptr_t)0 },
    { "COMMENT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeCOMMENT_NODE, (intptr_t)0 },
    { "DOCUMENT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_NODE, (intptr_t)0 },
    { "DOCUMENT_TYPE_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_TYPE_NODE, (intptr_t)0 },
    { "DOCUMENT_FRAGMENT_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_FRAGMENT_NODE, (intptr_t)0 },
    { "NOTATION_NODE", DontDelete|ReadOnly, (intptr_t)jsNodeNOTATION_NODE, (intptr_t)0 },
    { "DOCUMENT_POSITION_DISCONNECTED", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_DISCONNECTED, (intptr_t)0 },
    { "DOCUMENT_POSITION_PRECEDING", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_PRECEDING, (intptr_t)0 },
    { "DOCUMENT_POSITION_FOLLOWING", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_FOLLOWING, (intptr_t)0 },
    { "DOCUMENT_POSITION_CONTAINS", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_CONTAINS, (intptr_t)0 },
    { "DOCUMENT_POSITION_CONTAINED_BY", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_CONTAINED_BY, (intptr_t)0 },
    { "DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", DontDelete|ReadOnly, (intptr_t)jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC, (intptr_t)0 },
    { "insertBefore", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionInsertBefore, (intptr_t)2 },
    { "replaceChild", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionReplaceChild, (intptr_t)2 },
    { "removeChild", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionRemoveChild, (intptr_t)1 },
    { "appendChild", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionAppendChild, (intptr_t)1 },
    { "hasChildNodes", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionHasChildNodes, (intptr_t)0 },
    { "cloneNode", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionCloneNode, (intptr_t)1 },
    { "normalize", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionNormalize, (intptr_t)0 },
    { "isSupported", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionIsSupported, (intptr_t)2 },
    { "hasAttributes", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionHasAttributes, (intptr_t)0 },
    { "isSameNode", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionIsSameNode, (intptr_t)1 },
    { "isEqualNode", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionIsEqualNode, (intptr_t)1 },
    { "lookupPrefix", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionLookupPrefix, (intptr_t)1 },
    { "isDefaultNamespace", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionIsDefaultNamespace, (intptr_t)1 },
    { "lookupNamespaceURI", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionLookupNamespaceURI, (intptr_t)1 },
    { "compareDocumentPosition", DontDelete|Function, (intptr_t)jsNodePrototypeFunctionCompareDocumentPosition, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSNodePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 4095, JSNodePrototypeTableValues, 0 };
#else
    { 134, 127, JSNodePrototypeTableValues, 0 };
#endif

const ClassInfo JSNodePrototype::s_info = { "NodePrototype", 0, &JSNodePrototypeTable, 0 };

JSObject* JSNodePrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSNode>(exec);
}

bool JSNodePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSNodePrototype, JSObject>(exec, &JSNodePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSNode::s_info = { "Node", 0, &JSNodeTable, 0 };

JSNode::JSNode(PassRefPtr<Structure> structure, PassRefPtr<Node> impl)
    : DOMObject(structure)
    , m_impl(impl)
{
}

JSNode::~JSNode()
{
    forgetDOMNode(m_impl->document(), m_impl.get());

}

JSObject* JSNode::createPrototype(ExecState* exec)
{
    return new (exec) JSNodePrototype(JSNodePrototype::createStructure(exec->lexicalGlobalObject()->objectPrototype()));
}

JSValuePtr jsNodeNodeName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->nodeName());
}

JSValuePtr jsNodeNodeValue(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->nodeValue());
}

JSValuePtr jsNodeNodeType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return jsNumber(exec, imp->nodeType());
}

JSValuePtr jsNodeParentNode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->parentNode()));
}

JSValuePtr jsNodeChildNodes(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->childNodes()));
}

JSValuePtr jsNodeFirstChild(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->firstChild()));
}

JSValuePtr jsNodeLastChild(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->lastChild()));
}

JSValuePtr jsNodePreviousSibling(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->previousSibling()));
}

JSValuePtr jsNodeNextSibling(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->nextSibling()));
}

JSValuePtr jsNodeAttributes(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->attributes()));
}

JSValuePtr jsNodeOwnerDocument(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->ownerDocument()));
}

JSValuePtr jsNodeNamespaceURI(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->namespaceURI());
}

JSValuePtr jsNodePrefix(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->prefix());
}

JSValuePtr jsNodeLocalName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->localName());
}

JSValuePtr jsNodeBaseURI(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->baseURI());
}

JSValuePtr jsNodeTextContent(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->textContent());
}

JSValuePtr jsNodeParentElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->parentElement()));
}

JSValuePtr jsNodeConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSNode*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSNode::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSNode, Base>(exec, propertyName, value, &JSNodeTable, this, slot);
}

void setJSNodeNodeValue(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setNodeValue(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void setJSNodePrefix(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setPrefix(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

void setJSNodeTextContent(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    Node* imp = static_cast<Node*>(static_cast<JSNode*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setTextContent(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

JSValuePtr JSNode::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSNodeConstructor>(exec);
}

JSValuePtr jsNodePrototypeFunctionInsertBefore(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    return castedThisObj->insertBefore(exec, args);
}

JSValuePtr jsNodePrototypeFunctionReplaceChild(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    return castedThisObj->replaceChild(exec, args);
}

JSValuePtr jsNodePrototypeFunctionRemoveChild(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    return castedThisObj->removeChild(exec, args);
}

JSValuePtr jsNodePrototypeFunctionAppendChild(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    return castedThisObj->appendChild(exec, args);
}

JSValuePtr jsNodePrototypeFunctionHasChildNodes(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());


    JSC::JSValuePtr result = jsBoolean(imp->hasChildNodes());
    return result;
}

JSValuePtr jsNodePrototypeFunctionCloneNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());
    bool deep = args.at(exec, 0)->toBoolean(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->cloneNode(deep)));
    return result;
}

JSValuePtr jsNodePrototypeFunctionNormalize(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());

    imp->normalize();
    return jsUndefined();
}

JSValuePtr jsNodePrototypeFunctionIsSupported(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());
    const UString& feature = args.at(exec, 0)->toString(exec);
    const UString& version = valueToStringWithNullCheck(exec, args.at(exec, 1));


    JSC::JSValuePtr result = jsBoolean(imp->isSupported(feature, version));
    return result;
}

JSValuePtr jsNodePrototypeFunctionHasAttributes(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());


    JSC::JSValuePtr result = jsBoolean(imp->hasAttributes());
    return result;
}

JSValuePtr jsNodePrototypeFunctionIsSameNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());
    Node* other = toNode(args.at(exec, 0));


    JSC::JSValuePtr result = jsBoolean(imp->isSameNode(other));
    return result;
}

JSValuePtr jsNodePrototypeFunctionIsEqualNode(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());
    Node* other = toNode(args.at(exec, 0));


    JSC::JSValuePtr result = jsBoolean(imp->isEqualNode(other));
    return result;
}

JSValuePtr jsNodePrototypeFunctionLookupPrefix(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(exec, 0));


    JSC::JSValuePtr result = jsStringOrNull(exec, imp->lookupPrefix(namespaceURI));
    return result;
}

JSValuePtr jsNodePrototypeFunctionIsDefaultNamespace(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());
    const UString& namespaceURI = valueToStringWithNullCheck(exec, args.at(exec, 0));


    JSC::JSValuePtr result = jsBoolean(imp->isDefaultNamespace(namespaceURI));
    return result;
}

JSValuePtr jsNodePrototypeFunctionLookupNamespaceURI(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());
    const UString& prefix = valueToStringWithNullCheck(exec, args.at(exec, 0));


    JSC::JSValuePtr result = jsStringOrNull(exec, imp->lookupNamespaceURI(prefix));
    return result;
}

JSValuePtr jsNodePrototypeFunctionCompareDocumentPosition(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSNode::s_info))
        return throwError(exec, TypeError);
    JSNode* castedThisObj = static_cast<JSNode*>(asObject(thisValue));
    Node* imp = static_cast<Node*>(castedThisObj->impl());
    Node* other = toNode(args.at(exec, 0));


    JSC::JSValuePtr result = jsNumber(exec, imp->compareDocumentPosition(other));
    return result;
}

// Constant getters

JSValuePtr jsNodeELEMENT_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValuePtr jsNodeATTRIBUTE_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValuePtr jsNodeTEXT_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValuePtr jsNodeCDATA_SECTION_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(4));
}

JSValuePtr jsNodeENTITY_REFERENCE_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(5));
}

JSValuePtr jsNodeENTITY_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(6));
}

JSValuePtr jsNodePROCESSING_INSTRUCTION_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(7));
}

JSValuePtr jsNodeCOMMENT_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(8));
}

JSValuePtr jsNodeDOCUMENT_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(9));
}

JSValuePtr jsNodeDOCUMENT_TYPE_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(10));
}

JSValuePtr jsNodeDOCUMENT_FRAGMENT_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(11));
}

JSValuePtr jsNodeNOTATION_NODE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(12));
}

JSValuePtr jsNodeDOCUMENT_POSITION_DISCONNECTED(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0x01));
}

JSValuePtr jsNodeDOCUMENT_POSITION_PRECEDING(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0x02));
}

JSValuePtr jsNodeDOCUMENT_POSITION_FOLLOWING(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0x04));
}

JSValuePtr jsNodeDOCUMENT_POSITION_CONTAINS(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0x08));
}

JSValuePtr jsNodeDOCUMENT_POSITION_CONTAINED_BY(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0x10));
}

JSValuePtr jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0x20));
}

Node* toNode(JSC::JSValuePtr value)
{
    return value->isObject(&JSNode::s_info) ? static_cast<JSNode*>(asObject(value))->impl() : 0;
}

}