/* FUN_1801c9dc0 @ 1801c9dc0 */

void FUN_1801c9dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_38 [2];
  longlong local_28;
  
  uVar1 = *param_1;
  FUN_1801ca4c0(local_38,uVar1);
  if (local_38[0] != 0) {
    do {
      lVar4 = local_28;
      lVar3 = local_38[0];
      lVar2 = *(longlong *)(local_38[0] + 0x168 + local_28 * 0x18);
      if (lVar2 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_38[0] + local_28 * 0x18 + 0x170),lVar2,1);
      }
      FUN_1801c9e50(lVar3 + lVar4 * 0x20);
      FUN_1801ca4c0(local_38,uVar1);
    } while (local_38[0] != 0);
  }
  return;
}


