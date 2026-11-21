/* FUN_180096ab0 @ 180096ab0 */

longlong *
FUN_180096ab0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_9c;
  int *local_98;
  code *local_90;
  longlong local_88;
  undefined ***pppuStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined **local_60;
  undefined *local_58;
  undefined *local_50;
  int **local_48;
  
  if (*(int *)(param_3 + 0x30) == 1) {
    *(bool *)(param_2 + 0x71) = *(int *)(param_3 + 0x34) != 0;
  }
  if (*(int *)(param_3 + 0x18) == 1) {
    uVar6 = *(uint *)(param_3 + 0x1c);
    uVar3 = *(uint *)(param_2 + 0x6c);
    iVar10 = uVar6 - uVar3;
    *(uint *)(param_2 + 0x6c) = uVar6;
    puVar5 = PTR_PTR_1802fc5c0;
    cVar8 = (uVar6 >= uVar3 && iVar10 != 0) - (uVar6 < uVar3);
    if (cVar8 == -1) {
      local_9c = uVar3 - uVar6;
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar2 = PTR_PTR_1802fc5c0[0x10];
        uVar6 = (uint)bVar2;
        if (((bVar2 - 1 < 2) ||
            ((bVar2 != 0 && (uVar6 = FUN_1801faaf0(PTR_PTR_1802fc5c0), (char)uVar6 != '\0')))) &&
           (cVar8 = FUN_1801601d0(*(undefined8 *)puVar5,uVar6), cVar8 != '\0')) {
          lVar4 = *(longlong *)puVar5;
          lStack_70 = lVar4 + 0x30;
          local_98 = &local_9c;
          local_90 = FUN_1801ee6c0;
          local_50 = &DAT_18020f45c;
          local_48 = &local_98;
          local_60 = &local_50;
          local_58 = &DAT_18020f2b0;
          local_88 = 1;
          pppuStack_80 = &local_60;
          local_78 = 1;
          FUN_180160ae0(lVar4,&local_88);
        }
      }
      local_98 = (int *)((ulonglong)local_98 & 0xffffffff00000000);
      FUN_1800ec8c0(&local_88,param_5,&local_9c,&local_98);
      if ((char)local_88 != '\x03') {
        param_1[4] = local_68;
        param_1[2] = local_78;
        param_1[3] = lStack_70;
        *param_1 = local_88;
        param_1[1] = (longlong)pppuStack_80;
        return param_1;
      }
      FUN_180064e30(param_2 + 8,(ulonglong)local_98 & 0xffffffff,param_5,param_6);
    }
    else if ((cVar8 == '\x01') && (uVar12 = *(ulonglong *)(param_5 + 0x58), uVar12 != 0)) {
      uVar11 = 0;
      do {
        if (*(ulonglong *)(param_5 + 0x38) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180216588);
        }
        uVar1 = *(undefined8 *)(*(longlong *)(param_5 + 0x30) + 8 + uVar11 * 0x10);
        local_88 = param_5;
        pppuStack_80 = (undefined ***)CONCAT44((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
        iVar9 = iVar10;
        uVar7 = FUN_180096d50(param_2,iVar10,param_4,&local_88,param_6,param_7);
        if ((uVar7 & 1) != 0) {
          *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
          *(int *)((longlong)param_1 + 4) = iVar9;
          param_1[1] = (longlong)&PTR_LAB_180216400;
          param_1[2] = 1;
          *(undefined2 *)param_1 = 0x101;
          return param_1;
        }
        uVar11 = (uVar11 + 1) - (ulonglong)(*(ulonglong *)(param_5 + 0x58) < uVar12);
        uVar12 = uVar12 - (*(ulonglong *)(param_5 + 0x58) < uVar12);
      } while (uVar11 < uVar12);
    }
  }
  if (*(char *)(param_3 + 8) != '\0') {
    *(bool *)(param_2 + 0x70) = *(int *)(param_3 + 0xc) != 0;
  }
  *(undefined1 *)param_1 = 3;
  return param_1;
}


