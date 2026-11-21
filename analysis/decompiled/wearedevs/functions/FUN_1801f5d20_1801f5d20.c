/* FUN_1801f5d20 @ 1801f5d20 */

ulonglong FUN_1801f5d20(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  
  if (DAT_1802fd880 < 1) {
    return 0;
  }
  DAT_1802fd880 = DAT_1802fd880 + -1;
  uVar2 = FUN_1801f6090();
  if (DAT_1802fd8b0 == 2) {
    uVar5 = uVar2;
    FUN_1801f6240();
    FUN_1801f6040();
    FUN_1801f6450();
    DAT_1802fd8b0 = 0;
    FUN_1801f6380(uVar2);
    bVar3 = FUN_1801f63b0(param_1,0,param_3,param_4,uVar5);
    FUN_1801f6280();
    return (ulonglong)bVar3;
  }
  FUN_1801f63f0(7);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}


