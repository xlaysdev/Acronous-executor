/* Unwind@1801168b0 @ 1801168b0 */

undefined1 Unwind_1801168b0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x30);
  LOCK();
  uVar1 = *(undefined1 *)(lVar2 + 0x30);
  *(undefined1 *)(lVar2 + 0x30) = 0;
  UNLOCK();
  return uVar1;
}


