/* FUN_1801f44f0 @ 1801f44f0 */

void FUN_1801f44f0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10) & 0x200000;
  uVar3 = uVar1 >> 0x15;
  pcVar4 = (char *)0x1;
  if (uVar1 != 0) {
    pcVar4 = "+";
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulonglong)uVar1;
  if (*param_1 != 0) {
    FUN_1801f3d50(param_2,*param_1,uVar2,100000000,pcVar4,uVar3,&DAT_180294627,1);
    return;
  }
  if (999999 < uVar1) {
    FUN_1801f3d50(param_2,uVar2 / 1000000,uVar1 + (int)(uVar2 / 1000000) * -1000000,100000,pcVar4,
                  uVar3,&DAT_180294625,2);
    return;
  }
  if (uVar1 < 1000) {
    FUN_1801f3d50(param_2,uVar2,0,1,pcVar4,uVar3,&DAT_180294620,2);
    return;
  }
  FUN_1801f3d50(param_2,uVar2 / 1000,uVar1 + (int)(uVar2 / 1000) * -1000,100,pcVar4,uVar3,
                &DAT_180294622,3);
  return;
}


