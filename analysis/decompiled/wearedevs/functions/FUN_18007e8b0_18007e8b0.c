/* FUN_18007e8b0 @ 18007e8b0 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 * FUN_18007e8b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  uint *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined4 *unaff_RDI;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  puVar6 = &switchD_18007e8ec::caseD_4;
  local_60 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 3)) {
  case 0:
    break;
  case 2:
    FUN_180201c80(&PTR_s_C__Users_burne__cargo_registry_s_18020d280);
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_180201c60(&PTR_s_C__Users_burne__cargo_registry_s_18020d280);
  case 3:
    goto switchD_18007e8ec_caseD_3;
  default:
    out(0xff,(&switchD_18007e8ec::caseD_4)[*(byte *)(param_2 + 3)] + 0x8020d584);
    *unaff_RDI = *(undefined4 *)param_1;
    piVar5 = (int *)(*(code *)0x10c20bc98)();
    *piVar5 = *piVar5 + 1;
    cVar2 = (char)piVar5;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)puVar6 = (char)*puVar6 + cVar2;
    iVar3 = (int)piVar5;
    *puVar6 = *puVar6 + iVar3;
    *puVar6 = *puVar6 + iVar3;
    *puVar6 = *puVar6 + iVar3;
    *puVar6 = *puVar6 + iVar3;
    *puVar6 = *puVar6 + iVar3;
    *puVar6 = *puVar6 + iVar3;
    *puVar6 = *puVar6 + iVar3;
    *piVar5 = *piVar5 + iVar3;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)puVar6 = (char)*puVar6 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)piVar5 = (char)*piVar5 + cVar2;
    *(char *)(param_2 + 10) = *(char *)(param_2 + 10) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = FUN_18010ec60((longlong)param_2 + 0x19,*param_2,param_2[1]);
  local_60[2] = uVar8;
switchD_18007e8ec_caseD_3:
  local_58 = local_60 + 2;
  FUN_18010e6b0(&local_90,local_58,param_3);
  if ((char)local_90 == '\0') {
    thunk_FUN_180178080(local_58);
    uVar8 = *local_58;
    cVar2 = FUN_180177ca0(uVar8);
    if (cVar2 != '\0') {
      FUN_1801776a0(uVar8);
    }
    if (local_88 == 0) {
      local_90 = local_80;
      FUN_180027490();
      plVar4 = (longlong *)thunk_FUN_1801d32d0(8,8);
      if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,8);
      }
      *plVar4 = local_80;
      uVar8 = 1;
      ppuVar7 = &PTR_FUN_18020d2b8;
    }
    else {
      FUN_180027490();
      plVar4 = (longlong *)thunk_FUN_1801d32d0(0x20);
      if (plVar4 == (longlong *)0x0) {
        local_58 = (undefined8 *)local_78;
        local_68 = local_88;
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      *plVar4 = local_88;
      plVar4[1] = local_80;
      plVar4[2] = local_78;
      plVar4[3] = lStack_70;
      ppuVar7 = &PTR_LAB_18020d310;
      uVar8 = 0;
    }
    *param_1 = uVar8;
    param_1[1] = plVar4;
    param_1[2] = ppuVar7;
    uVar1 = 1;
  }
  else {
    *param_1 = 2;
    uVar1 = 3;
  }
  *(undefined1 *)(local_60 + 3) = uVar1;
  return param_1;
}


