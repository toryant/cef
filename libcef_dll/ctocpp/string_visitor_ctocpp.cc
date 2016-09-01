// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/string_visitor_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefStringVisitorCToCpp::Visit(const CefString& string) {
  cef_string_visitor_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, visit))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: string

  // Execute
  _struct->visit(_struct,
      string.GetStruct());
}


// CONSTRUCTOR - Do not edit by hand.

CefStringVisitorCToCpp::CefStringVisitorCToCpp() {
}

template<> cef_string_visitor_t* CefCToCpp<CefStringVisitorCToCpp,
    CefStringVisitor, cef_string_visitor_t>::UnwrapDerived(CefWrapperType type,
    CefStringVisitor* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefStringVisitorCToCpp,
    CefStringVisitor, cef_string_visitor_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefStringVisitorCToCpp, CefStringVisitor,
    cef_string_visitor_t>::kWrapperType = WT_STRING_VISITOR;
