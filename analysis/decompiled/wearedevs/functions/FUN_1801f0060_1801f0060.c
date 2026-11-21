/* FUN_1801f0060 @ 1801f0060 */

ulonglong FUN_1801f0060(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,longlong param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined4 *local_58;
  char *local_50;
  undefined8 local_48;
  undefined1 local_39;
  
  uVar1 = *param_1;
  pcVar2 = *(code **)(param_1[1] + 0x18);
  cVar3 = (*pcVar2)(uVar1);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar3 != '\0') goto LAB_1801f0090;
  if ((*(byte *)((longlong)param_1 + 0x12) & 0x80) == 0) {
    cVar3 = (*pcVar2)(uVar1,"(",1);
    if (cVar3 != '\0') goto LAB_1801f0090;
    cVar3 = (**(code **)(param_5 + 0x18))(param_4,param_1);
  }
  else {
    cVar3 = (*pcVar2)(uVar1,"(\n",2);
    if (cVar3 != '\0') goto LAB_1801f0090;
    local_39 = 1;
    local_78 = *(undefined4 *)param_1;
    uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_70 = *(undefined4 *)(param_1 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_68 = &local_39;
    local_48 = param_1[2];
    local_58 = &local_78;
    local_50 = "";
    cVar3 = (**(code **)(param_5 + 0x18))(param_4,&local_58);
    if (cVar3 != '\0') goto LAB_1801f0090;
    cVar3 = (**(code **)(local_50 + 0x18))(local_58,",\n",2);
  }
  if (cVar3 == '\0') {
    if ((*(byte *)((longlong)param_1 + 0x12) & 0x80) == 0) {
      cVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,", ",2);
      if (cVar3 != '\0') goto LAB_1801f0090;
      cVar3 = (**(code **)(param_7 + 0x18))(param_6,param_1);
    }
    else {
      local_39 = 1;
      local_78 = *(undefined4 *)param_1;
      uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_70 = *(undefined4 *)(param_1 + 1);
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_68 = &local_39;
      local_48 = param_1[2];
      local_58 = &local_78;
      local_50 = "";
      cVar3 = (**(code **)(param_7 + 0x18))(param_6,&local_58);
      if (cVar3 != '\0') goto LAB_1801f0090;
      cVar3 = (**(code **)(local_50 + 0x18))(local_58,",\n",2);
    }
    if (cVar3 == '\0') {
      uVar4 = (**(code **)(param_1[1] + 0x18))(*param_1,")",1);
      uVar5 = (ulonglong)uVar4;
    }
  }
LAB_1801f0090:
  return uVar5 & 0xffffffff;
}


