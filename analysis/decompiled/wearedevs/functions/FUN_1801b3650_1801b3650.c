/* FUN_1801b3650 @ 1801b3650 */

ulonglong * FUN_1801b3650(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

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
    FUN_1801b2e30(param_1);
  }
  else {
    local_58 = (param_3 - param_2) + param_4;
    uVar3 = 0x3f;
    if (local_58 >> 10 != 0) {
      for (; (local_58 >> 10) >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar2 = (uVar3 ^ 0xffffffffffffffc0) + 0x41;
    uVar3 = 7;
    if (uVar2 < 7) {
      uVar3 = uVar2;
    }
    puVar1 = (ulonglong *)((uVar3 & 0xffffffff) * 4 + 1);
    uVar3 = param_3 - param_2;
    local_60 = param_2;
    local_50 = local_58;
    local_48 = puVar1;
    if (uVar3 != 0) {
      if (uVar3 >> 0x3b == 0) {
        local_48 = puVar1 + uVar3 * 4;
      }
      else {
        FUN_180027490();
        local_48 = (ulonglong *)thunk_FUN_1801d32d0(0x28,8);
        if (local_48 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x28);
        }
        *local_48 = local_58;
        local_48[1] = param_2;
        local_48[2] = local_58;
        local_48[3] = (ulonglong)((uint)((ulonglong)puVar1 >> 2) & 7);
        local_48[4] = 1;
      }
      local_60 = param_2 + uVar3;
      bVar4 = uVar3 <= local_58;
      uVar3 = local_58 - uVar3;
      local_58 = 0;
      if (bVar4) {
        local_58 = uVar3;
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


