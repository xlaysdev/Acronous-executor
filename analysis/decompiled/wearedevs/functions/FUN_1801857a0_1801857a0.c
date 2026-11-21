/* FUN_1801857a0 @ 1801857a0 */

longlong * FUN_1801857a0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 unaff_R15B;
  
  if (*(char *)(param_3 + 0x71) == '\x01') {
    lVar6 = *param_1;
    *(undefined1 *)(param_3 + 0x71) = 0;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    LOCK();
    plVar1 = (longlong *)(lVar4 + 0xf8);
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((short)lVar6 == 1) {
      uVar11 = lVar4 + 0x28;
      uVar5 = FUN_18017bd40(lVar4 + 0xf8);
      if ((uVar5 & 1) != 0) {
        if (*(ulonglong *)(lVar4 + 0xa0) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar11,*(ulonglong *)(lVar4 + 0xa0),
                        &PTR_s_C__Users_burne__cargo_registry_s_1802626c0);
        }
        FUN_18017ca80(*(longlong *)(lVar4 + 0x98) + uVar11 * 0x10 + 8,lVar4 + 0x160);
      }
    }
  }
  *(longlong *)(param_3 + 0x20) = *(longlong *)(param_3 + 0x20) + 1;
  if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180265068);
  }
  param_1[1] = -1;
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_180181ad0();
    thunk_FUN_1801d3330(lVar6,0x78,8);
    lVar6 = param_1[1] + 1;
  }
  param_1[2] = param_3;
  param_1[1] = lVar6;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar6 = lVar4 + 0x70;
  if (*(char *)(lVar4 + 0xb8) == '\x01') {
LAB_180185925:
    cVar2 = *(char *)(lVar4 + 0xb4);
    unaff_R15B = *(undefined1 *)(lVar4 + 0xb5);
    *(undefined2 *)(lVar4 + 0xb4) = 0x8001;
  }
  else {
    if (*(char *)(lVar4 + 0xb8) != '\x02') {
      FUN_1801d8880(lVar6,FUN_18016d130);
      *(undefined1 *)(lVar4 + 0xb8) = 1;
      goto LAB_180185925;
    }
    cVar2 = '\x02';
  }
  (*(code *)**(undefined8 **)(param_2 + 0x10))(param_2);
  uVar11 = 0;
  while( true ) {
    if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180265080);
    }
    param_1[1] = -1;
    plVar1 = (longlong *)param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_180185a7c;
    lVar8 = *plVar1;
    *plVar1 = 0;
    if (lVar8 == 0) break;
    if (*(char *)(lVar4 + 0xb8) == '\x01') {
LAB_1801859f0:
      if ((*(char *)(lVar4 + 0xb4) == '\x01') && (*(char *)(lVar4 + 0xb5) == '\0')) {
        lVar9 = *(longlong *)(*param_1 + 0x10) + 0x10;
        lVar7 = plVar1[3];
        goto LAB_180185af0;
      }
    }
    else if (*(char *)(lVar4 + 0xb8) != '\x02') {
      FUN_1801d8880(lVar6,FUN_18016d130);
      *(undefined1 *)(lVar4 + 0xb8) = 1;
      goto LAB_1801859f0;
    }
    uVar11 = uVar11 + 1;
    if (2 < uVar11) {
      *(undefined1 *)(plVar1 + 0xe) = 0;
    }
    if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180265098);
    }
    param_1[1] = -1;
    lVar7 = param_1[2];
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_180181ad0();
      thunk_FUN_1801d3330(lVar7,0x78,8);
      lVar7 = param_1[1] + 1;
    }
    param_1[2] = (longlong)plVar1;
    param_1[1] = lVar7;
    (*(code *)**(undefined8 **)(lVar8 + 0x10))(lVar8);
  }
  *(byte *)(plVar1 + 0xe) = *(byte *)(*(longlong *)(*param_1 + 0x10) + 0x80) ^ 1;
LAB_180185a7c:
  if (cVar2 != '\x02') {
LAB_180185a85:
    if (*(char *)(lVar4 + 0xb8) != '\x01') {
      if (*(char *)(lVar4 + 0xb8) == '\x02') {
        return plVar1;
      }
      FUN_1801d8880(lVar6,FUN_18016d130);
      *(undefined1 *)(lVar4 + 0xb8) = 1;
    }
    *(char *)(lVar4 + 0xb4) = cVar2;
    *(undefined1 *)(lVar4 + 0xb5) = unaff_R15B;
  }
  return plVar1;
  while (lVar8 = FUN_18017ec80(plVar1 + 3,lVar8,uVar11 >> 0x20,(ulonglong)uVar3,lVar9), lVar8 != 0)
  {
LAB_180185af0:
    uVar11 = *(ulonglong *)(lVar7 + 0x18);
    uVar3 = *(uint *)(lVar7 + 0x20);
    iVar10 = (int)(uVar11 >> 0x20);
    if (uVar3 - iVar10 < 0x100) {
      *(longlong *)(*(longlong *)(lVar7 + 0x10) + ((ulonglong)uVar3 & 0xff) * 8) = lVar8;
      *(uint *)(lVar7 + 0x20) = uVar3 + 1;
      if (cVar2 == '\x02') {
        return plVar1;
      }
      goto LAB_180185a85;
    }
    if (iVar10 != (int)uVar11) {
      FUN_180173c90(lVar9,lVar8);
      break;
    }
  }
  goto LAB_180185a7c;
}


