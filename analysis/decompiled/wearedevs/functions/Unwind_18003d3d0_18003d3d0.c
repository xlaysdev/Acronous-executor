/* Unwind@18003d3d0 @ 18003d3d0 */

undefined1 Unwind_18003d3d0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  LOCK();
  puVar1 = (undefined1 *)(*(longlong *)(param_2 + 0x30) + 0x38);
  uVar2 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  return uVar2;
}


