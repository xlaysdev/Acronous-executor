/* FUN_1801bf840 @ 1801bf840 */

ulonglong * FUN_1801bf840(ulonglong *param_1,PSID param_2)

{
  code *pcVar1;
  BOOL BVar2;
  DWORD nDestinationSidLength;
  char *pDestinationSid;
  undefined4 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  char *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((param_2 == (PSID)0x0) || (BVar2 = IsValidSid(param_2), BVar2 == 0)) {
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  nDestinationSidLength = GetLengthSid(param_2);
  uVar5 = (ulonglong)nDestinationSidLength;
  local_48 = uVar5;
  if (nDestinationSidLength == 0) {
    pDestinationSid = (char *)0x1;
    uVar3 = 1;
    BVar2 = CopySid(0,(PSID)0x1,param_2);
    if (BVar2 != 0) {
      local_40 = (char *)0x1;
      local_48 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(0,0,&PTR_s_C__Users_burne__cargo_registry_s_180286ed0);
    }
  }
  else {
    FUN_180027490();
    pDestinationSid = (char *)thunk_FUN_1801d3550(uVar5,1);
    if (pDestinationSid == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,uVar5);
    }
    pcVar4 = pDestinationSid;
    BVar2 = CopySid(nDestinationSidLength,pDestinationSid,param_2);
    uVar3 = SUB84(pcVar4,0);
    if (BVar2 != 0) {
      if (*pDestinationSid != '\x01') {
        local_40 = pDestinationSid;
        FUN_1801fcf74(0,pDestinationSid,&DAT_180286ee8,"Expected SID revision to be 1",0x3b,
                      &PTR_s_C__Users_burne__cargo_registry_s_180286f08);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *param_1 = uVar5;
      param_1[1] = (ulonglong)pDestinationSid;
      param_1[2] = uVar5;
      return param_1;
    }
  }
  local_40 = pDestinationSid;
  local_58 = FUN_1801c9650();
  local_50 = uVar3;
  if (local_58 != 0) {
    local_48 = uVar5;
    local_40 = pDestinationSid;
    FUN_180111960(&local_58);
  }
  *param_1 = 0x8000000000000000;
  if (nDestinationSidLength == 0) {
    return param_1;
  }
  thunk_FUN_1801d3330(pDestinationSid,uVar5,1);
  return param_1;
}


