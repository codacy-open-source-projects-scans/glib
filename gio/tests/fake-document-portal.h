/*
 * Copyright 2024 GNOME Foundation
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __FAKE_DOCUMENT_PORTAL_H__
#define __FAKE_DOCUMENT_PORTAL_H__

#include <glib.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define G_TYPE_FAKE_DOCUMENT_PORTAL_THREAD (g_fake_document_portal_thread_get_type ())
G_DECLARE_FINAL_TYPE (GFakeDocumentPortalThread, g_fake_document_portal_thread, G, FAKE_DOCUMENT_PORTAL_THREAD, GObject)

GFakeDocumentPortalThread *g_fake_document_portal_thread_new (const char *address);
void g_fake_document_portal_thread_run (GFakeDocumentPortalThread *self);
void g_fake_document_portal_thread_stop (GFakeDocumentPortalThread *self);

G_END_DECLS

#endif /* __FAKE_DOCUMENT_PORTAL_H__ */
