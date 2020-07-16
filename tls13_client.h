/**
 * @file tls13_client.h
 * @brief Handshake message processing (TLS 1.3 client)
 *
 * @section License
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Copyright (C) 2010-2020 Oryx Embedded SARL. All rights reserved.
 *
 * This file is part of CycloneSSL Open.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @author Oryx Embedded SARL (www.oryx-embedded.com)
 * @version 1.9.8
 **/

#ifndef _TLS13_CLIENT_H
#define _TLS13_CLIENT_H

//Dependencies
#include "tls.h"

//C++ guard
#ifdef __cplusplus
extern "C" {
#endif

//TLS 1.3 client specific functions
error_t tls13SendEndOfEarlyData(TlsContext *context);

error_t tls13FormatEndOfEarlyData(TlsContext *context,
   Tls13EndOfEarlyData *message, size_t *length);

error_t tls13ParseHelloRetryRequest(TlsContext *context,
   const Tls13HelloRetryRequest *message, size_t length);

error_t tls13ParseEncryptedExtensions(TlsContext *context,
   const Tls13EncryptedExtensions *message, size_t length);

error_t tls13ParseNewSessionTicket(TlsContext *context,
   const Tls13NewSessionTicket *message, size_t length);

//C++ guard
#ifdef __cplusplus
}
#endif

#endif
