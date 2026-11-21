/* FUN_180164f00 @ 180164f00 */

void FUN_180164f00(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_18;
  int local_10;
  
  local_10 = (int)param_1[4];
  if (local_10 != 1000000000) {
    uVar4 = param_1[3];
    local_18 = uVar4;
    uVar3 = FUN_1801df960(&local_18);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4 & 0xffffffff;
    auVar2 = auVar1 * ZEXT816(1000000000) + auVar2;
    *param_1 = *param_1 + (-(ulonglong)(auVar2._8_8_ != 0) | auVar2._0_8_);
  }
  return;
}


