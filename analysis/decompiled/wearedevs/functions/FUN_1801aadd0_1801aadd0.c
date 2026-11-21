/* FUN_1801aadd0 @ 1801aadd0 */

longlong * FUN_1801aadd0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  undefined1 local_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  byte *local_68;
  undefined *local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = (byte *)param_2[1];
  local_60 = (undefined *)param_2[2];
  if (local_60 == (undefined *)0x0) {
    uVar5 = 10;
    goto LAB_1801aae60;
  }
  uVar5 = 9;
  if ((undefined *)0xfffe < local_60) goto LAB_1801aae60;
  uVar4 = (ulonglong)local_68 >> 8;
  bVar1 = *local_68;
  if (local_60 != (undefined *)0x1 || bVar1 != 0x2a) {
    uVar5 = 8;
    if ((bVar1 < 0x40) && ((0x8000800800000000U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) != 0)) {
      puVar7 = (undefined *)0x0;
      puVar8 = &DAT_180282b98;
      cVar9 = '\0';
LAB_1801aaec8:
      switch((&DAT_180282b98)[local_68[(longlong)puVar7]]) {
      case 0:
        goto switchD_1801aaee3_caseD_0;
      case 1:
        puVar8 = puVar7 + 1;
        if (local_60 <= puVar8) goto LAB_1801aaf29;
        goto LAB_1801aaf0b;
      case 2:
        puVar8 = (undefined *)((ulonglong)puVar7 & 0xffffffff);
        bVar3 = true;
        puVar7 = (undefined *)0xffff;
        goto LAB_1801aaf38;
      case 3:
        goto switchD_1801aaee3_caseD_3;
      default:
        goto switchD_1801aaee3_default;
      }
    }
    goto LAB_1801aae60;
  }
  uVar6 = 0xffff;
  local_60 = (undefined *)0x1;
  goto LAB_1801aae2d;
switchD_1801aaee3_caseD_3:
  cVar9 = '\x01';
switchD_1801aaee3_caseD_0:
  puVar7 = puVar7 + 1;
  if (local_60 == puVar7) goto LAB_1801aaeeb;
  goto LAB_1801aaec8;
LAB_1801aaeeb:
  puVar7 = (undefined *)0xffff;
  goto LAB_1801aaf29;
switchD_1801aaee3_default:
  uVar5 = 0;
LAB_1801aae60:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *param_1 = 0;
  (**(code **)(*param_2 + 0x20))(param_2[3],local_68,local_60);
  return param_1;
  while (puVar8 = puVar8 + 1, local_60 != puVar8) {
LAB_1801aaf0b:
    cVar2 = (&DAT_180282c98)[local_68[(longlong)puVar8]];
    if (cVar2 != '\0') {
      if (cVar2 != '\x03') {
        if (cVar2 != '\x02') goto switchD_1801aaee3_default;
        bVar3 = true;
        goto LAB_1801aaf38;
      }
      cVar9 = '\x01';
    }
  }
LAB_1801aaf29:
  bVar3 = false;
LAB_1801aaf38:
  uVar6 = SUB82(puVar7,0);
  local_88 = SUB81(puVar8,0);
  uStack_87 = (undefined1)((ulonglong)puVar8 >> 8);
  uStack_84 = CONCAT31(uStack_84._1_3_,cVar9);
  local_48 = param_2;
  uStack_86 = uVar6;
  if ((!bVar3) ||
     (puVar8 = (undefined *)
               (ulonglong)((CONCAT21(uVar6,uStack_87) & 0xff) << 8 | (uint)puVar8 & 0xff),
     local_60 <= puVar8)) {
    if (cVar9 != '\0') goto LAB_1801ab035;
  }
  else if ((undefined *)*param_2 == PTR_PTR_1802fd540 || (undefined *)*param_2 == PTR_PTR_1802fd538)
  {
    local_39 = 1;
    FUN_1801b3c20(&local_88);
    local_39 = 1;
    (**(code **)(CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(uStack_87,local_88))) + 0x20))
              (local_70,local_80,local_78);
    if (cVar9 != '\0') {
      local_68 = (byte *)local_48[1];
      local_60 = (undefined *)local_48[2];
      goto LAB_1801ab035;
    }
    local_68 = (byte *)(ulonglong)*(byte *)(local_48 + 1);
    uVar4 = (ulonglong)*(uint7 *)((longlong)local_48 + 9);
    param_2 = local_48;
    local_60 = (undefined *)local_48[2];
  }
  else {
    param_2[2] = (longlong)puVar8;
    local_60 = puVar8;
    if (cVar9 != '\0') {
LAB_1801ab035:
      local_50 = *local_48;
      local_58 = local_48[3];
      FUN_1801f2ab0(&local_88,local_68,local_60);
      if (CONCAT22(uStack_86,CONCAT11(uStack_87,local_88)) == 1) {
        local_39 = 0;
        (**(code **)(local_50 + 0x20))(local_58,local_68,local_60);
LAB_1801ab0a2:
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 0;
        return param_1;
      }
      if (local_50 == 0) goto LAB_1801ab0a2;
      uVar4 = (ulonglong)local_68 >> 8;
      goto LAB_1801aae34;
    }
  }
LAB_1801aae2d:
  local_50 = *param_2;
  local_58 = param_2[3];
LAB_1801aae34:
  *param_1 = local_50;
  *(char *)(param_1 + 1) = (char)local_68;
  *(int *)((longlong)param_1 + 9) = (int)uVar4;
  *(char *)((longlong)param_1 + 0xf) = (char)(uVar4 >> 0x30);
  *(short *)((longlong)param_1 + 0xd) = (short)(uVar4 >> 0x20);
  param_1[2] = (longlong)local_60;
  param_1[3] = local_58;
  *(undefined2 *)(param_1 + 4) = uVar6;
  return param_1;
}


