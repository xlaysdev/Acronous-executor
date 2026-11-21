/* FUN_18009e6c0 @ 18009e6c0 */

undefined8 * FUN_18009e6c0(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong local_450;
  undefined8 local_448;
  undefined1 local_440 [744];
  longlong local_158;
  undefined8 local_150;
  undefined1 local_148 [240];
  int *local_58;
  ulonglong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)(param_2 + 2);
  if (*param_2 != 1) {
    FUN_180090d40(param_1,puVar2);
    return param_1;
  }
  local_58 = param_2 + 4;
  local_50 = puVar2;
  while( true ) {
    lVar1 = *puVar2 - 2;
    if (*puVar2 < 2) {
      lVar1 = 1;
    }
    if (lVar1 != 0) break;
    lVar1 = *(longlong *)(param_2 + 0x7c);
    param_2[0x7c] = 3;
    param_2[0x7d] = 0;
    if (lVar1 == 3) goto LAB_18009e887;
    local_158 = lVar1;
    memcpy(&local_150,param_2 + 0x7e,0xf8);
    FUN_180093cc0(&local_450,local_58,&local_158);
    FUN_180099520(puVar2);
    puVar2 = local_50;
    memcpy(local_50,&local_450,0x2f8);
  }
  if (lVar1 == 1) {
    FUN_180090d40(&local_450,puVar2,param_3);
    if (local_450 == 4) {
      *param_1 = 4;
      return param_1;
    }
    if ((int)local_450 == 3) {
      *param_1 = 3;
      param_1[1] = local_448;
      return param_1;
    }
    memcpy(local_148,local_440,0x88);
    local_158 = local_450;
    local_150 = local_448;
    FUN_180099520(puVar2);
    *local_50 = 4;
    memcpy(param_1,&local_158,0x98);
    return param_1;
  }
  FUN_180200a26("polled after complete",0x15,&PTR_s_C__Users_burne__cargo_registry_s_18020fac0);
LAB_18009e887:
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("already called",0xe,&PTR_s_C__Users_burne__cargo_registry_s_18020faa8);
}


