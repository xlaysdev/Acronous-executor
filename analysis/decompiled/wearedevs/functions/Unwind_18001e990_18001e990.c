/* Unwind@18001e990 @ 18001e990 */

void Unwind_18001e990(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_2 + 0x260) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x268),*(longlong *)(param_2 + 0x260),1);
  }
  if (*(longlong *)(param_2 + 0x278) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x280),*(longlong *)(param_2 + 0x278),1);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x768);
  *(undefined8 *)(param_2 + 0x738) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x760);
  *(undefined8 *)(param_2 + 0x730) = uVar2;
  FUN_18002ccb0(param_2 + 0x290);
  *(undefined8 *)(param_2 + 0x738) = uVar1;
  *(undefined8 *)(param_2 + 0x730) = uVar2;
  return;
}


