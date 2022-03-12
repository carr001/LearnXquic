/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/objectserr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA OBJ_str_functs[] = {
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_ADD_OBJECT, 0), "OBJ_add_object"},
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_ADD_SIGID, 0), "OBJ_add_sigid"},
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_CREATE, 0), "OBJ_create"},
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_DUP, 0), "OBJ_dup"},
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_NAME_NEW_INDEX, 0), "OBJ_NAME_new_index"},
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_NID2LN, 0), "OBJ_nid2ln"},
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_NID2OBJ, 0), "OBJ_nid2obj"},
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_NID2SN, 0), "OBJ_nid2sn"},
    {ERR_PACK(ERR_LIB_OBJ, OBJ_F_OBJ_TXT2OBJ, 0), "OBJ_txt2obj"},
    {0, NULL}
};

static const ERR_STRING_DATA OBJ_str_reasons[] = {
    {ERR_PACK(ERR_LIB_OBJ, 0, OBJ_R_OID_EXISTS), "oid exists"},
    {ERR_PACK(ERR_LIB_OBJ, 0, OBJ_R_UNKNOWN_NID), "unknown nid"},
    {0, NULL}
};

#endif

int ERR_load_OBJ_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(OBJ_str_functs[0].error) == NULL) {
        ERR_load_strings_const(OBJ_str_functs);
        ERR_load_strings_const(OBJ_str_reasons);
    }
#endif
    return 1;
}
