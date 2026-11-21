/* FUN_18008e030 @ 18008e030 */

void FUN_18008e030(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5,char *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 local_a0;
  undefined ***local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong *local_80;
  undefined1 *local_78;
  undefined *local_70;
  ulonglong **local_68;
  undefined **local_60;
  undefined *local_58;
  ulonglong local_50 [2];
  
  puVar7 = PTR_PTR_1802fc8d0;
  local_50[1] = 0xfffffffffffffffe;
  if (*param_6 == '\0') {
    uVar2 = *(undefined4 *)(param_6 + 8);
    cVar8 = param_6[1];
    if ((*param_5 == 1) &&
       (uVar3 = *(ulonglong *)(param_5 + 2), uVar3 <= *(ulonglong *)(param_5 + 0x14))) {
      if (*(ulonglong *)PTR_DAT_1802fd448 < 4) {
        bVar1 = PTR_PTR_1802fc8d0[0x10];
        uVar9 = (uint)bVar1;
        if (((bVar1 - 1 < 2) ||
            ((bVar1 != 0 && (uVar9 = FUN_1801faaf0(PTR_PTR_1802fc8d0), (char)uVar9 != '\0')))) &&
           (cVar8 = FUN_1801601d0(*(undefined8 *)puVar7,uVar9), cVar8 != '\0')) {
          lVar4 = *(longlong *)puVar7;
          local_88 = lVar4 + 0x30;
          local_80 = local_50;
          local_78 = &LAB_1800273d0;
          local_70 = &DAT_18020e4e0;
          local_68 = &local_80;
          local_60 = &local_70;
          local_58 = &DAT_18020d788;
          local_a0 = 1;
          local_98 = &local_60;
          local_90 = 1;
          local_50[0] = uVar3;
          FUN_180160ae0(lVar4,&local_a0);
        }
      }
      *(undefined2 *)param_1 = 0x101;
      *(undefined4 *)((longlong)param_1 + 4) = 0xb;
      param_1[1] = &PTR_LAB_18020de18;
      param_1[2] = &DAT_18020e4c8;
      param_1[3] = 0x18;
      param_1[4] = 0;
    }
    else {
      FUN_180153dc0(param_5);
      FUN_180095f80(param_2 + 0xa0,uVar2,cVar8,param_3,param_4,param_5,param_2 + 0x140);
      FUN_180159750(param_2,param_4,param_5);
      uVar10 = FUN_180152f00(param_4);
      FUN_180132130(uVar10);
      *(undefined1 *)param_1 = 3;
    }
  }
  else {
    param_1[4] = *(undefined8 *)(param_6 + 0x20);
    uVar10 = *(undefined8 *)param_6;
    uVar5 = *(undefined8 *)(param_6 + 8);
    uVar6 = *(undefined8 *)(param_6 + 0x18);
    param_1[2] = *(undefined8 *)(param_6 + 0x10);
    param_1[3] = uVar6;
    *param_1 = uVar10;
    param_1[1] = uVar5;
  }
  return;
}


