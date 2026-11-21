/* FUN_1801ef790 @ 1801ef790 */

longlong * FUN_1801ef790(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined4 *local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  uVar3 = 1;
  if ((char)param_1[1] == '\0') {
    puVar1 = (undefined8 *)*param_1;
    if ((*(byte *)((longlong)puVar1 + 0x12) & 0x80) == 0) {
      if (*(char *)((longlong)param_1 + 9) != '\0') {
        cVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1,", ",2);
        uVar3 = 1;
        if (cVar2 != '\0') goto LAB_1801ef890;
      }
      uVar3 = (**(code **)(param_3 + 0x18))(param_2,puVar1);
    }
    else {
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        cVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1,"\n",1);
        uVar3 = 1;
        if (cVar2 != '\0') goto LAB_1801ef890;
      }
      local_29 = 1;
      local_68 = *(undefined4 *)puVar1;
      uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
      uStack_60 = *(undefined4 *)(puVar1 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
      local_58 = &local_29;
      local_38 = puVar1[2];
      local_48 = &local_68;
      local_40 = "";
      cVar2 = (**(code **)(param_3 + 0x18))(param_2,&local_48);
      if (cVar2 == '\0') {
        uVar3 = (**(code **)(local_40 + 0x18))(local_48,",\n",2);
      }
      else {
        uVar3 = 1;
      }
    }
  }
LAB_1801ef890:
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return param_1;
}


