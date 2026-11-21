/* FUN_180185f30 @ 180185f30 */

void FUN_180185f30(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    puVar1 = (ulonglong *)*param_1;
    do {
      lVar4 = lVar4 + -1;
      puVar2 = (ulonglong *)*puVar1;
      if (puVar2 == (ulonglong *)0x0) {
        param_1[1] = lVar4;
        return;
      }
      uVar3 = puVar2[1];
      *puVar1 = uVar3;
      if (uVar3 == 0) {
        puVar1[1] = 0;
      }
      puVar2[1] = 0;
      param_1[1] = lVar4;
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x40;
      UNLOCK();
      if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263618);
      }
      if ((uVar3 & 0xffffffffffffffc0) == 0x40) {
        (**(code **)(puVar2[2] + 0x10))();
      }
    } while (lVar4 != 0);
  }
  return;
}


