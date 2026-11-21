/* FUN_1801366d0 @ 1801366d0 */

void FUN_1801366d0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte *local_8;
  
  cVar1 = '\t';
  if (2 < *param_1) {
    cVar1 = *param_1 - 3;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\0':
    FUN_1801f0c50(param_2,"InvalidRepresentation",0x15);
    return;
  case '\x01':
    FUN_1801f0c50(param_2,"InvalidIntegerPrefix",0x14);
    return;
  case '\x02':
    FUN_1801f0c50(param_2,"InvalidTableIndex",0x11);
    return;
  case '\x03':
    FUN_1801f0c50(param_2,"InvalidHuffmanCode",0x12);
    return;
  case '\x04':
    FUN_1801f0c50(param_2,"InvalidUtf8",0xb);
    return;
  case '\x05':
    FUN_1801f0c50(param_2,"InvalidStatusCode",0x11);
    return;
  case '\x06':
    FUN_1801f0c50(param_2,"InvalidPseudoheader",0x13);
    return;
  case '\a':
    FUN_1801f0c50(param_2,"InvalidMaxDynamicSize",0x15);
    return;
  case '\b':
    FUN_1801f0c50(param_2,"IntegerOverflow",0xf);
    return;
  case '\t':
    local_8 = param_1;
    FUN_1801eff20(param_2,"NeedMoreParseU64Error",8,&local_8,&DAT_18024b9f8);
    return;
  }
}


