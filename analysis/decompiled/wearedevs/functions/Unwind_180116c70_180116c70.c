/* Unwind@180116c70 @ 180116c70 */

undefined1 Unwind_180116c70(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  LOCK();
  uVar1 = *(undefined1 *)(lVar2 + 0x30);
  *(undefined1 *)(lVar2 + 0x30) = 0;
  UNLOCK();
  return uVar1;
}


