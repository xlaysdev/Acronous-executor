/* Unwind@180124d80 @ 180124d80 */

undefined1 Unwind_180124d80(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x178);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_2 + 0x170);
  LOCK();
  uVar1 = *(undefined1 *)(lVar2 + 0x88);
  *(undefined1 *)(lVar2 + 0x88) = 0;
  UNLOCK();
  return uVar1;
}


