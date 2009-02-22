/*
 * vim:ts=8:expandtab
 *
 * i3 - an improved dynamic tiling window manager
 *
 * (c) 2009 Michael Stapelberg and contributors
 *
 * See file LICENSE for license information.
 *
 */
#ifndef _XCB_H
#define _XCB_H

#define _NET_WM_STATE_REMOVE 0
#define _NET_WM_STATE_ADD 1
#define _NET_WM_STATE_TOGGLE 2

enum { _NET_SUPPORTED = 0,
        _NET_SUPPORTING_WM_CHECK,
        _NET_WM_NAME,
        _NET_WM_STATE_FULLSCREEN,
        _NET_WM_STATE,
        _NET_WM_WINDOW_TYPE,
        _NET_WM_WINDOW_TYPE_DOCK,
        _NET_WM_DESKTOP,
        _NET_WM_STRUT_PARTIAL,
        UTF8_STRING
};

uint32_t get_colorpixel(xcb_connection_t *conn, xcb_window_t window, char *hex);
xcb_window_t create_window(xcb_connection_t *conn, Rect r, uint16_t window_class, uint32_t mask, uint32_t *values);

#endif
