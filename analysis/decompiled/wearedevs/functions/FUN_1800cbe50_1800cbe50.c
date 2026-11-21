/* FUN_1800cbe50 @ 1800cbe50 */

undefined8 FUN_1800cbe50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined8 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 **local_50;
  undefined1 *local_48;
  
  if (param_1[1] != 0) {
    puVar5 = (uint *)*param_1;
    puVar7 = puVar5 + param_1[1] * 4;
    uVar6 = param_1[2];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    do {
      if (uVar6 == 0) {
        return 0;
      }
      uVar4 = (ulonglong)*puVar5;
      if (uVar6 <= *puVar5) {
        uVar4 = uVar6;
      }
      local_60 = *(undefined8 *)(puVar5 + 2);
      local_68 = &local_60;
      local_50 = &local_68;
      local_48 = &LAB_180075570;
      local_58 = uVar4;
      cVar3 = FUN_1801ef150(uVar1,uVar2,&DAT_18020ce83,&local_50);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar6 = uVar6 - uVar4;
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar7);
  }
  return 0;
}


