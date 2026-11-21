/* FUN_180164b90 @ 180164b90 */

void FUN_180164b90(undefined8 *param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_1;
  *param_1 = param_2;
  if (*param_3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180263c18,0x3f,&PTR_s_C__Users_burne__cargo_registry_s_180260300);
  }
  lVar3 = FUN_1801845b0(param_3 + 8,param_4);
  if (lVar3 != 0) {
    FUN_180162ac0(lVar3);
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: cx.run(core).is_err()",0x27,
                  &PTR_s_C__Users_burne__cargo_registry_s_180260340);
  }
  lVar3 = *(longlong *)(param_3 + 0x20);
  while( true ) {
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180260490);
    }
    param_3[0x20] = -1;
    param_3[0x21] = -1;
    param_3[0x22] = -1;
    param_3[0x23] = -1;
    param_3[0x24] = -1;
    param_3[0x25] = -1;
    param_3[0x26] = -1;
    param_3[0x27] = -1;
    if (*(longlong *)(param_3 + 0x38) == 0) break;
    lVar3 = *(longlong *)(param_3 + 0x38) + -1;
    *(longlong *)(param_3 + 0x38) = lVar3;
    lVar3 = lVar3 * 0x10;
    (**(code **)(*(longlong *)(*(longlong *)(param_3 + 0x30) + lVar3) + 8))
              (*(undefined8 *)(*(longlong *)(param_3 + 0x30) + 8 + lVar3));
    plVar1 = (longlong *)(param_3 + 0x20);
    *plVar1 = *plVar1 + 1;
    lVar3 = *plVar1;
  }
  param_3[0x20] = '\0';
  param_3[0x21] = '\0';
  param_3[0x22] = '\0';
  param_3[0x23] = '\0';
  param_3[0x24] = '\0';
  param_3[0x25] = '\0';
  param_3[0x26] = '\0';
  param_3[0x27] = '\0';
  *param_1 = uVar2;
  return;
}


