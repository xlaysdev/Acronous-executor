/* FUN_1801ef4e0 @ 1801ef4e0 */

void FUN_1801ef4e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 local_19;
  
  uVar2 = 1;
  if ((char)param_1[1] == '\0') {
    puVar1 = (undefined8 *)*param_1;
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      uVar5 = *puVar1;
      lVar4 = puVar1[1];
      puVar6 = &DAT_1802936b0;
      uVar7 = 7;
    }
    else if ((*(byte *)((longlong)puVar1 + 0x12) & 0x80) == 0) {
      uVar5 = *puVar1;
      lVar4 = puVar1[1];
      puVar6 = &DAT_1802936b7;
      uVar7 = 6;
    }
    else {
      local_19 = 1;
      local_38 = *(undefined4 *)puVar1;
      uStack_34 = *(undefined4 *)((longlong)puVar1 + 4);
      uStack_30 = *(undefined4 *)(puVar1 + 1);
      uStack_2c = *(undefined4 *)((longlong)puVar1 + 0xc);
      local_28 = &local_19;
      cVar3 = FUN_1801f4f90(&local_38,"..\n",3);
      if (cVar3 != '\0') {
        uVar2 = 1;
        goto LAB_1801ef533;
      }
      uVar5 = *puVar1;
      lVar4 = puVar1[1];
      puVar6 = &DAT_1802936bd;
      uVar7 = 1;
    }
    uVar2 = (**(code **)(lVar4 + 0x18))(uVar5,puVar6,uVar7);
  }
LAB_1801ef533:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}


