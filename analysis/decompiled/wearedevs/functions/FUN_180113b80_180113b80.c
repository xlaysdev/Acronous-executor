/* FUN_180113b80 @ 180113b80 */

void FUN_180113b80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong local_40;
  longlong local_38;
  
  lVar5 = *param_1;
  if (*(int *)(lVar5 + 0x10) != 3) {
    if (*(longlong *)(lVar5 + 0x60) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(lVar5 + 0x58),*(longlong *)(lVar5 + 0x60) << 2,2);
    }
    lVar6 = *(longlong *)(lVar5 + 0x30);
    lVar7 = *(longlong *)(lVar5 + 0x38);
    local_40 = 0;
    while (local_40 != lVar7) {
      lVar9 = local_40 * 0x68;
      lVar4 = lVar6 + lVar9;
      local_40 = local_40 + 1;
      lVar9 = *(longlong *)(lVar6 + 0x40 + lVar9);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x20))
                  (*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x48),
                   *(undefined8 *)(lVar4 + 0x50));
      }
      (**(code **)(*(longlong *)(lVar4 + 0x18) + 0x20))
                (*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x20),
                 *(undefined8 *)(lVar4 + 0x28));
    }
    if (*(longlong *)(lVar5 + 0x28) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(lVar5 + 0x30),*(longlong *)(lVar5 + 0x28) * 0x68,8);
    }
    lVar6 = *(longlong *)(lVar5 + 0x50);
    puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x48) + 0x38);
    local_38 = 0;
    while (lVar6 != local_38) {
      local_38 = local_38 + 1;
      uVar8 = *puVar10;
      plVar3 = puVar10 + -3;
      puVar1 = puVar10 + -2;
      puVar2 = puVar10 + -1;
      puVar10 = puVar10 + 9;
      (**(code **)(*plVar3 + 0x20))(uVar8,*puVar1,*puVar2);
    }
    if (*(longlong *)(lVar5 + 0x40) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(lVar5 + 0x48),*(longlong *)(lVar5 + 0x40) * 0x48,8);
    }
  }
  if (*(longlong *)(lVar5 + 0x78) != 0) {
    (**(code **)(*(longlong *)(lVar5 + 0x78) + 0x18))(*(undefined8 *)(lVar5 + 0x80));
  }
  if (*(longlong *)(lVar5 + 0x90) != 0) {
    (**(code **)(*(longlong *)(lVar5 + 0x90) + 0x18))(*(undefined8 *)(lVar5 + 0x98));
  }
  if (lVar5 != -1) {
    LOCK();
    plVar3 = (longlong *)(lVar5 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      thunk_FUN_1801d3330(lVar5,0xb0,8);
      return;
    }
  }
  return;
}


