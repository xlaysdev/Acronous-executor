/* Unwind@18012f3f0 @ 18012f3f0 */

void Unwind_18012f3f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined2 *)(lVar1 + 0x48) = 0x100;
  *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_2 + 0x58);
  return;
}


