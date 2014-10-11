// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/cpptoc/run_file_dialog_callback_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/browser_host_ctocpp.h"
#include "libcef_dll/ctocpp/drag_data_ctocpp.h"
#include "libcef_dll/ctocpp/request_context_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// STATIC METHODS - Body may be edited by hand.

bool CefBrowserHost::CreateBrowser(const CefWindowInfo& windowInfo,
    CefRefPtr<CefClient> client, const CefString& url,
    const CefBrowserSettings& settings,
    CefRefPtr<CefRequestContext> request_context) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: client, url, request_context

  // Execute
  int _retval = cef_browser_host_create_browser(
      &windowInfo,
      CefClientCppToC::Wrap(client),
      url.GetStruct(),
      &settings,
      CefRequestContextCToCpp::Unwrap(request_context));

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefBrowser> CefBrowserHost::CreateBrowserSync(
    const CefWindowInfo& windowInfo, CefRefPtr<CefClient> client,
    const CefString& url, const CefBrowserSettings& settings,
    CefRefPtr<CefRequestContext> request_context) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: client, url, request_context

  // Execute
  cef_browser_t* _retval = cef_browser_host_create_browser_sync(
      &windowInfo,
      CefClientCppToC::Wrap(client),
      url.GetStruct(),
      &settings,
      CefRequestContextCToCpp::Unwrap(request_context));

  // Return type: refptr_same
  return CefBrowserCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefBrowser> CefBrowserHostCToCpp::GetBrowser() {
  if (CEF_MEMBER_MISSING(struct_, get_browser))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_t* _retval = struct_->get_browser(struct_);

  // Return type: refptr_same
  return CefBrowserCToCpp::Wrap(_retval);
}

void CefBrowserHostCToCpp::CloseBrowser(bool force_close) {
  if (CEF_MEMBER_MISSING(struct_, close_browser))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->close_browser(struct_,
      force_close);
}

void CefBrowserHostCToCpp::SetFocus(bool focus) {
  if (CEF_MEMBER_MISSING(struct_, set_focus))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_focus(struct_,
      focus);
}

void CefBrowserHostCToCpp::SetWindowVisibility(bool visible) {
  if (CEF_MEMBER_MISSING(struct_, set_window_visibility))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_window_visibility(struct_,
      visible);
}

CefWindowHandle CefBrowserHostCToCpp::GetWindowHandle() {
  if (CEF_MEMBER_MISSING(struct_, get_window_handle))
    return kNullWindowHandle;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_handle_t _retval = struct_->get_window_handle(struct_);

  // Return type: simple
  return _retval;
}

CefWindowHandle CefBrowserHostCToCpp::GetOpenerWindowHandle() {
  if (CEF_MEMBER_MISSING(struct_, get_opener_window_handle))
    return kNullWindowHandle;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_handle_t _retval = struct_->get_opener_window_handle(struct_);

  // Return type: simple
  return _retval;
}

CefRefPtr<CefClient> CefBrowserHostCToCpp::GetClient() {
  if (CEF_MEMBER_MISSING(struct_, get_client))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_client_t* _retval = struct_->get_client(struct_);

  // Return type: refptr_diff
  return CefClientCppToC::Unwrap(_retval);
}

CefRefPtr<CefRequestContext> CefBrowserHostCToCpp::GetRequestContext() {
  if (CEF_MEMBER_MISSING(struct_, get_request_context))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_request_context_t* _retval = struct_->get_request_context(struct_);

  // Return type: refptr_same
  return CefRequestContextCToCpp::Wrap(_retval);
}

double CefBrowserHostCToCpp::GetZoomLevel() {
  if (CEF_MEMBER_MISSING(struct_, get_zoom_level))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  double _retval = struct_->get_zoom_level(struct_);

  // Return type: simple
  return _retval;
}

void CefBrowserHostCToCpp::SetZoomLevel(double zoomLevel) {
  if (CEF_MEMBER_MISSING(struct_, set_zoom_level))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_zoom_level(struct_,
      zoomLevel);
}

