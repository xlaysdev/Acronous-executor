/* FUN_180171940 @ 180171940 */

void FUN_180171940(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  
  puVar2 = (ulonglong *)*param_1;
  if (puVar2 != (ulonglong *)0x0) {
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 - 0x40;
    UNLOCK();
    if (uVar1 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    if ((uVar1 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(puVar2[2] + 0x10))();
    }
  }
  FUN_18017cc50();
  plVar3 = (longlong *)param_1[3];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_180163890();
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801638e0(param_1 + 1);
    }
  }
  thunk_FUN_1801d3330(param_1,0x78,8);
  return;
}


