/* FUN_1800ac590 @ 1800ac590 */

undefined8 FUN_1800ac590(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char cVar8;
  char *pcVar9;
  char cVar10;
  char cVar11;
  bool bVar12;
  undefined2 local_40;
  undefined1 local_3e;
  char local_3a;
  char local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("called after complete",0x2b,&PTR_s_C__Users_burne__cargo_registry_s_180210890);
  }
  lVar5 = FUN_18016c6f0();
  if (*(char *)(lVar5 + 0x48) == '\x01') {
LAB_1800ac602:
    cVar10 = *(char *)(lVar5 + 0x44);
    cVar11 = *(char *)(lVar5 + 0x45);
    cVar8 = cVar11;
    if (cVar10 != '\x01') {
LAB_1800ac621:
      *(char *)(lVar5 + 0x45) = cVar8;
      local_3e = 0;
      local_40 = 0;
      FUN_18016e8a0((longlong)&local_40 + 1);
      goto LAB_1800ac637;
    }
    if (cVar11 != '\0') {
      cVar8 = cVar11 + -1;
      goto LAB_1800ac621;
    }
    FUN_18016e580(param_2);
    local_3e = 0;
    local_40 = 0;
    pcVar9 = (char *)((longlong)&local_40 + 1);
LAB_1800ac6ec:
    FUN_18016e8a0(pcVar9);
    uVar7 = 1;
  }
  else {
    if (*(char *)(lVar5 + 0x48) != '\x02') {
      FUN_1801d8880(lVar5,FUN_1800754a0);
      *(undefined1 *)(lVar5 + 0x48) = 1;
      goto LAB_1800ac602;
    }
    cVar10 = '\0';
    cVar11 = '\0';
LAB_1800ac637:
    puVar1 = (ulonglong *)(lVar3 + 0x30);
    local_3a = cVar10;
    local_39 = cVar11;
    uVar6 = FUN_1801775d0(puVar1,2);
    if ((uVar6 & 2) == 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 1) == 0) {
LAB_1800ac697:
          FUN_180177560(lVar3 + 0x20,param_2);
          uVar6 = *puVar1;
          do {
            LOCK();
            uVar2 = *puVar1;
            bVar12 = uVar6 == uVar2;
            if (bVar12) {
              *puVar1 = uVar6 | 1;
            }
            else {
              uVar6 = uVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if ((uVar6 & 2) != 0) goto LAB_1800ac6fe;
        }
        else if ((*(longlong *)(lVar3 + 0x28) != ((longlong *)*param_2)[1]) ||
                (*(longlong *)(lVar3 + 0x20) != *(longlong *)*param_2)) {
          uVar6 = *puVar1;
          do {
            LOCK();
            uVar2 = *puVar1;
            bVar12 = uVar6 == uVar2;
            if (bVar12) {
              *puVar1 = uVar6 & 0xfffffffffffffffe;
            }
            else {
              uVar6 = uVar2;
            }
            UNLOCK();
          } while (!bVar12);
          if ((uVar6 & 2) != 0) {
            LOCK();
            *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) | 1;
            UNLOCK();
            goto LAB_1800ac6fe;
          }
          FUN_180177590();
          goto LAB_1800ac697;
        }
        pcVar9 = &local_3a;
        goto LAB_1800ac6ec;
      }
    }
    else {
LAB_1800ac6fe:
      *(undefined8 *)(lVar3 + 0x38) = 0;
    }
    local_3a = '\0';
    FUN_18016e8a0(&local_3a);
    plVar4 = (longlong *)*param_1;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003de40(param_1);
      }
    }
    *param_1 = 0;
    uVar7 = 0;
  }
  return uVar7;
}


