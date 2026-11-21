/* FUN_180132820 @ 180132820 */

void FUN_180132820(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 300);
  FUN_180132bb0(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = param_3;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 0xa0));
  }
  lVar2 = *(longlong *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 200));
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801328db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(param_1 + 0xb8));
  return;
}


