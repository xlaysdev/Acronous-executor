/* FUN_180182200 @ 180182200 */

void FUN_180182200(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  uint local_38;
  undefined4 local_34;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = (longlong *)param_1[1];
  param_1[1] = 0;
  if (local_30 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("park missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_180264f50);
  }
  do {
    plVar4 = local_30;
    puVar1 = (ulonglong *)*param_1;
    *param_1 = 0;
    if (puVar1 == (ulonglong *)0x0) {
      lVar2 = param_1[3];
      uVar6 = *(ulonglong *)(lVar2 + 0x18);
      local_34 = (undefined4)(uVar6 >> 0x20);
      if (*(int *)(lVar2 + 0x20) == (int)uVar6) {
LAB_180182340:
        lVar2 = local_30[2];
        LOCK();
        bVar8 = *(char *)(lVar2 + 0x50) == '\0';
        if (bVar8) {
          *(char *)(lVar2 + 0x50) = '\x01';
        }
        UNLOCK();
        if (bVar8) {
          FUN_180164ad0(lVar2 + 0x10,param_2 + 0x150);
          LOCK();
          *(undefined1 *)(lVar2 + 0x50) = 0;
          UNLOCK();
        }
        FUN_1801df5b0(plVar4 + 4);
        LOCK();
        *local_30 = *local_30 + -1;
        UNLOCK();
        if (*local_30 == 0) {
          FUN_1801638e0(&local_30);
        }
        return;
      }
      while( true ) {
        local_38 = (uint)uVar6 + 1;
        uVar7 = (uint)(uVar6 >> 0x20);
        if (uVar7 == (uint)uVar6) {
          LOCK();
          uVar5 = *(ulonglong *)(lVar2 + 0x18);
          bVar8 = uVar6 == uVar5;
          if (bVar8) {
            *(ulonglong *)(lVar2 + 0x18) = CONCAT44(local_38,local_38);
            uVar5 = uVar6;
          }
          else {
          }
          UNLOCK();
        }
        else {
          if (local_38 == uVar7) {
            FUN_1801fb094(CONCAT71((int7)(uVar6 >> 8),1),&local_34,&local_38,0);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          LOCK();
          uVar5 = *(ulonglong *)(lVar2 + 0x18);
          bVar8 = uVar6 == uVar5;
          if (bVar8) {
            *(ulonglong *)(lVar2 + 0x18) = uVar6 & 0xffffffff00000000 | (ulonglong)local_38;
            uVar5 = uVar6;
          }
          else {
          }
          UNLOCK();
        }
        if (bVar8) break;
        local_34 = (undefined4)(uVar5 >> 0x20);
        uVar6 = uVar5;
        if (*(int *)(lVar2 + 0x20) == (int)uVar5) goto LAB_180182340;
      }
      puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x10) + (uVar6 & 0xff) * 8);
      LOCK();
      uVar6 = *puVar1;
      *puVar1 = *puVar1 - 0x40;
      UNLOCK();
    }
    else {
      LOCK();
      uVar6 = *puVar1;
      *puVar1 = *puVar1 - 0x40;
      UNLOCK();
    }
    if (uVar6 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    if ((uVar6 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(puVar1[2] + 0x10))();
    }
  } while( true );
}


