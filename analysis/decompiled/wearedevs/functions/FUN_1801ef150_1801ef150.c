/* FUN_1801ef150 @ 1801ef150 */

undefined8 FUN_1801ef150(undefined8 param_1,longlong param_2,ushort *param_3,ulonglong param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ushort *puVar7;
  
  if ((param_4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001801ef2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(param_2 + 0x18))(param_1,param_3,param_4 >> 1);
    return uVar5;
  }
  bVar1 = (byte)*param_3;
  if (bVar1 != 0) {
    pcVar3 = *(code **)(param_2 + 0x18);
    uVar6 = 0;
    do {
      puVar7 = (ushort *)((longlong)param_3 + 1);
      if ((char)bVar1 < '\0') {
        if (bVar1 == 0x80) {
          uVar2 = *(ushort *)((longlong)param_3 + 1);
          cVar4 = (*pcVar3)(param_1);
          if (cVar4 != '\0') {
            return 1;
          }
          param_3 = (ushort *)((longlong)param_3 + (ulonglong)uVar2 + 3);
        }
        else {
          if (bVar1 != 0xc0) {
            if ((bVar1 & 1) != 0) {
              puVar7 = (ushort *)((longlong)param_3 + 5);
            }
            if ((bVar1 & 2) != 0) {
              puVar7 = puVar7 + 1;
            }
            if ((bVar1 & 4) != 0) {
              puVar7 = puVar7 + 1;
            }
            if ((bVar1 & 8) != 0) {
              uVar6 = (ulonglong)*puVar7;
              puVar7 = puVar7 + 1;
            }
          }
          cVar4 = (**(code **)(param_4 + 8 + uVar6 * 0x10))(*(undefined8 *)(param_4 + uVar6 * 0x10))
          ;
          if (cVar4 != '\0') {
            return 1;
          }
          uVar6 = uVar6 + 1;
          param_3 = puVar7;
        }
      }
      else {
        cVar4 = (*pcVar3)(param_1);
        if (cVar4 != '\0') {
          return 1;
        }
        param_3 = (ushort *)((longlong)puVar7 + (ulonglong)bVar1);
      }
      bVar1 = (byte)*param_3;
    } while (bVar1 != 0);
  }
  return 0;
}


