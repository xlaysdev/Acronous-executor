/* FUN_1801310a0 @ 1801310a0 */

void FUN_1801310a0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint local_2c;
  undefined1 local_28 [24];
  
  uVar1 = *param_1;
  uVar3 = (ulonglong)uVar1;
  if (uVar3 < 0xe) {
    FUN_1801f0c50(param_2,&DAT_180247498 + *(int *)(&DAT_180247498 + uVar3 * 4),
                  *(undefined8 *)(&DAT_180247428 + uVar3 * 8));
    return;
  }
  FUN_1801ef930(local_28,param_2,"Reason",6);
  local_2c = uVar1;
  uVar2 = FUN_1801ef320(local_28,&local_2c,&DAT_180246f20);
  FUN_1801ef450(uVar2);
  return;
}