void CefBrowserHostCToCpp::RunFileDialog(FileDialogMode mode,
    const CefString& title, const CefString& default_file_name,
    const std::vector<CefString>& accept_types,
    CefRefPtr<CefRunFileDialogCallback> callback) {
  if (CEF_MEMBER_MISSING(struct_, run_file_dialog))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return;
  // Unverified params: title, default_file_name, accept_types

  // Translate param: accept_types; type: string_vec_byref_const
  cef_string_list_t accept_typesList = cef_string_list_alloc();
  DCHECK(accept_typesList);
  if (accept_typesList)
    transfer_string_list_contents(accept_types, accept_typesList);

  // Execute
  struct_->run_file_dialog(struct_,
      mode,
      title.GetStruct(),
      default_file_name.GetStruct(),
      accept_typesList,
      CefRunFileDialogCallbackCppToC::Wrap(callback));

  // Restore param:accept_types; type: string_vec_byref_const
  if (accept_typesList)
    cef_string_list_free(accept_typesList);
}

void CefBrowserHostCToCpp::StartDownload(const CefString& url) {
  if (CEF_MEMBER_MISSING(struct_, start_download))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return;

  // Execute
  struct_->start_download(struct_,
      url.GetStruct());
}

void CefBrowserHostCToCpp::Print() {
  if (CEF_MEMBER_MISSING(struct_, print))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->print(struct_);
}

void CefBrowserHostCToCpp::Find(int identifier, const CefString& searchText,
    bool forward, bool matchCase, bool findNext) {
  if (CEF_MEMBER_MISSING(struct_, find))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: searchText; type: string_byref_const
  DCHECK(!searchText.empty());
  if (searchText.empty())
    return;

  // Execute
  struct_->find(struct_,
      identifier,
      searchText.GetStruct(),
      forward,
      matchCase,
      findNext);
}

void CefBrowserHostCToCpp::StopFinding(bool clearSelection) {
  if (CEF_MEMBER_MISSING(struct_, stop_finding))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->stop_finding(struct_,
      clearSelection);
}

void CefBrowserHostCToCpp::ShowDevTools(const CefWindowInfo& windowInfo,
    CefRefPtr<CefClient> client, const CefBrowserSettings& settings,
    const CefPoint& inspect_element_at) {
  if (CEF_MEMBER_MISSING(struct_, show_dev_tools))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: client; type: refptr_diff
  DCHECK(client.get());
  if (!client.get())
    return;
  // Unverified params: inspect_element_at

  // Execute
  struct_->show_dev_tools(struct_,
      &windowInfo,
      CefClientCppToC::Wrap(client),
      &settings,
      &inspect_element_at);
}

void CefBrowserHostCToCpp::CloseDevTools() {
  if (CEF_MEMBER_MISSING(struct_, close_dev_tools))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->close_dev_tools(struct_);
}

void CefBrowserHostCToCpp::SetMouseCursorChangeDisabled(bool disabled) {
  if (CEF_MEMBER_MISSING(struct_, set_mouse_cursor_change_disabled))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_mouse_cursor_change_disabled(struct_,
      disabled);
}

