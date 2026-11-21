/* FUN_1800a9540 @ 1800a9540 */

ulonglong FUN_1800a9540(int *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  char cVar11;
  bool bVar12;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined2 local_38;
  undefined1 local_36;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar10 = (undefined7)((ulonglong)param_2 >> 8);
  if (*param_1 == 1) {
    if ((char)param_1[2] == '\0') {
LAB_1800a9670:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\client\\dispatch.rs"
                    ,0x28,&DAT_180210470);
    }
    lVar5 = *(longlong *)(param_1 + 4);
    lVar3 = FUN_18016c6f0();
    if (*(char *)(lVar3 + 0x48) == '\x01') {
LAB_1800a96a1:
      cVar8 = *(char *)(lVar3 + 0x44);
      cVar11 = *(char *)(lVar3 + 0x45);
      cVar6 = cVar11;
      if (cVar8 == '\x01') {
        if (cVar11 == '\0') {
          FUN_18016e580(param_2);
          local_3a = 0;
          local_3c = 0;
          puVar2 = &local_3c;
          goto LAB_1800a982e;
        }
        cVar6 = cVar11 + -1;
      }
      *(char *)(lVar3 + 0x45) = cVar6;
      local_3a = 0;
      local_3c = 0;
      FUN_18016e8a0((longlong)&local_3c + 1);
      local_34 = cVar8;
      local_33 = cVar11;
    }
    else {
      if (*(char *)(lVar3 + 0x48) != '\x02') {
        FUN_1801d8880(lVar3,FUN_1800754a0);
        *(undefined1 *)(lVar3 + 0x48) = 1;
        goto LAB_1800a96a1;
      }
      local_34 = '\0';
      local_33 = '\0';
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180210560);
    }
    puVar1 = (ulonglong *)(lVar5 + 0x30);
    uVar4 = FUN_1801775d0(puVar1,2);
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 8) != 0) {
        if ((*(longlong *)(lVar5 + 0x18) == ((longlong *)*param_2)[1]) &&
           (*(longlong *)(lVar5 + 0x10) == *(longlong *)*param_2)) {
          uVar9 = CONCAT71(uVar10,1);
          pcVar7 = &local_34;
          goto LAB_1800a9806;
        }
        uVar4 = *puVar1;
        do {
          LOCK();
          uVar9 = *puVar1;
          bVar12 = uVar4 == uVar9;
          if (bVar12) {
            *puVar1 = uVar4 & 0xfffffffffffffff7;
          }
          else {
            uVar4 = uVar9;
          }
          UNLOCK();
        } while (!bVar12);
        if ((uVar4 & 4) != 0) {
          LOCK();
          *puVar1 = *puVar1 | 8;
          UNLOCK();
          goto LAB_1800a9655;
        }
        FUN_180177590(lVar5 + 0x10);
      }
      FUN_180177560(lVar5 + 0x10,param_2);
      uVar4 = *puVar1;
      do {
        LOCK();
        uVar9 = *puVar1;
        bVar12 = uVar4 == uVar9;
        if (bVar12) {
          *puVar1 = uVar4 | 8;
        }
        else {
          uVar4 = uVar9;
        }
        UNLOCK();
      } while (!bVar12);
      uVar9 = CONCAT71(uVar10,1);
      if ((uVar4 & 4) != 0) goto LAB_1800a9655;
    }
    else {
LAB_1800a9655:
      local_34 = '\0';
      uVar9 = 0;
    }
    pcVar7 = &local_34;
  }
  else {
    if ((char)param_1[2] == '\0') goto LAB_1800a9670;
    lVar5 = FUN_18016c6f0();
    if (*(char *)(lVar5 + 0x48) == '\x01') {
LAB_1800a9726:
      cVar8 = *(char *)(lVar5 + 0x44);
      cVar11 = *(char *)(lVar5 + 0x45);
      cVar6 = cVar11;
      if (cVar8 != '\x01') {
LAB_1800a9744:
        *(char *)(lVar5 + 0x45) = cVar6;
        local_36 = 0;
        local_38 = 0;
        FUN_18016e8a0((longlong)&local_38 + 1);
        goto LAB_1800a975a;
      }
      if (cVar11 != '\0') {
        cVar6 = cVar11 + -1;
        goto LAB_1800a9744;
      }
      FUN_18016e580(param_2);
      local_36 = 0;
      local_38 = 0;
      puVar2 = &local_38;
LAB_1800a982e:
      FUN_18016e8a0((longlong)puVar2 + 1);
      uVar9 = CONCAT71(uVar10,1);
      goto LAB_1800a980b;
    }
    if (*(char *)(lVar5 + 0x48) != '\x02') {
      FUN_1801d8880(lVar5,FUN_1800754a0);
      *(undefined1 *)(lVar5 + 0x48) = 1;
      goto LAB_1800a9726;
    }
    cVar8 = '\0';
    cVar11 = '\0';
LAB_1800a975a:
    lVar5 = *(longlong *)(param_1 + 4);
    local_32 = cVar8;
    local_31 = cVar11;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180210560);
    }
    puVar1 = (ulonglong *)(lVar5 + 0x30);
    uVar4 = FUN_1801775d0(puVar1,2);
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 8) == 0) {
LAB_1800a97cb:
        FUN_180177560(lVar5 + 0x10,param_2);
        uVar4 = *puVar1;
        do {
          LOCK();
          uVar9 = *puVar1;
          bVar12 = uVar4 == uVar9;
          if (bVar12) {
            *puVar1 = uVar4 | 8;
          }
          else {
            uVar4 = uVar9;
          }
          UNLOCK();
        } while (!bVar12);
        uVar9 = CONCAT71(uVar10,1);
        if ((uVar4 & 4) != 0) goto LAB_1800a97fc;
      }
      else {
        if ((*(longlong *)(lVar5 + 0x18) != ((longlong *)*param_2)[1]) ||
           (*(longlong *)(lVar5 + 0x10) != *(longlong *)*param_2)) {
          uVar4 = *puVar1;
          do {
            LOCK();
            uVar9 = *puVar1;
            bVar12 = uVar4 == uVar9;
            if (bVar12) {
              *puVar1 = uVar4 & 0xfffffffffffffff7;
            }
            else {
              uVar4 = uVar9;
            }
            UNLOCK();
          } while (!bVar12);
          if ((uVar4 & 4) != 0) {
            LOCK();
            *puVar1 = *puVar1 | 8;
            UNLOCK();
            goto LAB_1800a97fc;
          }
          FUN_180177590(lVar5 + 0x10);
          goto LAB_1800a97cb;
        }
        uVar9 = CONCAT71(uVar10,1);
      }
    }
    else {
LAB_1800a97fc:
      local_32 = '\0';
      uVar9 = 0;
    }
    pcVar7 = &local_32;
  }
LAB_1800a9806:
  FUN_18016e8a0(pcVar7);
LAB_1800a980b:
  return uVar9 & 0xffffffff;
}


