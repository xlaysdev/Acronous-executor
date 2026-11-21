/* FUN_18017edb0 @ 18017edb0 */

void FUN_18017edb0(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong lVar6;
  
  if (0x100 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: len <= LOCAL_QUEUE_CAPACITY",0x2d,
                  &PTR_s_C__Users_burne__cargo_registry_s_180264b50);
  }
  if (param_3 == 0) {
    return;
  }
  lVar1 = *param_1;
  uVar5 = *(uint *)(lVar1 + 0x20);
  if (0x100U - (int)param_3 < uVar5 - (int)((ulonglong)*(undefined8 *)(lVar1 + 0x18) >> 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("explicit panic",0xe,&PTR_s_C__Users_burne__cargo_registry_s_180264b78);
  }
  if (param_3 != 0) {
    lVar6 = 1 - param_3;
    do {
      uVar2 = *param_2;
      if (uVar2 == 0) {
        if (lVar6 != 0) {
          lVar6 = -lVar6;
          goto LAB_18017ee85;
        }
        break;
      }
      uVar3 = *(ulonglong *)(uVar2 + 8);
      *param_2 = uVar3;
      if (uVar3 == 0) {
        param_2[1] = 0;
      }
      *(undefined8 *)(uVar2 + 8) = 0;
      *(ulonglong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)(uVar5 & 0xff) * 8) = uVar2;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 1);
  }
  goto LAB_18017eed5;
  while( true ) {
    uVar2 = puVar4[1];
    *param_2 = uVar2;
    if (uVar2 == 0) {
      param_2[1] = 0;
    }
    puVar4[1] = 0;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 - 0x40;
    UNLOCK();
    if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    if ((uVar2 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(puVar4[2] + 0x10))();
    }
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) break;
LAB_18017ee85:
    puVar4 = (ulonglong *)*param_2;
    if (puVar4 == (ulonglong *)0x0) break;
  }
LAB_18017eed5:
  *(uint *)(lVar1 + 0x20) = uVar5;
  return;
}


