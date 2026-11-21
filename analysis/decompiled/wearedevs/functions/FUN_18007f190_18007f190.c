/* FUN_18007f190 @ 18007f190 */

undefined1 * FUN_18007f190(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined1 local_24;
  
  uVar3 = param_3;
  uVar2 = FUN_180122670(param_2 + 0x500);
  if (uVar2 != 2) {
    if ((uVar2 & 1) != 0) {
      *param_1 = 5;
      return param_1;
    }
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0(&DAT_180211490,0x30,&PTR_s_C__Users_burne__cargo_registry_s_1802114c0);
    }
    FUN_18008da40(param_2 + 0x4c8);
    local_24 = 0;
    local_5c[0] = 0;
    local_54 = 0;
    local_4c = 0;
    local_3c = 0;
    local_34 = 0;
    local_2c = 0;
    local_44 = 1;
    local_40 = (int)uVar3;
    cVar1 = FUN_180153e10(param_2 + 0x420,local_5c);
    if (cVar1 != '\r') {
      *param_1 = 3;
      param_1[1] = cVar1;
      return param_1;
    }
  }
  FUN_1800b88b0(param_1,param_2,param_3);
  return param_1;
}


