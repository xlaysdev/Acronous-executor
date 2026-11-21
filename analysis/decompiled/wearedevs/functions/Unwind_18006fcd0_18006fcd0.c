/* Unwind@18006fcd0 @ 18006fcd0 */

undefined1 Unwind_18006fcd0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x3b8);
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(param_2 + 0x3a8);
  LOCK();
  uVar1 = *(undefined1 *)(lVar2 + 0x60);
  *(undefined1 *)(lVar2 + 0x60) = 0;
  UNLOCK();
  return uVar1;
}


