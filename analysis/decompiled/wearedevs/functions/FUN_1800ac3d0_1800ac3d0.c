/* FUN_1800ac3d0 @ 1800ac3d0 */

void FUN_1800ac3d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  LOCK();
  plVar1 = (longlong *)(lVar2 + 0x1c8);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18009c5a0(lVar2 + 0x80);
    FUN_18017a7e0(lVar2 + 0x100);
    return;
  }
  return;
}


