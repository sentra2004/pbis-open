/* Editor Settings: expandtabs and use 4 spaces for indentation
 * ex: set softtabstop=4 tabstop=8 expandtab shiftwidth=4: *
 * -*- mode: c, c-basic-offset: 4 -*- */

/*
 * Copyright Likewise Software    2004-2008
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.  You should have received a copy of the GNU General
 * Public License along with this program.  If not, see 
 * <http://www.gnu.org/licenses/>.
 *
 * LIKEWISE SOFTWARE MAKES THIS SOFTWARE AVAILABLE UNDER OTHER LICENSING
 * TERMS AS WELL.  IF YOU HAVE ENTERED INTO A SEPARATE LICENSE AGREEMENT
 * WITH LIKEWISE SOFTWARE, THEN YOU MAY ELECT TO USE THE SOFTWARE UNDER THE
 * TERMS OF THAT SOFTWARE LICENSE AGREEMENT INSTEAD OF THE TERMS OF THE GNU
 * GENERAL PUBLIC LICENSE, NOTWITHSTANDING THE ABOVE NOTICE.  IF YOU
 * HAVE QUESTIONS, OR WISH TO REQUEST A COPY OF THE ALTERNATE LICENSING
 * TERMS OFFERED BY LIKEWISE SOFTWARE, PLEASE CONTACT LIKEWISE SOFTWARE AT
 * license@likewisesoftware.com
 */

/*
 * Copyright (C) Likewise Software. All rights reserved.
 *
 * Module Name:
 *
 *        main.c
 *
 * Abstract:
 *
 *        Likewise Site Manager
 * 
 *        External Variables
 *
 * Authors: Krishna Ganugapati (krishnag@likewisesoftware.com)
 *          Sriram Nambakam (snambakam@likewisesoftware.com)
 * 
 */
#ifndef __EXTERNS_P_H__
#define __EXTERNS_P_H__

extern LWNETSERVERINFO  gLwnetServerInfo;
extern PLWNETSERVERINFO gpLwnetServerInfo;

#define DAEMON_NAME "netlogond"
#define PID_DIR     "/var/run"
#define PID_FILE    PID_DIR "/" DAEMON_NAME ".pid"

#define PID_FILE_CONTENTS_SIZE ((9 * 2) + 2)

#define LWNET_LOCK_SERVERINFO(bInLock)               \
        if (!bInLock) {                               \
           pthread_mutex_lock(&gpLwnetServerInfo->lock);   \
           bInLock = TRUE;                            \
        }

#define LWNET_UNLOCK_SERVERINFO(bInLock)             \
        if (bInLock) {                                \
           pthread_mutex_unlock(&gpLwnetServerInfo->lock); \
           bInLock = FALSE;                           \
        }

#endif /* __EXTERNS_P_H__ */

