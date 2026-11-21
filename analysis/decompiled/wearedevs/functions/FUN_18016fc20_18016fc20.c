/* FUN_18016fc20 @ 18016fc20 */

void FUN_18016fc20(char *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_50;
  char *local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  LOCK();
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar4 != '\0') {
    FUN_180200390(param_1);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_3c = 0;
  }
  else {
    local_3c = FUN_180200a50();
    local_3c = local_3c ^ 1;
  }
  local_48 = param_1;
  if (*(longlong *)(param_4 + 0x18) != -1) {
    FUN_1801644d0(param_1 + 8);
  }
  if (local_48[0x30] == '\0') {
    *(undefined8 *)(param_4 + 0x18) = param_3;
    *(undefined8 *)(param_4 + 0x10) = param_3;
    uVar5 = FUN_1801643b0(local_48 + 8);
    if ((uVar5 & 1) == 0) {
      if (param_4 <= *(longlong *)(local_48 + 0x28) - 1U) {
        if (*param_2 == 0) {
          FUN_1801691b0(param_2[1] + 0x10);
        }
        else {
          local_50 = FUN_18018cbb0();
          if (local_50 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("failed to wake I/O driver",0x19,&local_50,&PTR_FUN_180262428,
                          &PTR_s_C__Users_burne__cargo_registry_s_180262610);
          }
        }
      }
      if ((((char)local_3c == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        local_48[1] = '\x01';
      }
      LOCK();
      cVar4 = *local_48;
      *local_48 = '\0';
      UNLOCK();
      if (cVar4 == '\x02') {
        WakeByAddressSingle();
        return;
      }
      return;
    }
    if (*(longlong *)(param_4 + 0x18) != -1) {
      *(undefined1 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x18) = 0xffffffffffffffff;
      uVar5 = *(ulonglong *)(param_4 + 0x30);
      do {
        LOCK();
        uVar1 = *(ulonglong *)(param_4 + 0x30);
        bVar7 = uVar5 == uVar1;
        if (bVar7) {
          *(ulonglong *)(param_4 + 0x30) = uVar5 | 2;
        }
        else {
          uVar5 = uVar1;
        }
        UNLOCK();
      } while (!bVar7);
      goto LAB_18016fd1f;
    }
  }
  else if (*(longlong *)(param_4 + 0x18) != -1) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined8 *)(param_4 + 0x18) = 0xffffffffffffffff;
    uVar5 = *(ulonglong *)(param_4 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(param_4 + 0x30);
      bVar7 = uVar5 == uVar1;
      if (bVar7) {
        *(ulonglong *)(param_4 + 0x30) = uVar5 | 2;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (!bVar7);
LAB_18016fd1f:
    if (uVar5 == 0) {
      lVar6 = *(longlong *)(param_4 + 0x20);
      param_2 = *(longlong **)(param_4 + 0x28);
      *(undefined8 *)(param_4 + 0x20) = 0;
      LOCK();
      *(undefined8 *)(param_4 + 0x30) = 0;
      UNLOCK();
      pcVar2 = local_48;
      goto joined_r0x00018016fd2a;
    }
  }
  lVar6 = 0;
  pcVar2 = local_48;
joined_r0x00018016fd2a:
  local_48 = pcVar2;
  if ((((char)local_3c == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    pcVar2[1] = '\x01';
  }
  LOCK();
  cVar4 = *pcVar2;
  *pcVar2 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(pcVar2);
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018016fd7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))(param_2);
  return;
}


