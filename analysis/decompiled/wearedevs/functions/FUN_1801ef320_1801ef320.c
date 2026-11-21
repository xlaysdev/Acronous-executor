/* FUN_1801ef320 @ 1801ef320 */

longlong * FUN_1801ef320(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined4 *local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  lVar1 = *param_1;
  uVar4 = 1;
  if ((char)param_1[2] == '\0') {
    puVar2 = (undefined8 *)param_1[1];
    if ((*(byte *)((longlong)puVar2 + 0x12) & 0x80) == 0) {
      pcVar5 = ", ";
      if (lVar1 == 0) {
        pcVar5 = "(";
      }
      cVar3 = (**(code **)(puVar2[1] + 0x18))(*puVar2,pcVar5,(lVar1 != 0) + '\x01');
      uVar4 = 1;
      if (cVar3 == '\0') {
        uVar4 = (**(code **)(param_3 + 0x18))(param_2,puVar2);
      }
    }
    else {
      if (lVar1 == 0) {
        cVar3 = (**(code **)(puVar2[1] + 0x18))(*puVar2,"(\n",2);
        uVar4 = 1;
        if (cVar3 != '\0') goto LAB_1801ef33f;
      }
      local_31 = 1;
      local_68 = *(undefined4 *)puVar2;
      uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_60 = *(undefined4 *)(puVar2 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
      local_58 = &local_31;
      local_40 = puVar2[2];
      local_50 = &local_68;
      local_48 = "";
      cVar3 = (**(code **)(param_3 + 0x18))(param_2,&local_50);
      if (cVar3 == '\0') {
        uVar4 = (**(code **)(local_48 + 0x18))(local_50,",\n",2);
      }
      else {
        uVar4 = 1;
      }
    }
  }
LAB_1801ef33f:
  *(undefined1 *)(param_1 + 2) = uVar4;
  *param_1 = lVar1 + 1;
  return param_1;
}


