/* FUN_1801eff20 @ 1801eff20 */

ulonglong FUN_1801eff20(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       longlong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined8 local_78;
  longlong local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  char *local_58;
  undefined8 local_50;
  undefined1 local_41;
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  pcVar3 = *(code **)(lVar2 + 0x18);
  cVar4 = (*pcVar3)(uVar1);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar4 != '\0') goto LAB_1801eff55;
  if ((*(byte *)((longlong)param_1 + 0x12) & 0x80) == 0) {
    cVar4 = (*pcVar3)(uVar1,"(",1);
    if (cVar4 != '\0') goto LAB_1801eff55;
    cVar4 = (**(code **)(param_5 + 0x18))(param_4,param_1);
  }
  else {
    cVar4 = (*pcVar3)(uVar1,"(\n",2);
    if (cVar4 != '\0') goto LAB_1801eff55;
    local_41 = 1;
    local_68 = &local_41;
    local_50 = param_1[2];
    local_60 = &local_78;
    local_58 = "";
    local_78 = uVar1;
    local_70 = lVar2;
    cVar4 = (**(code **)(param_5 + 0x18))(param_4,&local_60);
    if (cVar4 != '\0') goto LAB_1801eff55;
    cVar4 = (**(code **)(local_58 + 0x18))(local_60,",\n",2);
  }
  if ((cVar4 == '\0') &&
     (((param_3 != 0 || ((*(byte *)((longlong)param_1 + 0x12) & 0x80) != 0)) ||
      (cVar4 = (**(code **)(param_1[1] + 0x18))(*param_1,",",1), cVar4 == '\0')))) {
    uVar5 = (**(code **)(param_1[1] + 0x18))(*param_1,")",1);
    uVar6 = (ulonglong)uVar5;
  }
LAB_1801eff55:
  return uVar6 & 0xffffffff;
}


