/* Unwind@1800e5b50 @ 1800e5b50 */

undefined1 Unwind_1800e5b50(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x30);
  LOCK();
  uVar1 = *(undefined1 *)(lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x20) = 0;
  UNLOCK();
  return uVar1;
}


