/* Unwind@180022790 @ 180022790 */

void Unwind_180022790(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1b0);
  lVar2 = *(longlong *)(param_2 + 0x770);
  if ((*(byte *)(lVar2 + 0x5a) & *(longlong *)(param_2 + 0x1c0) != 0) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1b8),*(longlong *)(param_2 + 0x1c0),1);
  }
  *(undefined1 *)(lVar2 + 0x5a) = 0;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(param_2 + 0x420) = uVar1;
  return;
}


