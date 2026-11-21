/* FUN_180200190 @ 180200190 */

void FUN_180200190(uint *param_1,char param_2,undefined8 param_3,longlong param_4,undefined8 param_5
                  )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint local_60;
  undefined1 local_5c;
  uint *local_58;
  uint local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  uVar2 = *param_1;
  if (param_2 == '\0') {
LAB_1802002b6:
    do {
      uVar3 = uVar2 & 4;
      uVar4 = uVar2;
      switch(uVar2 & 3) {
      case 0:
        goto code_r0x00018020027b;
      case 1:
        do {
          if (uVar3 == 0) {
            uVar4 = uVar4 | 4;
            uVar2 = 1;
            LOCK();
            uVar3 = *param_1;
            if (uVar3 == 1) {
              *param_1 = uVar4;
            }
            else {
              uVar2 = uVar3;
            }
            UNLOCK();
            if (uVar3 != 1) goto LAB_1802002b6;
          }
          local_4c[0] = uVar4;
          iVar1 = WaitOnAddress(param_1,local_4c,4,0xffffffff);
          if (iVar1 != 1) {
            GetLastError();
          }
          uVar2 = *param_1;
          uVar3 = uVar2 & 4;
          uVar4 = uVar2;
          switch(uVar2 & 3) {
          case 0:
            goto code_r0x00018020027b;
          case 2:
            goto switchD_1802002cc_caseD_2;
          case 3:
            goto switchD_1802002cc_caseD_3;
          }
        } while( true );
      case 2:
switchD_1802002cc_caseD_2:
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0("Once instance has previously been poisoned",0x55,param_5);
      }
switchD_1802002cc_caseD_3:
      local_5c = false;
      LOCK();
      uVar4 = *param_1;
      bVar5 = uVar2 == uVar4;
      if (bVar5) {
        *param_1 = uVar3 | 1;
      }
      else {
        uVar2 = uVar4;
      }
      UNLOCK();
    } while (!bVar5);
  }
  else {
LAB_1802001e9:
    do {
      uVar4 = uVar2 & 3;
      if (1 < uVar4 - 2) {
        if (uVar4 != 1) {
          return;
        }
        if ((uVar2 & 4) == 0) {
          uVar4 = uVar2 | 4;
          uVar2 = 1;
          LOCK();
          uVar3 = *param_1;
          if (uVar3 == 1) {
            *param_1 = uVar4;
          }
          else {
            uVar2 = uVar3;
          }
          UNLOCK();
          if (uVar3 != 1) goto LAB_1802001e9;
        }
        else {
          uVar4 = uVar2;
        }
        local_4c[0] = uVar4;
        iVar1 = WaitOnAddress(param_1,local_4c,4,0xffffffff);
        if (iVar1 != 1) {
          GetLastError();
        }
        uVar2 = *param_1;
        goto LAB_1802001e9;
      }
      LOCK();
      uVar3 = *param_1;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *param_1 = uVar2 & 4 | 1;
      }
      else {
        uVar2 = uVar3;
      }
      UNLOCK();
    } while (!bVar5);
    local_5c = uVar4 == 2;
  }
  local_60 = 0;
  local_58 = param_1;
  (**(code **)(param_4 + 0x20))(param_3,&local_60);
  LOCK();
  uVar2 = *local_58;
  *local_58 = local_60;
  UNLOCK();
  if ((uVar2 & 4) != 0) {
    WakeByAddressAll();
  }
code_r0x00018020027b:
  return;
}


