/* FUN_180178140 @ 180178140 */

byte FUN_180178140(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char cVar11;
  char cVar12;
  bool bVar13;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("called after completeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\sync\\oneshot.rs"
                  ,0x2b,&DAT_1802637a0);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0xb8) == '\x01') {
LAB_1801781cd:
    cVar12 = *(char *)(lVar4 + 0xb4);
    cVar11 = *(char *)(lVar4 + 0xb5);
    cVar6 = cVar11;
    if (cVar12 == '\x01') {
      if (cVar11 == '\0') {
        FUN_18016c640(*param_2,&PTR_s_C__Users_burne__cargo_registry_s_180261968);
        return 2;
      }
      cVar6 = cVar11 + -1;
    }
    *(char *)(lVar4 + 0xb5) = cVar6;
  }
  else {
    if (*(char *)(lVar4 + 0xb8) != '\x02') {
      FUN_1801d8880(lVar4 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar4 + 0xb8) = 1;
      goto LAB_1801781cd;
    }
    cVar12 = '\0';
    cVar11 = '\0';
  }
  uVar8 = *(ulonglong *)(lVar3 + 0x30);
  if ((uVar8 & 2) == 0) {
    bVar7 = 1;
    if ((uVar8 & 4) != 0) goto LAB_1801782d7;
    if ((uVar8 & 1) != 0) {
      if ((*(longlong *)(lVar3 + 0x28) == ((longlong *)*param_2)[1]) &&
         (*(longlong *)(lVar3 + 0x20) == *(longlong *)*param_2)) goto LAB_180178283;
      uVar8 = *(ulonglong *)(lVar3 + 0x30);
      do {
        LOCK();
        uVar1 = *(ulonglong *)(lVar3 + 0x30);
        bVar13 = uVar8 == uVar1;
        if (bVar13) {
          *(ulonglong *)(lVar3 + 0x30) = uVar8 & 0xfffffffffffffffe;
        }
        else {
          uVar8 = uVar1;
        }
        UNLOCK();
      } while (!bVar13);
      if ((uVar8 & 2) != 0) {
        LOCK();
        *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) | 1;
        UNLOCK();
        goto LAB_1801782cd;
      }
      (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x18))(*(undefined8 *)(lVar3 + 0x28));
    }
    puVar10 = *(undefined8 **)*param_2;
    uVar9 = (*(code *)*puVar10)(((undefined8 *)*param_2)[1]);
    *(undefined8 *)(lVar3 + 0x20) = uVar9;
    *(undefined8 **)(lVar3 + 0x28) = puVar10;
    uVar8 = *(ulonglong *)(lVar3 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar3 + 0x30);
      bVar13 = uVar8 == uVar1;
      if (bVar13) {
        *(ulonglong *)(lVar3 + 0x30) = uVar8 | 1;
      }
      else {
        uVar8 = uVar1;
      }
      UNLOCK();
    } while (!bVar13);
    if ((uVar8 & 2) == 0) {
LAB_180178283:
      if (cVar12 != '\0') {
        if (*(char *)(lVar4 + 0xb8) != '\x01') {
          if (*(char *)(lVar4 + 0xb8) == '\x02') {
            return 2;
          }
          FUN_1801d8880(lVar4 + 0x70,FUN_18016d130);
          *(undefined1 *)(lVar4 + 0xb8) = 1;
        }
        *(undefined1 *)(lVar4 + 0xb4) = 1;
        *(char *)(lVar4 + 0xb5) = cVar11;
      }
      return 2;
    }
  }
LAB_1801782cd:
  bVar7 = *(byte *)(lVar3 + 0x38);
  *(undefined1 *)(lVar3 + 0x38) = 0;
  bVar7 = bVar7 ^ 1;
LAB_1801782d7:
  plVar5 = (longlong *)*plVar2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      FUN_180162c50(plVar2);
    }
  }
  *plVar2 = 0;
  return bVar7;
}


