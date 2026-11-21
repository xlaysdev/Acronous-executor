/* Unwind@180029c30 @ 180029c30 */

void Unwind_180029c30(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (**(char **)(param_2 + 0x20) == '\0') {
    LOCK();
    puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x28);
    uVar2 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
    FUN_1800312e0(uVar2);
  }
  return;
}


