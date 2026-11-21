/* FUN_1801e7239 @ 1801e7239 */

ulonglong FUN_1801e7239(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar2 = param_1[2];
  if (uVar2 < (ulonglong)param_1[1]) {
    bVar1 = *(byte *)(*param_1 + uVar2);
    param_1[2] = uVar2 + 1;
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      uVar3 = (ulonglong)bVar1 << 0x20;
      uVar2 = 0;
    }
    else {
      bVar4 = (byte)(bVar1 + 0x85) < 0xe6;
      uVar2 = (ulonglong)bVar4;
      uVar3 = 0x11000000000000;
      if (bVar4) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar2 = 1;
    uVar3 = 0;
  }
  return uVar2 | uVar3;
}


