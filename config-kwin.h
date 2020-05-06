#define KWIN_BUILD_DECORATIONS 1
#define KWIN_BUILD_TABBOX 1
#define KWIN_BUILD_ACTIVITIES 1
#define KWIN_NAME "kwin"
#define KWIN_INTERNAL_NAME_X11 "kwin_x11"
#define KWIN_CONFIG "kwinrc"
#define KWIN_VERSION_STRING "5.15.5"
#define XCB_VERSION_STRING "1.13.1"
#define KWIN_KILLER_BIN "/usr/local/lib/x86_64-linux-gnu/libexec/kwin_killer_helper"
#define KWIN_RULES_DIALOG_BIN "/usr/local/lib/x86_64-linux-gnu/libexec/kwin_rules_dialog"
#define KWIN_XCLIPBOARD_SYNC_BIN "/usr/local/lib/x86_64-linux-gnu/libexec/org_kde_kwin_xclipboard_syncer"
#define HAVE_X11_XCB 1
#define HAVE_X11_XINPUT 1
#define HAVE_DRM 1
#define HAVE_GBM 1
#define HAVE_LIBHYBRIS 0
#define HAVE_WAYLAND_EGL 1
#define HAVE_SYS_PRCTL_H 1
#define HAVE_PR_SET_DUMPABLE 1
#define HAVE_PR_SET_PDEATHSIG 1
#define HAVE_SYS_PROCCTL_H 0
#define HAVE_PROC_TRACE_CTL 0
#define HAVE_SYS_SYSMACROS_H 1
#define HAVE_BREEZE_DECO 1
#define HAVE_LIBCAP 1
#define HAVE_SCHED_RESET_ON_FORK 1
#if HAVE_BREEZE_DECO
#define BREEZE_KDECORATION_PLUGIN_ID "org.kde.breeze"
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

#define XCB_ICCCM_FOUND 1
#ifndef XCB_ICCCM_FOUND
#define XCB_ICCCM_WM_STATE_WITHDRAWN 0
#define XCB_ICCCM_WM_STATE_NORMAL 1
#define XCB_ICCCM_WM_STATE_ICONIC 3
#endif
