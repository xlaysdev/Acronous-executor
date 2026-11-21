/* Unwind@18006c920 @ 18006c920 */

undefined1 Unwind_18006c920(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x648);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x640);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x638);
  LOCK();
  uVar1 = *(undefined1 *)(lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x20) = 0;
  UNLOCK();
  return uVar1;
}


