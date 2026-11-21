/* Unwind@18003c610 @ 18003c610 */

undefined1 Unwind_18003c610(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  LOCK();
  puVar1 = (undefined1 *)(*(longlong *)(param_2 + 0x28) + 0x48);
  uVar2 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  return uVar2;
}


