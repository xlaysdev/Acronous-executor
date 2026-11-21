/* FUN_1800ebfe0 @ 1800ebfe0 */

undefined8 * FUN_1800ebfe0(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 local_20;
  int iStack_18;
  int iStack_14;
  
  if (*param_2 == 1) {
    iStack_18 = param_2[1];
    iStack_14 = param_2[2];
    local_20 = param_3;
    if ((iStack_18 == param_2[3]) && (iStack_14 == param_2[4])) {
      lVar3 = FUN_180152e90(&local_20);
      if (*(int *)(lVar3 + 0xdc) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: N::next(&stream).is_none()",0x2c,
                      &PTR_s_C__Users_burne__cargo_registry_s_180216560);
      }
      *param_2 = 0;
    }
    else {
      lVar3 = FUN_180152f00(&local_20);
      uVar1 = *(undefined8 *)(lVar3 + 0xe0);
      bVar2 = *(byte *)(lVar3 + 0xdc);
      *(undefined4 *)(lVar3 + 0xdc) = 0;
      if ((bVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180216518);
      }
      *param_2 = 1;
      *(undefined8 *)(param_2 + 1) = uVar1;
    }
    lVar3 = FUN_180152f00(&local_20);
    *(undefined1 *)(lVar3 + 0x13a) = 0;
    *param_1 = local_20;
    param_1[1] = CONCAT44(iStack_14,iStack_18);
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}


