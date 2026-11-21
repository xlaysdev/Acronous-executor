/* Unwind@180070c40 @ 180070c40 */

undefined1 Unwind_180070c40(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x58);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x28);
  LOCK();
  uVar1 = *(undefined1 *)(lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x20) = 0;
  UNLOCK();
  return uVar1;
}


