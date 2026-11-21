/* FUN_1801ee480 @ 1801ee480 */

void FUN_1801ee480(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_c [2];
  undefined2 local_a;
  
  bVar1 = *param_1;
  lVar2 = 3;
  bVar3 = bVar1;
  if (9 < bVar1) {
    bVar3 = (byte)((uint)bVar1 + (uint)bVar1 * 0x28 >> 0xc);
    local_a = *(undefined2 *)(&DAT_180293549 + (ulonglong)(byte)(bVar1 + bVar3 * -100) * 2);
    lVar2 = 1;
  }
  if (bVar1 == 0 || bVar3 != 0) {
    auStack_c[lVar2] = (&DAT_18029354a)[(ulonglong)bVar3 * 2];
    lVar2 = lVar2 + -1;
  }
  FUN_1801efa20(param_2,1,1,0,auStack_c + lVar2 + 1,3 - lVar2);
  return;
}


