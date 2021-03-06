{ Parsed from Webkit.framework DOMNode.h }

{$ifdef TYPES}
{$ifndef DOMNODE_PAS_T}
{$define DOMNODE_PAS_T}

{ Constants }

const
  DOM_ELEMENT_NODE = 1;
  DOM_ATTRIBUTE_NODE = 2;
  DOM_TEXT_NODE = 3;
  DOM_CDATA_SECTION_NODE = 4;
  DOM_ENTITY_REFERENCE_NODE = 5;
  DOM_ENTITY_NODE = 6;
  DOM_PROCESSING_INSTRUCTION_NODE = 7;
  DOM_COMMENT_NODE = 8;
  DOM_DOCUMENT_NODE = 9;
  DOM_DOCUMENT_TYPE_NODE = 10;
  DOM_DOCUMENT_FRAGMENT_NODE = 11;
  DOM_NOTATION_NODE = 12;
  DOM_DOCUMENT_POSITION_DISCONNECTED = $01;
  DOM_DOCUMENT_POSITION_PRECEDING = $02;
  DOM_DOCUMENT_POSITION_FOLLOWING = $04;
  DOM_DOCUMENT_POSITION_CONTAINS = $08;
  DOM_DOCUMENT_POSITION_CONTAINED_BY = $10;
  DOM_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC = $20;

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef DOMNODE_PAS_R}
{$define DOMNODE_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef DOMNODE_PAS_F}
{$define DOMNODE_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef DOMNODE_PAS_S}
{$define DOMNODE_PAS_S}

{$endif}
{$endif}

{$ifdef FORWARD}
  DOMNode = objcclass;
  DOMNodePointer = ^DOMNode;
  DOMNodePtr = DOMNodePointer;

{$endif}

{$ifdef CLASSES}
{$ifndef DOMNODE_PAS_C}
{$define DOMNODE_PAS_C}

{ DOMNode }
  DOMNode = objcclass external (DOMObject, DOMEventTargetProtocol)
    
  public
    function nodeName: NSString; message 'nodeName';
    procedure setNodeValue (newValue: NSString); message 'setNodeValue:';
    function nodeValue: NSString; message 'nodeValue';
    function nodeType: cuint; message 'nodeType';
    function parentNode: DOMNode; message 'parentNode';
    function childNodes: DOMNodeList; message 'childNodes';
    function firstChild: DOMNode; message 'firstChild';
    function lastChild: DOMNode; message 'lastChild';
    function previousSibling: DOMNode; message 'previousSibling';
    function nextSibling: DOMNode; message 'nextSibling';
    function attributes: DOMNamedNodeMap; message 'attributes';
    function ownerDocument: DOMDocument; message 'ownerDocument';
    function namespaceURI: NSString; message 'namespaceURI';
    procedure setPrefix (newValue: NSString); message 'setPrefix:';
    function prefix: NSString; message 'prefix';
    function localName: NSString; message 'localName';
    function baseURI: NSString; message 'baseURI';
    procedure setTextContent (newValue: NSString); message 'setTextContent:';
    function textContent: NSString; message 'textContent';
    function parentElement: DOMElement; message 'parentElement';
    function isContentEditable: BOOL; message 'isContentEditable';
    function insertBefore_refChild(newChild: DOMNode; refChild: DOMNode): DOMNode; message 'insertBefore:refChild:';
    function replaceChild_oldChild(newChild: DOMNode; oldChild: DOMNode): DOMNode; message 'replaceChild:oldChild:';
    function removeChild(oldChild: DOMNode): DOMNode; message 'removeChild:';
    function appendChild(newChild: DOMNode): DOMNode; message 'appendChild:';
    function hasChildNodes: BOOL; message 'hasChildNodes';
    function cloneNode(deep: BOOL): DOMNode; message 'cloneNode:';
    procedure normalize; message 'normalize';
    function isSupported_version(feature: NSString; version_: NSString): BOOL; message 'isSupported:version:';
    function hasAttributes: BOOL; message 'hasAttributes';
    function isSameNode(other: DOMNode): BOOL; message 'isSameNode:';
    function isEqualNode(other: DOMNode): BOOL; message 'isEqualNode:';
    function lookupPrefix(namespaceURI_: NSString): NSString; message 'lookupPrefix:';
    function isDefaultNamespace(namespaceURI_: NSString): BOOL; message 'isDefaultNamespace:';
    function lookupNamespaceURI(prefix_: NSString): NSString; message 'lookupNamespaceURI:';
    function compareDocumentPosition(other: DOMNode): cushort; message 'compareDocumentPosition:';

    { Adopted Protocols }
    procedure addEventListener_listener_useCapture(type_: NSString; listener: DOMEventListenerProtocol; useCapture: BOOL);
    procedure removeEventListener_listener_useCapture(type_: NSString; listener: DOMEventListenerProtocol; useCapture: BOOL);
    function dispatchEvent(event: DOMEvent): BOOL;
    procedure addEventListener(type_: NSString; listener: DOMEventListenerProtocol; useCapture: BOOL);
    procedure removeEventListener(type_: NSString; listener: DOMEventListenerProtocol; useCapture: BOOL);
  end;

{ DOMNodeDeprecatedCategory }
  DOMNodeDeprecatedCategory = objccategory external (DOMNode)
    function insertBefore(newChild: DOMNode; refChild: DOMNode): DOMNode; message 'insertBefore:newChild:'; deprecated 'in_webkit_version_3 and later';
    function replaceChild(newChild: DOMNode; oldChild: DOMNode): DOMNode; message 'replaceChild:newChild:'; deprecated 'in_webkit_version_3 and later';
    function isSupported(feature: NSString; version_: NSString): BOOL; message 'isSupported:feature:'; deprecated 'in_webkit_version_3 and later';
  end;

{$endif}
{$endif}
