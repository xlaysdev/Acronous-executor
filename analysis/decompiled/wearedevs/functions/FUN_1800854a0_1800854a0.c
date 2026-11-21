/* FUN_1800854a0 @ 1800854a0 */

void FUN_1800854a0(undefined8 *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  int **local_b8;
  undefined1 *local_b0;
  undefined *local_a8;
  int ***local_a0;
  undefined **local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined ***pppuStack_80;
  undefined8 local_78;
  longlong local_70;
  int *local_68;
  undefined8 *local_60;
  undefined **local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_1;
  lVar10 = FUN_180152e90(param_3);
  puVar7 = PTR_PTR_1802fc8c8;
  local_50 = *(int *)(lVar10 + 0x78);
  pcVar2 = (char *)*param_4;
  uVar12 = param_4[2];
  uVar3 = param_4[3];
  puVar4 = (undefined4 *)param_4[4];
  uVar5 = param_4[5];
  cVar8 = *pcVar2;
  ppuVar11 = (undefined **)param_4[1];
  if (cVar8 == '\x01') {
    if ((*param_2 == 1) && (piVar6 = *(int **)(param_2 + 2), piVar6 <= *(int **)(param_2 + 0x14))) {
      local_58 = &PTR_LAB_18020de18;
      if (*(ulonglong *)PTR_DAT_1802fd448 < 4) {
        bVar1 = PTR_PTR_1802fc8c8[0x10];
        uVar9 = (uint)bVar1;
        if (((bVar1 - 1 < 2) ||
            ((bVar1 != 0 && (uVar9 = FUN_1801faaf0(PTR_PTR_1802fc8c8), (char)uVar9 != '\0')))) &&
           (cVar8 = FUN_1801601d0(*(undefined8 *)puVar7,uVar9), cVar8 != '\0')) {
          lVar10 = *(longlong *)puVar7;
          local_70 = lVar10 + 0x30;
          local_b8 = &local_68;
          local_b0 = &LAB_1800273d0;
          local_a8 = &DAT_18020e49e;
          local_a0 = &local_b8;
          local_98 = &local_a8;
          local_90 = &DAT_18020d788;
          local_88 = 1;
          pppuStack_80 = &local_98;
          local_78 = 1;
          local_68 = piVar6;
          FUN_180160ae0(lVar10,&local_88);
        }
      }
      local_4c = 0;
      goto LAB_180085576;
    }
    local_58 = (undefined **)param_4[1];
    FUN_180153dc0(param_2);
    cVar8 = *pcVar2;
    ppuVar11 = local_58;
  }
  FUN_180095f80(uVar12,*puVar4,cVar8,uVar5,param_3,param_2,uVar3);
  FUN_180159750(ppuVar11,param_3,param_2);
  uVar12 = FUN_180152f00(param_3);
  uVar12 = FUN_180132130(uVar12);
  local_4c = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
  local_58 = (undefined **)0x0;
LAB_180085576:
  local_88 = *param_3;
  pppuStack_80 = (undefined ***)param_3[1];
  FUN_1801537a0(param_2,&local_88,local_50 != 1000000000);
  *local_60 = local_58;
  local_60[1] = &DAT_18020e4c8;
  local_60[2] = 0x18;
  local_60[3] = 0;
  *(undefined4 *)(local_60 + 4) = 0xb;
  return;
}


