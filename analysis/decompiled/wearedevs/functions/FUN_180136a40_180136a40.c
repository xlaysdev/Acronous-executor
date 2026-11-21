/* FUN_180136a40 @ 180136a40 */

undefined8 * FUN_180136a40(undefined8 *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  cVar2 = (char)param_2[9];
  if (cVar2 != '\r') {
    *(undefined1 *)(param_2 + 9) = 0xc;
    if (cVar2 != '\f') {
      param_1[3] = param_2[0xb];
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x51);
      *(undefined8 *)((longlong)param_1 + 9) = *(undefined8 *)((longlong)param_2 + 0x49);
      *(undefined8 *)((longlong)param_1 + 0x11) = uVar5;
      *param_1 = 3;
      *(char *)(param_1 + 1) = cVar2;
      return param_1;
    }
    uVar3 = param_2[0xc];
    param_2[0xc] = 0;
    if (uVar3 != 0) {
      param_1[4] = param_2[0xf];
      uVar6 = param_2[0xe];
      param_1[2] = param_2[0xd];
      param_1[3] = uVar6;
      *param_1 = 4;
      param_1[1] = uVar3;
      return param_1;
    }
    uVar3 = param_2[0x10];
    param_2[0x10] = 0;
    if (uVar3 != 0) {
      param_1[4] = param_2[0x13];
      uVar6 = param_2[0x12];
      param_1[2] = param_2[0x11];
      param_1[3] = uVar6;
      *param_1 = 2;
      param_1[1] = uVar3;
      return param_1;
    }
    uVar3 = param_2[0x14];
    param_2[0x14] = 0;
    if (uVar3 != 0) {
      param_1[4] = param_2[0x17];
      uVar6 = param_2[0x16];
      param_1[2] = param_2[0x15];
      param_1[3] = uVar6;
      *param_1 = 5;
      param_1[1] = uVar3;
      return param_1;
    }
    uVar3 = param_2[0x18];
    param_2[0x18] = 0;
    if (uVar3 != 0) {
      param_1[4] = param_2[0x1b];
      uVar6 = param_2[0x1a];
      param_1[2] = param_2[0x19];
      param_1[3] = uVar6;
      *param_1 = 6;
      param_1[1] = uVar3;
      return param_1;
    }
    uVar3 = param_2[0x1c];
    *(undefined2 *)(param_2 + 0x1c) = 0;
    if ((short)uVar3 != 0) {
      *param_1 = 7;
      *(short *)(param_1 + 1) = (short)uVar3;
      return param_1;
    }
    FUN_1800663c0();
  }
  *(undefined1 *)(param_2 + 9) = 0xd;
  if ((int)*param_2 == 1) {
    uVar3 = param_2[1];
    uVar6 = param_2[4];
    if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar3,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_18025f2f0);
    }
    uVar4 = param_2[3];
    bVar7 = *(char *)(uVar4 + 0x10 + uVar3 * 0x48) == '\0';
    if (!bVar7) {
      uVar6 = *(ulonglong *)(uVar4 + uVar3 * 0x48 + 0x18);
    }
    *param_2 = (ulonglong)!bVar7;
    param_2[1] = uVar6;
    local_38 = *(longlong *)(uVar4 + 0x40 + uVar3 * 0x48);
    plVar1 = (longlong *)(uVar4 + 0x20 + uVar3 * 0x48);
    local_58 = *plVar1;
    lStack_50 = plVar1[1];
    plVar1 = (longlong *)(uVar4 + 0x30 + uVar3 * 0x48);
    local_48 = *plVar1;
    lStack_40 = plVar1[1];
    uVar5 = 0;
LAB_180136bd8:
    *param_1 = uVar5;
    param_1[1] = local_78;
    param_1[2] = lStack_70;
    param_1[3] = local_68;
    param_1[4] = lStack_60;
    param_1[5] = local_58;
    param_1[6] = lStack_50;
    param_1[7] = local_48;
    param_1[8] = lStack_40;
    param_1[9] = local_38;
  }
  else {
    plVar1 = (longlong *)param_2[6];
    if (plVar1 != (longlong *)param_2[8]) {
      param_2[6] = (ulonglong)(plVar1 + 0xd);
      if (*plVar1 != 2) {
        uVar3 = plVar1[1];
        local_68 = plVar1[10];
        lStack_60 = plVar1[0xb];
        local_78 = plVar1[8];
        lStack_70 = plVar1[9];
        local_58 = plVar1[3];
        lStack_50 = plVar1[4];
        local_48 = plVar1[5];
        lStack_40 = plVar1[6];
        local_38 = plVar1[7];
        *param_2 = (ulonglong)((uint)*plVar1 & 1);
        param_2[1] = uVar3;
        uVar5 = 1;
        goto LAB_180136bd8;
      }
    }
    *param_1 = 8;
  }
  return param_1;
}


