/* FUN_18017fbb0 @ 18017fbb0 */

void FUN_18017fbb0(ulonglong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  bool bVar7;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  ulonglong *local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar2 = *param_1;
  do {
    while( true ) {
      if ((uVar2 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: next.is_notified()",0x24,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263410);
      }
      if ((uVar2 & 3) == 0) break;
      if (uVar2 < 0x40) {
LAB_18017fd65:
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.ref_count() > 0",0x26,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263658);
      }
      uVar4 = (ulonglong)(uVar2 - 0x40 < 0x40) | 2;
      LOCK();
      uVar5 = *param_1;
      bVar7 = uVar2 == uVar5;
      if (bVar7) {
        *param_1 = uVar2 - 0x40;
      }
      else {
        uVar2 = uVar5;
      }
      UNLOCK();
      if (bVar7) goto LAB_18017fc24;
    }
    uVar4 = uVar2 >> 5 & 1;
    LOCK();
    uVar5 = *param_1;
    bVar7 = uVar2 == uVar5;
    if (bVar7) {
      *param_1 = (uVar2 & 0xfffffffffffffff8) + 1;
    }
    else {
      uVar2 = uVar5;
    }
    UNLOCK();
  } while (!bVar7);
LAB_18017fc24:
  switch(uVar4) {
  case 0:
    puVar3 = param_1 + 4;
    local_40 = param_1;
    local_38 = puVar3;
    bVar1 = FUN_1801777e0();
    if ((bVar1 & 1) != 0) {
      do {
        uVar2 = *local_40;
        do {
          if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: curr.is_running()",0x23,
                          &PTR_s_C__Users_burne__cargo_registry_s_1802633d0);
          }
          if ((uVar2 & 0x20) != 0) {
            cVar6 = '\x03';
            local_68 = 0;
            break;
          }
          if ((uVar2 & 4) == 0) {
            if (uVar2 < 0x40) goto LAB_18017fd65;
            uVar5 = (uVar2 & 0xffffffffffffffde) - 0x40;
            cVar6 = (uVar5 < 0x40) * '\x02';
          }
          else {
            if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_180201ec0("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                            &PTR_s_C__Users_burne__cargo_registry_s_1802636a0);
            }
            uVar5 = (uVar2 & 0xffffffffffffffde) + 0x40;
            cVar6 = '\x01';
          }
          local_68 = 1;
          LOCK();
          uVar4 = *local_40;
          bVar7 = uVar2 == uVar4;
          if (bVar7) {
            *local_40 = uVar5;
          }
          else {
            uVar2 = uVar4;
          }
          UNLOCK();
        } while (!bVar7);
        param_1 = local_40;
        switch(cVar6) {
        case '\0':
          goto code_r0x00018017fd21;
        case '\x02':
          goto switchD_18017fc35_caseD_3;
        case '\x03':
          FUN_18017f350(local_38);
          goto LAB_18017fe06;
        }
        puVar3 = local_38;
        FUN_1801fafd0();
        if (local_30 != 0) {
          local_60 = local_40[6];
          goto LAB_18017fde6;
        }
      } while (((ulonglong)local_48 & 1) != 0);
    }
    local_48 = puVar3;
    local_30 = 0;
    local_60 = 0;
LAB_18017fde6:
    local_68 = CONCAT44(local_68._4_4_,1);
    local_58 = local_30;
    local_50 = local_48;
    FUN_1801779a0(local_38,&local_68);
LAB_18017fe06:
    param_1 = local_40;
    break;
  case 1:
    FUN_18017f350(param_1 + 4);
    break;
  case 2:
code_r0x00018017fd21:
    return;
  case 3:
switchD_18017fc35_caseD_3:
    FUN_18017f1f0(param_1);
    return;
  }
  FUN_180180030(param_1);
  return;
}


