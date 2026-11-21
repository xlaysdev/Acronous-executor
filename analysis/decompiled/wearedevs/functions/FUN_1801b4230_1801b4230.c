/* FUN_1801b4230 @ 1801b4230 */

void FUN_1801b4230(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong *local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  uVar4 = (uint)lVar3 & 3;
  uVar5 = (ulonglong)uVar4;
  switch(uVar4) {
  case 0:
switchD_1801b4270_caseD_0:
    if (param_2 == 0) goto switchD_1801b4270_caseD_1;
    LOCK();
    lVar1 = *param_1;
    bVar6 = lVar3 == lVar1;
    if (bVar6) {
      *param_1 = lVar3 + 1;
    }
    else {
      lVar3 = lVar1;
    }
    UNLOCK();
    if (!bVar6) {
      do {
        uVar4 = (uint)lVar3 & 3;
        uVar5 = (ulonglong)uVar4;
        switch(uVar4) {
        case 0:
          goto switchD_1801b4270_caseD_0;
        case 1:
switchD_1801b4270_caseD_1:
          local_60 = (longlong *)FUN_1801e04b0();
          local_58 = lVar3 - uVar5;
          local_50 = '\0';
          LOCK();
          lVar1 = *param_1;
          bVar6 = lVar3 == lVar1;
          if (bVar6) {
            *param_1 = (longlong)&local_60 + uVar5;
          }
          else {
            lVar3 = lVar1;
          }
          UNLOCK();
          if (!bVar6) {
            do {
              local_50 = '\0';
              if (((uint)lVar3 & 3) != (uint)uVar5) goto LAB_1801b4358;
              if (local_60 != (longlong *)0x0) {
                LOCK();
                *local_60 = *local_60 + -1;
                UNLOCK();
                if (*local_60 == 0) {
                  FUN_1801e3970(&local_60);
                }
              }
              local_60 = (longlong *)FUN_1801e04b0();
              local_58 = lVar3 - uVar5;
              local_50 = '\0';
              LOCK();
              lVar1 = *param_1;
              bVar6 = lVar3 == lVar1;
              if (bVar6) {
                *param_1 = (longlong)&local_60 + uVar5;
              }
              else {
                lVar3 = lVar1;
              }
              UNLOCK();
            } while (!bVar6);
          }
          while (local_50 == '\0') {
            FUN_1801e0530();
          }
LAB_1801b4358:
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *local_60 = *local_60 + -1;
            UNLOCK();
            if (*local_60 == 0) {
              FUN_1801e3970(&local_60);
            }
          }
          lVar3 = *param_1;
          break;
        case 2:
          goto switchD_1801b4270_caseD_2;
        case 3:
          goto switchD_1801b4270_caseD_3;
        }
      } while( true );
    }
    local_58 = 0;
    local_60 = param_1;
    cVar2 = (**(code **)(param_3 + 0x20))(param_2);
    if (cVar2 != '\0') {
      local_58 = 2;
    }
    FUN_1801b4150(&local_60);
    break;
  case 1:
    goto switchD_1801b4270_caseD_1;
  case 3:
switchD_1801b4270_caseD_3:
    do {
    } while( true );
  }
switchD_1801b4270_caseD_2:
  return;
}


