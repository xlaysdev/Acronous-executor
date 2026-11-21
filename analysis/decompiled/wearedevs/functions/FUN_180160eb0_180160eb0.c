/* FUN_180160eb0 @ 180160eb0 */

/* WARNING: Removing unreachable block (ram,0x000180160eef) */

void FUN_180160eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *local_28;
  undefined4 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (DAT_1802fd450 != '\0') {
    uVar1 = 0;
    goto LAB_180160f1f;
  }
  if (DAT_1802fd488 == 2) {
    if (DAT_1802fd460 < 0x3ffffffe) goto LAB_180160eec;
LAB_180160f4b:
    FUN_180200460(&DAT_1802fd460);
  }
  else {
    FUN_1801faef0(&DAT_1802fd458);
    if (0x3ffffffd < DAT_1802fd460) goto LAB_180160f4b;
LAB_180160eec:
    DAT_1802fd460 = DAT_1802fd460 + 1;
    LOCK();
    UNLOCK();
  }
  if (DAT_1802fd468 != '\0') {
    local_28 = &DAT_1802fd470;
    local_20 = &DAT_1802fd460;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_LAB_18025f7c8,
                  &DAT_18025f698);
  }
  param_1[1] = &DAT_1802fd470;
  param_1[2] = &DAT_1802fd460;
  uVar1 = 1;
LAB_180160f1f:
  *param_1 = uVar1;
  return;
}