bool CefBrowserHostCToCpp::IsMouseCursorChangeDisabled() {
  if (CEF_MEMBER_MISSING(struct_, is_mouse_cursor_change_disabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_mouse_cursor_change_disabled(struct_);

  // Return type: bool
  return _retval?true:false;
}

void CefBrowserHostCToCpp::ReplaceMisspelling(const CefString& word) {
  if (CEF_MEMBER_MISSING(struct_, replace_misspelling))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: word; type: string_byref_const
  DCHECK(!word.empty());
  if (word.empty())
    return;

  // Execute
  struct_->replace_misspelling(struct_,
      word.GetStruct());
}

bool CefBrowserHostCToCpp::IsWindowRenderingDisabled() {
  if (CEF_MEMBER_MISSING(struct_, is_window_rendering_disabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_window_rendering_disabled(struct_);

  // Return type: bool
  return _retval?true:false;
}

void CefBrowserHostCToCpp::WasResized() {
  if (CEF_MEMBER_MISSING(struct_, was_resized))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->was_resized(struct_);
}

void CefBrowserHostCToCpp::WasHidden(bool hidden) {
  if (CEF_MEMBER_MISSING(struct_, was_hidden))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->was_hidden(struct_,
      hidden);
}

void CefBrowserHostCToCpp::NotifyScreenInfoChanged() {
  if (CEF_MEMBER_MISSING(struct_, notify_screen_info_changed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->notify_screen_info_changed(struct_);
}

void CefBrowserHostCToCpp::Invalidate(PaintElementType type) {
  if (CEF_MEMBER_MISSING(struct_, invalidate))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->invalidate(struct_,
      type);
}

void CefBrowserHostCToCpp::SendKeyEvent(const CefKeyEvent& event) {
  if (CEF_MEMBER_MISSING(struct_, send_key_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->send_key_event(struct_,
      &event);
}

void CefBrowserHostCToCpp::SendMouseClickEvent(const CefMouseEvent& event,
    MouseButtonType type, bool mouseUp, int clickCount) {
  if (CEF_MEMBER_MISSING(struct_, send_mouse_click_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->send_mouse_click_event(struct_,
      &event,
      type,
      mouseUp,
      clickCount);
}

void CefBrowserHostCToCpp::SendMouseMoveEvent(const CefMouseEvent& event,
    bool mouseLeave) {
  if (CEF_MEMBER_MISSING(struct_, send_mouse_move_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->send_mouse_move_event(struct_,
      &event,
      mouseLeave);
}

void CefBrowserHostCToCpp::SendMouseWheelEvent(const CefMouseEvent& event,
    int deltaX, int deltaY) {
  if (CEF_MEMBER_MISSING(struct_, send_mouse_wheel_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->send_mouse_wheel_event(struct_,
      &event,
      deltaX,
      deltaY);
}

void CefBrowserHostCToCpp::SendFocusEvent(bool setFocus) {
  if (CEF_MEMBER_MISSING(struct_, send_focus_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->send_focus_event(struct_,
      setFocus);
}

void CefBrowserHostCToCpp::SendCaptureLostEvent() {
  if (CEF_MEMBER_MISSING(struct_, send_capture_lost_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->send_capture_lost_event(struct_);
}

CefTextInputContext CefBrowserHostCToCpp::GetNSTextInputContext() {
  if (CEF_MEMBER_MISSING(struct_, get_nstext_input_context))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_text_input_context_t _retval = struct_->get_nstext_input_context(struct_);

  // Return type: simple
  return _retval;
}

void CefBrowserHostCToCpp::HandleKeyEventBeforeTextInputClient(
    CefEventHandle keyEvent) {
  if (CEF_MEMBER_MISSING(struct_, handle_key_event_before_text_input_client))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->handle_key_event_before_text_input_client(struct_,
      keyEvent);
}

void CefBrowserHostCToCpp::HandleKeyEventAfterTextInputClient(
    CefEventHandle keyEvent) {
  if (CEF_MEMBER_MISSING(struct_, handle_key_event_after_text_input_client))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->handle_key_event_after_text_input_client(struct_,
      keyEvent);
}

void CefBrowserHostCToCpp::DragTargetDragEnter(CefRefPtr<CefDragData> drag_data,
    const CefMouseEvent& event, DragOperationsMask allowed_ops) {
  if (CEF_MEMBER_MISSING(struct_, drag_target_drag_enter))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: drag_data; type: refptr_same
  DCHECK(drag_data.get());
  if (!drag_data.get())
    return;

  // Execute
  struct_->drag_target_drag_enter(struct_,
      CefDragDataCToCpp::Unwrap(drag_data),
      &event,
      allowed_ops);
}

void CefBrowserHostCToCpp::DragTargetDragOver(const CefMouseEvent& event,
    DragOperationsMask allowed_ops) {
  if (CEF_MEMBER_MISSING(struct_, drag_target_drag_over))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->drag_target_drag_over(struct_,
      &event,
      allowed_ops);
}

void CefBrowserHostCToCpp::DragTargetDragLeave() {
  if (CEF_MEMBER_MISSING(struct_, drag_target_drag_leave))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->drag_target_drag_leave(struct_);
}

void CefBrowserHostCToCpp::DragTargetDrop(const CefMouseEvent& event) {
  if (CEF_MEMBER_MISSING(struct_, drag_target_drop))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->drag_target_drop(struct_,
      &event);
}

void CefBrowserHostCToCpp::DragSourceEndedAt(int x, int y,
    DragOperationsMask op) {
  if (CEF_MEMBER_MISSING(struct_, drag_source_ended_at))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->drag_source_ended_at(struct_,
      x,
      y,
      op);
}

void CefBrowserHostCToCpp::DragSourceSystemDragEnded() {
  if (CEF_MEMBER_MISSING(struct_, drag_source_system_drag_ended))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->drag_source_system_drag_ended(struct_);
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefBrowserHostCToCpp, CefBrowserHost,
    cef_browser_host_t>::DebugObjCt = 0;
#endif

