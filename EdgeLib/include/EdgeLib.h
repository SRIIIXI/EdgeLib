﻿/*
BSD 2-Clause License

Copyright (c) 2017, Subrato Roy (subratoroy@hotmail.com)
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef EDGE_LIB
#define EDGE_LIB

#include<stdint.h>
#include<stdbool.h>

#include "Base64.h"
#include "Buffer.h"
#include "Directory.h"
#include "Dictionary.h"
#include "File.h"
#include "KeyValue.h"
#include "List.h"
#include "Logger.h"
#include "Queue.h"
#include "Stack.h"
#include "StringEx.h"
#include "Configuration.h"
#include "Environment.h"

#ifdef __cplusplus
extern "C" {
#endif

// Shared libary load/unload handlers

#if defined (_WIN32) || defined (_WIN64)
#include <WinSock2.h>
#include <Windows.h>
	BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);
	void library_load(void);
	void library_unload(void);
#else
	void __attribute__((constructor)) library_load(void);
	void __attribute__((destructor)) library_unload(void);
#endif

#ifdef __cplusplus
}
#endif

#endif
