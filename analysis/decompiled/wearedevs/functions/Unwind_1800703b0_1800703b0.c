/* Unwind@1800703b0 @ 1800703b0 */

undefined1 Unwind_1800703b0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x3b8);
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_2 + 0x3a8);
  *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(param_2 + 0x3a0);
  LOCK();
  uVar1 = *(undefined1 *)(lVar2 + 0x60);
  *(undefined1 *)(lVar2 + 0x60) = 0;
  UNLOCK();
  *(undefined1 *)(param_2 + 0x3c7) = 1;
  *(undefined1 *)(param_2 + 0x3c6) = 0;
  return uVar1;
}


