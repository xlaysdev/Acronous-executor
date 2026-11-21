/* Unwind@1800eaa20 @ 1800eaa20 */

void Unwind_1800eaa20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x550);
  if (*(char *)(*(longlong *)(param_2 + 0x600) + 0x133) == '\0') {
    *(undefined8 *)(param_2 + 0x590) = uVar1;
    return;
  }
  if (*(longlong *)(param_2 + 0x130) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x120),*(longlong *)(param_2 + 0x130) << 5,4);
  }
  *(undefined8 *)(param_2 + 0x590) = uVar1;
  return;
}


