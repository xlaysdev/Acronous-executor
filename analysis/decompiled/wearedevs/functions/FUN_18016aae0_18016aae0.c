/* FUN_18016aae0 @ 18016aae0 */

void FUN_18016aae0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261110);
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
  }
  else {
    FUN_180168500();
    lVar2 = *(longlong *)(param_1 + 8) + 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(longlong *)(param_1 + 8) = lVar2;
  if (param_5 == 1000000000) {
    FUN_180164a60();
  }
  else {
    FUN_180164640(param_4,param_3 + 0x1a0,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180260490);
    }
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
    if (*(longlong *)(param_1 + 0x30) == 0) break;
    lVar2 = *(longlong *)(param_1 + 0x30) + -1;
    *(longlong *)(param_1 + 0x30) = lVar2;
    lVar2 = lVar2 * 0x10;
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar2) + 8))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + lVar2));
    plVar1 = (longlong *)(param_1 + 0x18);
    *plVar1 = *plVar1 + 1;
    lVar2 = *plVar1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261128);
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("core missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_180261150);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


