/* Microsoft Reference Implementation for TPM 2.0
 *
 *  The copyright in this software is being made available under the BSD License,
 *  included below. This software may be subject to other third party and
 *  contributor rights, including patent rights, and no such rights are granted
 *  under this license.
 *
 *  Copyright (c) Microsoft Corporation
 *
 *  All rights reserved.
 *
 *  BSD License
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *
 *  Redistributions of source code must retain the above copyright notice, this list
 *  of conditions and the following disclaimer.
 *
 *  Redistributions in binary form must reproduce the above copyright notice, this
 *  list of conditions and the following disclaimer in the documentation and/or other
 *  materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ""AS IS""
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*(Auto)

    Created by TpmStructures Version 2.6 March 8, 2016
    This file created on Sep  9, 2016, 01:03:55PM 

*/

#ifdef TPM_CC_MakeCredential // Command must be defined
#ifndef _MakeCredential_H
#define _MakeCredential_H

// Input structure definition
typedef struct {
    TPMI_DH_OBJECT            handle;
    TPM2B_DIGEST              credential;
    TPM2B_NAME                objectName;
} MakeCredential_In;

// Output structure definition
typedef struct {
    TPM2B_ID_OBJECT           credentialBlob;
    TPM2B_ENCRYPTED_SECRET    secret;
} MakeCredential_Out;

// Response code modifiers
#define    RC_MakeCredential_handle        (TPM_RC_H + TPM_RC_1)
#define    RC_MakeCredential_credential    (TPM_RC_P + TPM_RC_1)
#define    RC_MakeCredential_objectName    (TPM_RC_P + TPM_RC_2)

// Function prototype
TPM_RC
TPM2_MakeCredential(
    MakeCredential_In *in,
    MakeCredential_Out *out
);


#endif  // _MakeCredential_H
#endif  // TPM_CC_MakeCredential
