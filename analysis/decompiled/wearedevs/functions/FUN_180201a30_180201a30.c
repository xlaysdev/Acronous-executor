/* FUN_180201a30 @ 180201a30 */

void FUN_180201a30(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_4;
  if (param_3 < param_1) {
    FUN_180201ac0();
    param_2 = param_3;
    param_3 = param_4;
  }
  uVar3 = uVar2;
  if ((param_2 <= param_3) && (param_2 < param_1)) {
    FUN_180201b10();
    param_3 = uVar2;
  }
  FUN_180201a70(param_2,param_3,uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


