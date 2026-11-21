/* FUN_1801ef590 @ 1801ef590 */

longlong *
FUN_1801ef590(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined4 *local_60;
  char *local_58;
  undefined8 local_50;
  undefined1 local_41;
  
  uVar4 = 1;
  if ((char)param_1[1] == '\0') {
    puVar2 = (undefined8 *)*param_1;
    bVar1 = *(byte *)((longlong)param_1 + 9);
    if ((*(byte *)((longlong)puVar2 + 0x12) & 0x80) == 0) {
      pcVar5 = " { :  {\n { .. }, .. }} }[]";
      if (bVar1 != 0) {
        pcVar5 = ", ";
      }
      cVar3 = (**(code **)(puVar2[1] + 0x18))(*puVar2,pcVar5,bVar1 ^ 3);
      if (((cVar3 == '\0') &&
          (cVar3 = (**(code **)(puVar2[1] + 0x18))(*puVar2,param_2,param_3), cVar3 == '\0')) &&
         (cVar3 = (**(code **)(puVar2[1] + 0x18))(*puVar2,&DAT_1802936ab,2), cVar3 == '\0')) {
        uVar4 = (**(code **)(param_5 + 0x18))(param_4,puVar2);
      }
    }
    else {
      if (bVar1 == 0) {
        cVar3 = (**(code **)(puVar2[1] + 0x18))(*puVar2,&DAT_1802936ad,3);
        uVar4 = 1;
        if (cVar3 != '\0') goto LAB_1801ef5b1;
      }
      uVar4 = 1;
      local_41 = 1;
      local_78 = *(undefined4 *)puVar2;
      uStack_74 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_70 = *(undefined4 *)(puVar2 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
      local_68 = &local_41;
      local_50 = puVar2[2];
      local_60 = &local_78;
      local_58 = "";
      cVar3 = FUN_1801f4f90(local_60,param_2,param_3);
      if (((cVar3 == '\0') && (cVar3 = FUN_1801f4f90(&local_78,&DAT_1802936ab,2), cVar3 == '\0')) &&
         (cVar3 = (**(code **)(param_5 + 0x18))(param_4,&local_60), cVar3 == '\0')) {
        uVar4 = (**(code **)(local_58 + 0x18))(local_60,",\n",2);
      }
    }
  }
LAB_1801ef5b1:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return param_1;
}


