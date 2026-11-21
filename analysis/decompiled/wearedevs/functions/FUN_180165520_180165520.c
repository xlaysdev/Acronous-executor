/* FUN_180165520 @ 180165520 */

void FUN_180165520(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_1802604a8);
  }
  *param_1 = -1;
  if (param_1[3] == 0) {
    lVar2 = param_2[1];
  }
  else {
    lVar3 = param_1[3] * 0x10;
    lVar2 = param_2[1];
    if ((*(undefined8 **)(param_1[2] + -0x10 + lVar3) == (undefined8 *)*param_2) &&
       (*(longlong *)(param_1[2] + -8 + lVar3) == lVar2)) {
      lVar2 = 0;
      goto LAB_1801655c7;
    }
  }
  uVar1 = (**(code **)*param_2)(lVar2);
  lVar2 = param_1[3];
  if (lVar2 == param_1[1]) {
    FUN_1801fb300(param_1 + 1);
  }
  lVar3 = param_1[2];
  *(undefined8 *)(lVar3 + lVar2 * 0x10) = uVar1;
  *(longlong **)(lVar3 + 8 + lVar2 * 0x10) = param_2;
  param_1[3] = lVar2 + 1;
  lVar2 = *param_1 + 1;
LAB_1801655c7:
  *param_1 = lVar2;
  return;
}


