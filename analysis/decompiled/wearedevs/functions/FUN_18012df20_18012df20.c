/* FUN_18012df20 @ 18012df20 */

undefined8 FUN_18012df20(byte *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  undefined *puVar4;
  byte *local_38;
  byte **local_30;
  code *local_28;
  undefined4 local_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    if (param_1[1] == 0) {
      local_38 = (byte *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 8));
      local_28 = FUN_180131120;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar4 = &DAT_180243bb9;
    }
    else if (param_1[1] == 1) {
      local_38 = (byte *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 8));
      local_28 = FUN_180131120;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar4 = &DAT_180243bd7;
    }
    else {
      local_38 = (byte *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 8));
      local_28 = FUN_180131120;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar4 = &DAT_180243bf1;
    }
    break;
  case 1:
    if (param_1[1] == 0) {
      local_1c = *(undefined4 *)(param_1 + 4);
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar4 = &DAT_180243c0b;
    }
    else if (param_1[1] == 1) {
      local_1c = *(undefined4 *)(param_1 + 4);
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar4 = &DAT_180243c2d;
    }
    else {
      local_1c = *(undefined4 *)(param_1 + 4);
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar4 = &DAT_180243c4b;
    }
    local_28 = FUN_180131120;
    local_30 = (byte **)&local_1c;
    cVar1 = FUN_1801ef150(uVar2,uVar3,puVar4,&local_30);
    if (cVar1 != '\0') {
      return 1;
    }
    local_38 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      local_30 = &local_38;
      local_28 = (code *)&LAB_18008e550;
      cVar1 = FUN_1801ef150(uVar2,uVar3,&DAT_180243c69,&local_30);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    return 0;
  case 2:
    local_38 = (byte *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 4));
    local_28 = FUN_180131120;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_180243c70;
    break;
  case 3:
    local_38 = param_1 + 1;
    local_28 = (code *)&LAB_180131060;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_180243c83;
    break;
  case 4:
    uVar2 = FUN_1801e3c90(param_1 + 8);
    return uVar2;
  case 5:
    out((short)param_2,(char)(&switchD_18012df38::caseD_5)[*param_1] + ' ');
                    /* WARNING: Could not recover jumptable at 0x000180243d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulonglong)*(uint *)(unaff_RDI + -0x5e))();
    return uVar2;
  }
  local_30 = &local_38;
  uVar2 = FUN_1801ef150(uVar2,uVar3,puVar4,&local_30);
  return uVar2;
}


