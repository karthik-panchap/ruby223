/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _SMX_H_
#define _SMX_H_

#include <_mingw_unicode.h>

#define MENU_TEXT_LEN 50

#define SME_VERSION 0

#define SM_GETSELCOUNT (WM_USER + 1000)
#define SM_GETSERVERSELA (WM_USER + 1001)
#define SM_GETSERVERSELW (WM_USER + 1002)
#define SM_GETCURFOCUSA (WM_USER + 1003)
#define SM_GETCURFOCUSW (WM_USER + 1004)
#define SM_GETOPTIONS (WM_USER + 1005)

#define SM_GETSERVERSEL __MINGW_NAME_AW(SM_GETSERVERSEL)
#define SM_GETCURFOCUS __MINGW_NAME_AW(SM_GETCURFOCUS)

typedef struct _SMS_LOADMENUA {
  DWORD dwVersion;
  CHAR szMenuName[MENU_TEXT_LEN + 1];
  HMENU hMenu;
  CHAR szHelpFileName[MAX_PATH];
  DWORD dwServerType;
  DWORD dwMenuDelta;
} SMS_LOADMENUA,*PSMS_LOADMENUA;

typedef struct _SMS_LOADMENUW {
  DWORD dwVersion;
  WCHAR szMenuName[MENU_TEXT_LEN + 1];
  HMENU hMenu;
  WCHAR szHelpFileName[MAX_PATH];
  DWORD dwServerType;
  DWORD dwMenuDelta;
} SMS_LOADMENUW,*PSMS_LOADMENUW;

#define SMS_LOADMENU __MINGW_NAME_AW(SMS_LOADMENU)
#define PSMS_LOADMENU __MINGW_NAME_AW(PSMS_LOADMENU)

typedef struct _SMS_GETSERVERSELA {
  CHAR szServerName[MAX_PATH];
  DWORD dwServerType;
} SMS_GETSERVERSELA,*PSMS_GETSERVERSELA;

typedef struct _SMS_GETSERVERSELW {
  WCHAR szServerName[MAX_PATH];
  DWORD dwServerType;

} SMS_GETSERVERSELW,*PSMS_GETSERVERSELW;

#define SMS_GETSERVERSEL __MINGW_NAME_AW(SMS_GETSERVERSEL)
#define PSMS_GETSERVERSEL __MINGW_NAME_AW(PSMS_GETSERVERSEL)

typedef struct _SMS_GETSELCOUNT {
  DWORD dwItems;
} SMS_GETSELCOUNT,*PSMS_GETSELCOUNT;

#define SM_FOCUS_TYPE_NT_DOMAIN 1
#define SM_FOCUS_TYPE_LM_DOMAIN 2
#define SM_FOCUS_TYPE_UNKNOWN_DOMAIN 3
#define SM_FOCUS_TYPE_NT_SERVER 4
#define SM_FOCUS_TYPE_LM_SERVER 5
#define SM_FOCUS_TYPE_WFW_SERVER 6
#define SM_FOCUS_TYPE_UNKNOWN_SERVER 7

typedef struct _SMS_GETCURFOCUSA {
  CHAR szFocus[MAX_PATH];
  DWORD dwFocusType;
} SMS_GETCURFOCUSA,*PSMS_GETCURFOCUSA;

typedef struct _SMS_GETCURFOCUSW {
  WCHAR szFocus[MAX_PATH];
  DWORD dwFocusType;
} SMS_GETCURFOCUSW,*PSMS_GETCURFOCUSW;

#define SMS_GETCURFOCUS __MINGW_NAME_AW(SMS_GETCURFOCUS)
#define PSMS_GETCURFOCUS __MINGW_NAME_AW(PSMS_GETCURFOCUS)

typedef struct _SMS_GETOPTIONS {
  WINBOOL fSaveSettingsOnExit;
  WINBOOL fConfirmation;
} SMS_GETOPTIONS,*PSMS_GETOPTIONS;

typedef struct _SMS_VALIDATEA {
  const CHAR *pszServer;
  CHAR *pszType;
  CHAR *pszComment;
} SMS_VALIDATEA,*PSMS_VALIDATEA;

typedef struct _SMS_VALIDATEW {
  const WCHAR *pszServer;
  WCHAR *pszType;
  WCHAR *pszComment;

} SMS_VALIDATEW,*PSMS_VALIDATEW;

#define SMS_VALIDATE __MINGW_NAME_AW(SMS_VALIDATE)
#define PSMS_VALIDATE __MINGW_NAME_AW(PSMS_VALIDATE)

#define SZ_SME_UNLOADMENU "SMEUnloadMenu"
#define SZ_SME_INITIALIZEMENU "SMEInitializeMenu"
#define SZ_SME_REFRESH "SMERefresh"
#define SZ_SME_MENUACTION "SMEMenuAction"
#define SZ_SME_LOADMENUW "SMELoadMenuW"
#define SZ_SME_GETEXTENDEDERRORSTRINGW "SMEGetExtendedErrorStringW"
#define SZ_SME_VALIDATEW "SMEValidateW"
#define SZ_SME_LOADMENUA "SMELoadMenuA"
#define SZ_SME_GETEXTENDEDERRORSTRINGA "SMEGetExtendedErrorStringA"
#define SZ_SME_VALIDATEA "SMEValidateA"

#define SZ_SME_LOADMENU __MINGW_NAME_AW(SZ_SME_LOADMENU)
#define SZ_SME_GETEXTENDEDERRORSTRING __MINGW_NAME_AW(SZ_SME_GETEXTENDEDERRORSTRING)
#define SZ_SME_VALIDATE __MINGW_NAME_AW(SZ_SME_VALIDATE)

typedef DWORD (WINAPI *PSMX_LOADMENU)(HWND hWnd,PSMS_LOADMENU psmsload);
typedef LPTSTR (WINAPI *PSMX_GETEXTENDEDERRORSTRING)(VOID);
typedef VOID (WINAPI *PSMX_UNLOADMENU)(VOID);
typedef VOID (WINAPI *PSMX_INITIALIZEMENU)(VOID);
typedef VOID (WINAPI *PSMX_REFRESH)(HWND hwndParent);
typedef VOID (WINAPI *PSMX_MENUACTION)(HWND hwndParent,DWORD dwEventId);
typedef WINBOOL (WINAPI *PSMX_VALIDATE)(PSMS_VALIDATE psmsvalidate);

DWORD WINAPI SMELoadMenuA(HWND hWnd,PSMS_LOADMENUA psmsload);
DWORD WINAPI SMELoadMenuW(HWND hWnd,PSMS_LOADMENUW psmsload);
LPSTR WINAPI SMEGetExtendedErrorStringA(VOID);
LPWSTR WINAPI SMEGetExtendedErrorStringW(VOID);
VOID WINAPI SMEUnloadMenu(VOID);
VOID WINAPI SMEInitializeMenu(VOID);
VOID WINAPI SMERefresh(HWND hwndParent);
VOID WINAPI SMEMenuAction(HWND hwndParent,DWORD dwEventId);
WINBOOL WINAPI SMEValidateA(PSMS_VALIDATEA psmsValidate);
WINBOOL WINAPI SMEValidateW(PSMS_VALIDATEW psmsValidate);

#endif
