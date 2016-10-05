//-----------------------------------------------------------------------------
// Copyright (C) 2010 iZsh <izsh at fail0verflow.com>
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// High frequency Legic commands
//-----------------------------------------------------------------------------

#ifndef CMDHFLEGIC_H__
#define CMDHFLEGIC_H__

#include <stdio.h>
#include <string.h>
#include "proxmark3.h"
#include "data.h"
#include "ui.h"
#include "cmdparser.h"
#include "cmdmain.h"
#include "util.h"
#include "crc.h"
#include "legic_prng.h"
#include "legic.h" // legic_card_select_t struct

int CmdHFLegic(const char *Cmd);
int CmdLegicInfo(const char *Cmd);

int CmdLegicRFRead(const char *Cmd);
int CmdLegicLoad(const char *Cmd);
int CmdLegicSave(const char *Cmd);
int CmdLegicRfSim(const char *Cmd);
int CmdLegicRfWrite(const char *Cmd);
int CmdLegicRfRawWrite(const char *Cmd);
int CmdLegicRfFill(const char *Cmd);

int CmdLegicCalcCrc8(const char *Cmd);

int CmdLegicReader(const char *Cmd);
int HFLegicReader(const char *Cmd, bool verbose);

int CmdLegicDump(const char *Cmd);


int usage_legic_calccrc8(void);
int usage_legic_load(void);
int usage_legic_read(void);
int usage_legic_sim(void);
int usage_legic_write(void);
int usage_legic_rawwrite(void);
int usage_legic_fill(void);
int usage_legic_reader(void);
int usage_legic_info(void);
int usage_legic_dump(void);
#endif
