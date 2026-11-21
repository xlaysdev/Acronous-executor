/* FUN_18015bd90 @ 18015bd90 */

longlong * FUN_18015bd90(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  byte bVar6;
  byte unaff_R15B;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((int)param_2 == 0) {
    uVar5 = param_3[2];
    uVar4 = 0x12;
  }
  else {
    bVar6 = (byte)(param_2 >> 0x20);
    if ((param_2 & 0x800000000) == 0) {
LAB_18015bdc6:
      lVar1 = *param_3;
      lVar2 = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      *param_1 = lVar1;
      param_1[1] = lVar2;
      *(int *)(param_1 + 4) = (int)param_2;
      *(byte *)((longlong)param_1 + 0x24) = bVar6 & 9;
      *(byte *)((longlong)param_1 + 0x25) = (bVar6 & 8) >> 3;
      *(byte *)((longlong)param_1 + 0x26) = unaff_R15B;
      return param_1;
    }
    uVar5 = param_3[2];
    uVar4 = 0xd;
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      unaff_R15B = *(byte *)param_3[1];
      if (unaff_R15B < uVar5) {
        param_3[2] = uVar5 - 1;
        param_3[1] = (longlong)((byte *)param_3[1] + 1);
        uVar3 = ~(ulonglong)unaff_R15B + uVar5;
        if (uVar3 < uVar5 - 1) {
          if ((undefined *)*param_3 == PTR_PTR_1802fd540 ||
              (undefined *)*param_3 == PTR_PTR_1802fd538) {
            local_40 = param_3;
            FUN_1801b3c20(&local_60,param_3,uVar3);
            (**(code **)(local_60 + 0x20))(local_48,local_58,local_50);
            param_3 = local_40;
          }
          else {
            param_3[2] = uVar3;
          }
        }
        goto LAB_18015bdc6;
      }
    }
  }
  *(undefined1 *)param_1 = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x25) = 2;
  (**(code **)(*param_3 + 0x20))(param_3[3],param_3[1],uVar5);
  return param_1;
}


