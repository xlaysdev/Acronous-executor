/* FUN_180030020 @ 180030020 */

void FUN_180030020(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  
  uVar1 = *param_1;
  FUN_180030530(local_30,uVar1);
  if (local_30[0] != 0) {
    do {
      local_38 = local_20 * 0x20 + local_30[0];
      lVar2 = *(longlong *)(local_30[0] + 0x168 + local_20 * 0x18);
      if (lVar2 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_30[0] + local_20 * 0x18 + 0x170),lVar2,1);
      }
      FUN_18002fb10(&local_38);
      FUN_180030530(local_30,uVar1);
    } while (local_30[0] != 0);
  }
  return;
}


