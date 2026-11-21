/* FUN_1801ee5a0 @ 1801ee5a0 */

void FUN_1801ee5a0(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_e [2];
  undefined2 local_c;
  undefined2 local_a;
  
  uVar1 = *param_1;
  uVar4 = (uint)uVar1;
  if (uVar1 < 1000) {
    lVar3 = 5;
    if (uVar1 < 10) goto LAB_1801ee654;
    uVar2 = (uVar1 >> 2) / 0x19;
    lVar3 = 3;
  }
  else {
    uVar2 = (uVar1 >> 4) / 0x271;
    uVar4 = uVar4 + uVar2 * -10000;
    local_c = *(undefined2 *)(&DAT_180293549 + ((uVar4 & 0xffff) * 0x147b >> 0x12 & 0x1fe));
    lVar3 = 1;
  }
  local_a = *(undefined2 *)
             (&DAT_180293549 + (ulonglong)(uVar4 + ((uVar4 & 0xffff) / 100) * -100 & 0xffff) * 2);
  uVar4 = uVar2;
LAB_1801ee654:
  if (uVar1 == 0 || (short)uVar4 != 0) {
    auStack_e[lVar3] = (&DAT_18029354a)[(ulonglong)(uVar4 & 0xf) * 2];
    lVar3 = lVar3 + -1;
  }
  FUN_1801efa20(param_2,1,1,0,auStack_e + lVar3 + 1,5 - lVar3);
  return;
}


