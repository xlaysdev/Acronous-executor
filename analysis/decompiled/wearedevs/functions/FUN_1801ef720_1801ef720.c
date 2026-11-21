/* FUN_1801ef720 @ 1801ef720 */

void FUN_1801ef720(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    uVar2 = 1;
    if ((char)param_1[1] == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if ((*(byte *)((longlong)puVar1 + 0x12) & 0x80) == 0) {
        uVar4 = *puVar1;
        lVar3 = puVar1[1];
        puVar5 = &DAT_1802936be;
        uVar6 = 2;
      }
      else {
        uVar4 = *puVar1;
        lVar3 = puVar1[1];
        puVar5 = &DAT_1802936bd;
        uVar6 = 1;
      }
      uVar2 = (**(code **)(lVar3 + 0x18))(uVar4,puVar5,uVar6);
    }
    *(undefined1 *)(param_1 + 1) = uVar2;
  }
  return;
}


