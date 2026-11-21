/* FUN_18009a810 @ 18009a810 */

void FUN_18009a810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x20) != 3) {
    FUN_18009a670(param_1 + 0x20);
  }
  FUN_18003c2f0(*(undefined8 *)(param_1 + 0x120));
  lVar5 = param_1;
  if (((*(byte *)(param_1 + 0x108) != 0xc) && (10 < *(byte *)(param_1 + 0x108))) &&
     (*(longlong *)(param_1 + 0x118) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x110),*(longlong *)(param_1 + 0x118),1,param_4,
                        param_1,uVar6);
  }
  plVar1 = *(longlong **)(param_1 + 0x128);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(lVar5 + 0x128);
    }
  }
  if (*(longlong *)(lVar5 + 0x80) == 1) {
    uVar3 = *(uint *)(lVar5 + 0x88);
  }
  else {
    if ((int)*(longlong *)(lVar5 + 0x80) != 2) goto LAB_18009a8ea;
    uVar3 = *(uint *)(lVar5 + 0x88);
  }
  if ((uVar3 < 2) && (*(longlong *)(lVar5 + 0xb8) != 0)) {
    FUN_1801b2a70(lVar5 + 0xb8);
  }
LAB_18009a8ea:
  FUN_18009aab0(lVar5 + 0xe8);
  if ((*(longlong *)(lVar5 + 0x10) != 0) && (lVar2 = *(longlong *)(lVar5 + 0x18), lVar2 != 0)) {
    puVar4 = (undefined8 *)(lVar5 + 0x18);
    uVar3 = FUN_1801775a0(lVar2 + 0x30);
    if ((uVar3 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x10))(*(undefined8 *)(lVar2 + 0x28));
    }
    plVar1 = (longlong *)*puVar4;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180113f90();
        return;
      }
    }
  }
  return;
}


