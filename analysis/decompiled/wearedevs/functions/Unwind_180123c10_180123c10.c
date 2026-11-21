/* Unwind@180123c10 @ 180123c10 */

undefined1 Unwind_180123c10(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  LOCK();
  puVar1 = (undefined1 *)(*(longlong *)(param_2 + 0x28) + 0xa0);
  uVar2 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  return uVar2;
}


