/* FUN_180165f30 @ 180165f30 */

longlong FUN_180165f30(longlong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  switch((uint)param_3 & 3) {
  default:
    LOCK();
    uVar1 = *param_2;
    bVar6 = param_3 == uVar1;
    if (bVar6) {
      *param_2 = param_3 & 0xfffffffffffffffc | 2;
    }
    else {
      param_3 = uVar1;
    }
    UNLOCK();
    if (bVar6) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: actual_state == EMPTY || actual_state == NOTIFIED",0x43,
                    &PTR_s_C__Users_burne__cargo_registry_s_180260688);
    }
    param_3 = param_3 & 0xfffffffffffffffc | 2;
    lVar5 = 0;
    break;
  case 1:
    if ((param_4 & 1) == 0) {
      plVar4 = (longlong *)param_1[1];
      if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802606a0);
      }
      lVar3 = *plVar4;
      param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 8) = 0;
        lVar3 = *param_1;
        *plVar4 = 0;
        plVar4[1] = 0;
        lVar5 = plVar4[2];
        plVar4[2] = 0;
        plVar4[4] = 1;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: self.tail.is_none()",0x25,
                        &PTR_s_C__Users_burne__cargo_registry_s_180260760);
        }
        return lVar5;
      }
      *param_1 = 0;
      lVar3 = 1;
    }
    else {
      plVar4 = (longlong *)*param_1;
      if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802606b8);
      }
      puVar2 = (undefined8 *)plVar4[1];
      *param_1 = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *plVar4 = 0;
        plVar4[1] = 0;
        lVar3 = plVar4[2];
        plVar4[2] = 0;
        plVar4[4] = 5;
        return lVar3;
      }
      param_1[1] = 0;
      lVar3 = 5;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar5 = plVar4[2];
    plVar4[2] = 0;
    plVar4[4] = lVar3;
    param_3 = param_3 & 0xfffffffffffffffc;
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\blocking\\schedule.rs"
                  ,0x28,&PTR_s_C__Users_burne__cargo_registry_s_180260778);
  }
  LOCK();
  *param_2 = param_3;
  UNLOCK();
  return lVar5;
}


