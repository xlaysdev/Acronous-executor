/* FUN_180091e60 @ 180091e60 */

void FUN_180091e60(int *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lStack_40;
  longlong lStack_30;
  
  if (*param_1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000180091e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 2) + 0x20))
              (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 4),
               *(undefined8 *)(param_1 + 6),*(code **)(*(longlong *)(param_1 + 2) + 0x20));
    return;
  }
  if (*(longlong *)(param_1 + 0x14) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x12),*(longlong *)(param_1 + 0x14) << 2,2);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 10);
  lStack_40 = 0;
  while (lStack_40 != lVar6) {
    lVar8 = lStack_40 * 0x68;
    lVar4 = lVar5 + lVar8;
    lStack_40 = lStack_40 + 1;
    lVar8 = *(longlong *)(lVar5 + 0x40 + lVar8);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x20))
                (*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x48),
                 *(undefined8 *)(lVar4 + 0x50));
    }
    (**(code **)(*(longlong *)(lVar4 + 0x18) + 0x20))
              (*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x20),
               *(undefined8 *)(lVar4 + 0x28));
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    thunk_FUN_1801d3330(lVar5,*(longlong *)(param_1 + 6) * 0x68,8);
  }
  lVar5 = *(longlong *)(param_1 + 0xe);
  lVar6 = *(longlong *)(param_1 + 0x10);
  puVar9 = (undefined8 *)(lVar5 + 0x38);
  lStack_30 = 0;
  while (lVar6 != lStack_30) {
    lStack_30 = lStack_30 + 1;
    uVar7 = *puVar9;
    plVar1 = puVar9 + -3;
    puVar2 = puVar9 + -2;
    puVar3 = puVar9 + -1;
    puVar9 = puVar9 + 9;
    (**(code **)(*plVar1 + 0x20))(uVar7,*puVar2,*puVar3);
  }
  if (*(longlong *)(param_1 + 0xc) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar5,*(longlong *)(param_1 + 0xc) * 0x48,8);
  return;
}


