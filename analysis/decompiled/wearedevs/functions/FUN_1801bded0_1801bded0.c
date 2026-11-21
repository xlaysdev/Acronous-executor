/* FUN_1801bded0 @ 1801bded0 */

longlong * FUN_1801bded0(longlong *param_1,HANDLE param_2,LPCVOID param_3,ulonglong param_4)

{
  BOOL BVar1;
  char *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong local_70;
  undefined4 local_68;
  SIZE_T local_60;
  LPVOID local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar6 = param_4 >> 1;
  lVar5 = uVar6 + 1;
  uVar4 = uVar6 * 2 + 2;
  if (uVar4 < 0x7fffffffffffffff && -1 < lVar5) {
    local_50 = uVar4;
    FUN_180027490();
    uVar7 = 2;
    local_58 = (LPVOID)thunk_FUN_1801d32d0(local_50,2);
    uVar4 = local_50;
    if (local_58 != (LPVOID)0x0) {
      local_60 = 0;
      BVar1 = ReadProcessMemory(param_2,param_3,local_58,param_4,&local_60);
      uVar3 = SUB84(param_3,0);
      if (BVar1 == 0) {
        local_70 = FUN_1801c9650();
        local_68 = uVar3;
        if (local_70 != 0) {
          FUN_180111960(&local_70);
        }
        lVar5 = 0x1b;
        pcVar2 = "Unable to read process data";
      }
      else {
        if (local_60 == param_4) {
          *(undefined2 *)((longlong)local_58 + uVar6 * 2) = 0;
          *param_1 = lVar5;
          param_1[1] = (longlong)local_58;
          param_1[2] = lVar5;
          return param_1;
        }
        lVar5 = 0x3a;
        pcVar2 = "ReadProcessMemory returned unexpected number of bytes read";
      }
      param_1[1] = (longlong)pcVar2;
      param_1[2] = lVar5;
      *param_1 = -0x8000000000000000;
      thunk_FUN_1801d3330(local_58,local_50,2);
      return param_1;
    }
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar7,uVar4);
}


