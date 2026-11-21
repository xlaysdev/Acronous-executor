/* FUN_1801ff650 @ 1801ff650 */

void FUN_1801ff650(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < (ulonglong)param_1[1]) {
    do {
      uVar2 = uVar2 + 1;
      bVar1 = *(byte *)(*param_1 + -1 + uVar2);
      if (bVar1 == 0x22) {
        return;
      }
      if (bVar1 == 0x5c) {
        return;
      }
      if (bVar1 < 0x20) {
        return;
      }
      param_1[2] = uVar2;
    } while (uVar2 != param_1[1]);
  }
  return;
}


