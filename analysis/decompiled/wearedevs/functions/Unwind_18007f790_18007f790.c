/* Unwind@18007f790 @ 18007f790 */

undefined1 Unwind_18007f790(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  LOCK();
  puVar1 = (undefined1 *)(*(longlong *)(param_2 + 0x38) + 0x78);
  uVar2 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  return uVar2;
}


