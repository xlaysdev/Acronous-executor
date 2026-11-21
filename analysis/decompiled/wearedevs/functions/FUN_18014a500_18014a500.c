/* FUN_18014a500 @ 18014a500 */

undefined8 * FUN_18014a500(undefined8 *param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_140;
  undefined1 local_138 [232];
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_2 != 1) {
    *param_1 = 4;
    return param_1;
  }
  uVar1 = *(ulonglong *)(param_2 + 2);
  if (uVar1 < *(ulonglong *)(param_3 + 0x10)) {
    uVar2 = *(ulonglong *)(*(longlong *)(param_3 + 8) + uVar1 * 0xf8);
    if (uVar2 != 2) {
      local_50 = *(ulonglong *)(param_2 + 4);
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 8) + uVar1 * 0xf8);
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      memcpy(&local_140,puVar4 + 1,0xf0);
      *puVar4 = 2;
      puVar4[1] = uVar3;
      *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) + -1;
      *(ulonglong *)(param_3 + 0x20) = uVar1;
      if (uVar1 == local_50) {
        if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: slot.next.is_none()",0x25,
                        &PTR_s_C__Users_burne__cargo_registry_s_180254fd0,param_4,uVar2);
        }
        param_2[0] = 0;
        param_2[1] = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180254f90);
        }
        param_2[0] = 1;
        param_2[1] = 0;
        *(undefined8 *)(param_2 + 2) = local_140;
      }
      memcpy(param_1,local_138,0xe8);
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_180254f78);
}


