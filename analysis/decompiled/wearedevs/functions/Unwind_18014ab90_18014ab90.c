/* Unwind@18014ab90 @ 18014ab90 */

void Unwind_18014ab90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x294) != '\0') {
    FUN_18000adf0(*(undefined8 *)(param_2 + 0x268));
    if (*(longlong *)(param_2 + 0x288) != 0 && 10 < *(byte *)(param_2 + 0x293)) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x260),*(undefined8 *)(param_2 + 0x288),1);
    }
    if (**(longlong **)(param_2 + 0x280) != 0) {
      lVar1 = *(longlong *)(param_2 + 0x280);
      (**(code **)(**(longlong **)(param_2 + 0x280) + 0x20))
                (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
                 *(undefined8 *)(lVar1 + 0x10));
    }
  }
  return;
}


