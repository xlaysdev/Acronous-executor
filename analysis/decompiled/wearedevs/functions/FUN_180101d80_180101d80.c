/* FUN_180101d80 @ 180101d80 */

undefined8 * FUN_180101d80(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  void *pvVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  size_t sVar8;
  longlong *plVar9;
  undefined8 uVar10;
  size_t local_68;
  void *local_60;
  size_t local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 < 4) {
      uVar5 = 0;
      lVar7 = 0;
    }
    else {
      plVar9 = (longlong *)(param_2 + 0x10);
      uVar5 = 0;
      lVar7 = 0;
      do {
        lVar7 = lVar7 + *plVar9 + plVar9[3] + plVar9[6] + plVar9[9];
        uVar5 = uVar5 + 4;
        plVar9 = plVar9 + 0xc;
      } while ((param_3 & 0x7fffffffffffffc) != uVar5);
    }
    if ((param_3 & 3) != 0) {
      lVar6 = 0;
      do {
        lVar7 = lVar7 + *(longlong *)(param_2 + uVar5 * 0x18 + 0x10 + lVar6);
        lVar6 = lVar6 + 0x18;
      } while ((ulonglong)(((uint)param_3 & 3) << 3) * 3 != lVar6);
    }
  }
  sVar8 = lVar7 + param_3;
  if ((longlong)sVar8 < 0) {
    uVar10 = 0;
LAB_180101e35:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar10,sVar8);
  }
  if (sVar8 == 0) {
    local_60 = (void *)0x1;
  }
  else {
    FUN_180027490();
    uVar10 = 1;
    local_60 = (void *)thunk_FUN_1801d32d0(sVar8,1);
    if (local_60 == (void *)0x0) goto LAB_180101e35;
  }
  lVar7 = param_2 + param_3 * 0x18;
  local_58 = 0;
  local_68 = sVar8;
  sVar8 = local_58;
  for (; local_58 = sVar8, param_2 != lVar7; param_2 = param_2 + 0x18) {
    uVar5 = *(ulonglong *)(param_2 + 0x10);
    if (sVar8 == local_68) {
      FUN_180201770(&local_68);
    }
    *(char *)((longlong)local_60 + sVar8) = (char)uVar5;
    local_58 = sVar8 + 1;
    pvVar1 = *(void **)(param_2 + 8);
    if (local_68 - local_58 < uVar5) {
      FUN_1801f6a80(&local_68,local_58,uVar5,1,1);
    }
    sVar8 = local_58;
    memcpy((void *)((longlong)local_60 + local_58),pvVar1,uVar5);
    sVar8 = sVar8 + uVar5;
  }
  lVar7 = sVar8 + 10;
  cVar3 = FUN_1801f2f10(lVar7,4);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` valueLayoutError",0x2b,&local_49,
                  &DAT_180239768,&PTR_s_C__Users_burne__cargo_registry_s_180239828);
  }
  FUN_180027490();
  piVar4 = (int *)thunk_FUN_1801d32d0(lVar7,4);
  pvVar1 = local_60;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(4,lVar7);
  }
  *piVar4 = (int)local_58 + 6;
  piVar4[1] = 2;
  *(short *)(piVar4 + 2) = (short)local_58;
  if (sVar8 != local_58) {
    FUN_180201990(sVar8,local_58,&PTR_s_C__Users_burne__cargo_registry_s_180239840);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  memcpy((void *)((longlong)piVar4 + 10),local_60,sVar8);
  *param_1 = 4;
  param_1[1] = lVar7;
  param_1[2] = piVar4;
  if (local_68 != 0) {
    thunk_FUN_1801d3330(pvVar1,local_68,1);
  }
  return param_1;
}


