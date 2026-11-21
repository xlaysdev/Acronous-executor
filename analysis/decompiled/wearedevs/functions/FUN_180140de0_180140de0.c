/* FUN_180140de0 @ 180140de0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_180140de0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte *local_8;
  
  cVar1 = '\n';
  if (0xb < *param_1) {
    cVar1 = *param_1 - 0xc;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\0':
    FUN_1801f0c50(param_2,"BadFrameSize",0xc);
    return;
  case '\x01':
    FUN_1801f0c50(param_2,"TooMuchPadding",0xe);
    return;
  case '\x02':
    FUN_1801f0c50(param_2,"InvalidSettingValue",0x13);
    return;
  case '\x03':
    FUN_1801f0c50(param_2,"InvalidWindowUpdateValue",0x18);
    return;
  case '\x04':
    FUN_1801f0c50(param_2,"InvalidPayloadLength",0x14);
    return;
  case '\x05':
    FUN_1801f0c50(param_2,"InvalidPayloadAckSettings",0x19);
    return;
  case '\x06':
    FUN_1801f0c50(param_2,"InvalidStreamId",0xf);
    return;
  case '\a':
    FUN_1801f0c50(param_2,"MalformedMessage",0x10);
    return;
  case '\b':
    FUN_1801f0c50(param_2,"HeaderListWayTooLarge",0x15);
    return;
  case '\t':
    FUN_1801f0c50(param_2,"InvalidDependencyId",0x13);
    return;
  case '\n':
    local_8 = param_1;
    FUN_1801eff20(param_2,&DAT_180251dc0,5,&local_8,&DAT_180251da0);
    return;
  case '\v':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


