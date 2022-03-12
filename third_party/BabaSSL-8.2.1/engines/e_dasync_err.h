/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_DASYNCERR_H
# define HEADER_DASYNCERR_H

# include <openssl/symhacks.h>

# define DASYNCerr(f, r) ERR_DASYNC_error((f), (r), OPENSSL_FILE, OPENSSL_LINE)


/*
 * DASYNC function codes.
 */
# define DASYNC_F_BIND_DASYNC                             107
# define DASYNC_F_CIPHER_AES_128_CBC_CODE                 100
# define DASYNC_F_DASYNC_AES128_CBC_HMAC_SHA1_INIT_KEY    109
# define DASYNC_F_DASYNC_AES128_INIT_KEY                  108
# define DASYNC_F_DASYNC_BN_MOD_EXP                       101
# define DASYNC_F_DASYNC_CIPHER_INIT_KEY_HELPER           110
# define DASYNC_F_DASYNC_MOD_EXP                          102
# define DASYNC_F_DASYNC_PRIVATE_DECRYPT                  103
# define DASYNC_F_DASYNC_PRIVATE_ENCRYPT                  104
# define DASYNC_F_DASYNC_PUBLIC_DECRYPT                   105
# define DASYNC_F_DASYNC_PUBLIC_ENCRYPT                   106

/*
 * DASYNC reason codes.
 */
# define DASYNC_R_INIT_FAILED                             100

#endif
