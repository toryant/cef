// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/ctocpp/menu_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefMenuHandlerCToCpp::OnBeforeMenu(CefRefPtr<CefBrowser> browser,
    const CefMenuInfo& menuInfo) {
  if (CEF_MEMBER_MISSING(struct_, on_before_menu))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = struct_->on_before_menu(struct_,
      CefBrowserCppToC::Wrap(browser),
      &menuInfo);

  // Return type: bool
  return _retval?true:false;
}

void CefMenuHandlerCToCpp::GetMenuLabel(CefRefPtr<CefBrowser> browser,
    MenuId menuId, CefString& label) {
  if (CEF_MEMBER_MISSING(struct_, get_menu_label))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  struct_->get_menu_label(struct_,
      CefBrowserCppToC::Wrap(browser),
      menuId,
      label.GetWritableStruct());
}

bool CefMenuHandlerCToCpp::OnMenuAction(CefRefPtr<CefBrowser> browser,
    MenuId menuId) {
  if (CEF_MEMBER_MISSING(struct_, on_menu_action))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = struct_->on_menu_action(struct_,
      CefBrowserCppToC::Wrap(browser),
      menuId);

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefMenuHandlerCToCpp, CefMenuHandler,
    cef_menu_handler_t>::DebugObjCt = 0;
#endif

