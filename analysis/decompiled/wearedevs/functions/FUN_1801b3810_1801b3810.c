/* FUN_1801b3810 @ 1801b3810 */

ulonglong * FUN_1801b3810(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong *local_48;
  
  if ((param_2 & 1) == 0) {
    FUN_1801b2e30();
  }
  else {
    local_60 = param_2 & 0xfffffffffffffffe;
    local_58 = (param_3 - local_60) + param_4;
    uVar2 = 0x3f;
    if (local_58 >> 10 != 0) {
      for (; (local_58 >> 10) >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    uVar3 = (uVar2 ^ 0xffffffffffffffc0) + 0x41;
    uVar2 = 7;
    if (uVar3 < 7) {
      uVar2 = uVar3;
    }
    puVar1 = (ulonglong *)((uVar2 & 0xffffffff) * 4 + 1);
    uVar2 = param_3 - local_60;
    local_50 = local_58;
    local_48 = puVar1;
    if (uVar2 != 0) {
      if (uVar2 >> 0x3b == 0) {
        local_48 = puVar1 + uVar2 * 4;
      }
      else {
        FUN_180027490();
        local_48 = (ulonglong *)thunk_FUN_1801d32d0(0x28,8);
        if (local_48 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x28);
        }
        *local_48 = local_58;
        local_48[1] = local_60;
        local_48[2] = local_58;
        local_48[3] = (ulonglong)((uint)((ulonglong)puVar1 >> 2) & 7);
        local_48[4] = 1;
      }
      local_60 = local_60 + uVar2;
      bVar4 = uVar2 <= local_58;
      uVar2 = local_58 - uVar2;
      local_58 = 0;
      if (bVar4) {
        local_58 = uVar2;
      }
      local_50 = param_4;
    }
    param_1[2] = local_50;
    param_1[3] = (ulonglong)local_48;
    *param_1 = local_60;
    param_1[1] = local_58;
  }
  return param_1;
}


