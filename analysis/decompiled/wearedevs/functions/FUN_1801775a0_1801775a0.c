/* FUN_1801775a0 @ 1801775a0 */

ulonglong FUN_1801775a0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    if ((uVar2 & 4) != 0) {
      return uVar2;
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar2 | 2;
      uVar3 = uVar2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return uVar2;
}


