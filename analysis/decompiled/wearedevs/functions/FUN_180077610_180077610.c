/* FUN_180077610 @ 180077610 */

void FUN_180077610(char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  FUN_1800ac410();
  if (*param_1 == '\0') {
    if ((*(longlong *)(param_1 + 8) != 0) && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) {
      uVar3 = FUN_1801775a0(lVar1 + 0x30);
      if ((uVar3 & 5) == 1) {
        (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x10))(*(undefined8 *)(lVar1 + 0x28));
      }
      plVar2 = *(longlong **)(param_1 + 0x10);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18003d880();
          return;
        }
      }
    }
  }
  else if ((*(longlong *)(param_1 + 8) != 0) && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0))
  {
    uVar3 = FUN_1801775a0(lVar1 + 0x30);
    if ((uVar3 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x10))(*(undefined8 *)(lVar1 + 0x28));
    }
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003d580();
        return;
      }
    }
  }
  return;
}


