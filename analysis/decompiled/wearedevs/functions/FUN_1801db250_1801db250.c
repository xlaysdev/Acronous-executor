/* FUN_1801db250 @ 1801db250 */

undefined8
FUN_1801db250(HANDLE param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
             undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  undefined8 local_30;
  int local_28 [5];
  undefined1 local_14;
  
  puVar4 = &local_38;
  local_38 = param_5;
  local_28[0] = 0x103;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  uVar3 = 0xffffffff;
  if (param_3 < 0xffffffff) {
    uVar3 = param_3;
  }
  if ((param_4 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  iVar2 = NtReadFile(param_1,0,0,0,local_28,param_2,(int)uVar3,puVar4,0,param_4);
  if (iVar2 == 0x103) {
    WaitForSingleObject(param_1,0xffffffff);
    iVar2 = local_28[0];
  }
  if (iVar2 != -0x3fffffef) {
    if (iVar2 == 0x103) {
      local_28[4] = 0;
      local_14 = 0;
      local_30 = FUN_1801d62f0(local_28 + 4,
                               "fatal runtime error: I/O error: operation failed to complete synchronously, aborting\nstrings passed to WinAPI cannot contain NULs"
                               ,0xab);
      FUN_1801e2b90(&local_30);
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (iVar2 < 0) {
      RtlNtStatusToDosError(iVar2);
      return 1;
    }
  }
  return 0;
}


