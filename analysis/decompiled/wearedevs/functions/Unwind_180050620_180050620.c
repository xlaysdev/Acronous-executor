/* Unwind@180050620 @ 180050620 */

void Unwind_180050620(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x178) + 0x18);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x178) + 0x20),lVar1 * 0x68,8);
  }
  lVar1 = *(longlong *)(param_2 + 0x178);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}


