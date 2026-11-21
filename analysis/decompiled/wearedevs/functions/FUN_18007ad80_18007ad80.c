/* FUN_18007ad80 @ 18007ad80 */

void FUN_18007ad80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x20) != 3) {
    FUN_18000b470(param_1 + 0x20);
  }
  FUN_18003c2f0(*(undefined8 *)(param_1 + 0x120));
  if (((*(byte *)(param_1 + 0x108) != 0xc) && (10 < *(byte *)(param_1 + 0x108))) &&
     (*(longlong *)(param_1 + 0x118) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x110),*(longlong *)(param_1 + 0x118),1);
  }
  plVar1 = *(longlong **)(param_1 + 0x128);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x128);
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 1) {
    uVar3 = *(uint *)(param_1 + 0x88);
  }
  else {
    if ((int)*(longlong *)(param_1 + 0x80) != 2) goto LAB_18007ae5b;
    uVar3 = *(uint *)(param_1 + 0x88);
  }
  if ((uVar3 < 2) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    FUN_1801b2a70(param_1 + 0xb8);
  }
LAB_18007ae5b:
  lVar5 = *(longlong *)(param_1 + 0xe8);
  if (-1 < lVar5) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    if (lVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0xf0);
      puVar6 = (undefined8 *)(lVar5 + 0x18);
      lVar4 = 1;
      lVar8 = lVar2;
      do {
        if (puVar6[-3] != 0) {
          (**(code **)(puVar6[-3] + 0x20))(*puVar6,puVar6[-2],puVar6[-1],param_4,lVar8,lVar5);
        }
        puVar6 = puVar6 + 4;
        bVar7 = lVar4 != lVar2;
        lVar4 = lVar4 + 1;
      } while (bVar7);
      lVar5 = *(longlong *)(param_1 + 0xe8);
    }
    if (lVar5 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xf0),lVar5 << 5,8);
    }
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) && (lVar5 = *(longlong *)(param_1 + 0x18), lVar5 != 0)) {
    uVar3 = FUN_1801775a0(lVar5 + 0x30);
    if ((uVar3 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(*(undefined8 *)(lVar5 + 0x28));
    }
    plVar1 = *(longlong **)(param_1 + 0x18);
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


