/* FUN_1801c43e0 @ 1801c43e0 */

void FUN_1801c43e0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[0x10];
  FUN_1801c6f60();
  LOCK();
  UNLOCK();
  do {
    uVar3 = param_1[0x2e];
    if ((uVar3 >> 0x20 & 1) != 0) {
      uVar4 = uVar3;
      if ((uVar3 & 0xffff) == 0) {
        return;
      }
      goto LAB_1801c444a;
    }
    LOCK();
    bVar5 = uVar3 == param_1[0x2e];
    if (bVar5) {
      param_1[0x2e] = uVar3 | 0x100000000;
    }
    UNLOCK();
  } while (!bVar5);
  uVar4 = uVar3 | 0x100000000;
  if ((uVar3 & 0xffff) != 0) {
LAB_1801c444a:
    if ((1 < (uVar2 ^ uVar1)) || (((uint)(uVar4 >> 0x10) & 0xffff) == ((uint)uVar3 & 0xffff))) {
      FUN_1801fdf00(param_1 + 0x2b,1);
      return;
    }
  }
  return;
}


