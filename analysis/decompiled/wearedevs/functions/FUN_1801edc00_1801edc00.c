/* FUN_1801edc00 @ 1801edc00 */

undefined8 FUN_1801edc00(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_38 [3];
  byte local_2c;
  byte local_2b;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  pcVar3 = *(code **)(lVar2 + 0x20);
  cVar4 = (*pcVar3)(uVar1,0x27);
  uVar5 = 1;
  if (cVar4 == '\0') {
    FUN_1801f2cc0(local_38,*param_1,0x101);
    if ((ulonglong)local_2b < 0x81) {
      cVar4 = (**(code **)(lVar2 + 0x18))
                        (uVar1,(longlong)local_38 + (ulonglong)local_2c,
                         (ulonglong)local_2b - (ulonglong)local_2c);
    }
    else {
      cVar4 = (*pcVar3)(uVar1,local_38[0]);
    }
    uVar5 = 1;
    if (cVar4 == '\0') {
      uVar5 = (*pcVar3)(uVar1,0x27);
    }
  }
  return uVar5;
}


