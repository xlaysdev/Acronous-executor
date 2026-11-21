/* Unwind@1801328f0 @ 1801328f0 */

void Unwind_1801328f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined1 *)(lVar1 + 0x48) = 0;
  *(undefined1 *)(lVar1 + 0x49) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_2 + 0x34);
  return;
}


